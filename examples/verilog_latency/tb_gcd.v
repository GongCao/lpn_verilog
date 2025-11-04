`timescale 1ns/1ps

module tb_gcd;
    localparam WIDTH = 16;
    localparam CLK_PERIOD = 10; // 100 MHz

    reg clk = 0;
    reg rst = 1;
    reg start = 0;
    reg [WIDTH-1:0] a = 0, b = 0;
    wire done;
    wire [WIDTH-1:0] result;

    gcd_accel #(.WIDTH(WIDTH)) dut (
        .clk(clk), .rst(rst), .start(start), .a(a), .b(b), .done(done), .result(result)
    );

    // Clock
    always #(CLK_PERIOD/2) clk = ~clk;

    // Test config via +args
    integer NUM_TESTS = 10;
    integer SEED = 1;
    integer MAX_CYCLES = 20000; // per test timeout

    initial begin
        if ($value$plusargs("NUM_TESTS=%d", NUM_TESTS)) begin end
        if ($value$plusargs("SEED=%d", SEED)) begin end
        if ($value$plusargs("MAX_CYCLES=%d", MAX_CYCLES)) begin end
        // Deassert reset
        repeat (5) @(posedge clk);
        rst = 0;
    end

    // Golden GCD (Verilog-2001: no 'return')
    function integer gcd_int;
        input integer aa;
        input integer bb;
        integer ta, tb, t;
        begin
            // abs
            ta = (aa < 0) ? -aa : aa;
            tb = (bb < 0) ? -bb : bb;

            if (ta == 0) begin
                gcd_int = tb;
            end else if (tb == 0) begin
                gcd_int = ta;
            end else begin
                while (tb != 0) begin
                    t = ta % tb;
                    ta = tb;
                    tb = t;
                end
                gcd_int = ta;
            end
        end
    endfunction

    integer i, pass_cnt=0, fail_cnt=0, cycles, cycles_sum=0, exp_gcd;
    integer aa, bb;

    // Named block so we can `disable` portably on older Icarus
    task run_one;
        input integer ta;
        input integer tb;
        integer guard;
        begin : RUN_ONE_BLOCK
            // Drive inputs
            a <= ta[WIDTH-1:0];
            b <= tb[WIDTH-1:0];

            // Pulse start
            @(posedge clk);
            start <= 1;
            @(posedge clk);
            start <= 0;

            // Measure cycles until done
            cycles = 0;
            guard = 0;
            while (done != 1'b1) begin
                @(posedge clk);
                cycles = cycles + 1;
                guard = guard + 1;
                if (guard > MAX_CYCLES) begin
                    $display("TEST timeout: a=%0d b=%0d after %0d cycles -> TIMEOUT", ta, tb, cycles);
                    fail_cnt = fail_cnt + 1;
                    disable RUN_ONE_BLOCK; // early exit
                end
            end

            // Sample result on same cycle as done=1
            exp_gcd = gcd_int(ta, tb);
            if (result !== (exp_gcd[WIDTH-1:0])) begin
                $display("TEST fail: a=%0d b=%0d got=%0d exp=%0d cycles=%0d",
                         ta, tb, result, exp_gcd[WIDTH-1:0], cycles);
                fail_cnt = fail_cnt + 1;
            end else begin
                pass_cnt = pass_cnt + 1;
                cycles_sum = cycles_sum + cycles;
                $display("TEST pass: a=%0d b=%0d gcd=%0d cycles=%0d", ta, tb, result, cycles);
            end
        end
    endtask

    // Deterministic pseudo-random gen
    integer rand_state;
    function integer urand16;
        input integer s;
        begin
            urand16 = (1103515245*s + 12345) & 16'hFFFF;
        end
    endfunction

    initial begin
        @(negedge rst);
        rand_state = SEED;

        // Edge cases
        run_one(48, 18);     // gcd=6
        run_one(0, 37);      // gcd=37
        run_one(65535, 32768);

        // Remaining randomized tests
        for (i = 0; i < (NUM_TESTS-3); i = i + 1) begin
            rand_state = urand16(rand_state);
            aa = (rand_state & 16'hFFFF);
            if (aa == 0) aa = 1;
            rand_state = urand16(rand_state);
            bb = (rand_state & 16'hFFFF);
            if (bb == 0) bb = 1;
            run_one(aa, bb);
        end

        // Summary
        $display("TOTAL_TESTS:%0d", NUM_TESTS);
        $display("PASSES:%0d", pass_cnt);
        $display("FAILS:%0d", fail_cnt);
        if (pass_cnt > 0) begin
            $display("AVG_LATENCY:%0f", 1.0*cycles_sum/pass_cnt);
        end else begin
            $display("AVG_LATENCY:%0f", 1.0*MAX_CYCLES);
        end
        $finish;
    end

endmodule