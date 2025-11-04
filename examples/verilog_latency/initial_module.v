`timescale 1ns/1ps

// Fixed interface (do not change): a simple GCD accelerator
// Handshake: pulse `start` high for 1 cycle; `done` pulses high for 1 cycle when `result` is valid.
// Reset: synchronous, active-high.
module gcd_accel #(
    parameter WIDTH = 16
)(
    input  wire                 clk,
    input  wire                 rst,
    input  wire                 start,
    input  wire [WIDTH-1:0]     a,
    input  wire [WIDTH-1:0]     b,
    output reg                  done,
    output reg  [WIDTH-1:0]     result
);

    // EVOLVE-BLOCK-START
    // Baseline: subtraction-based GCD — one subtraction per cycle (intentionally slow).
    // The goal for the evolution is to keep the interface/semantics but **reduce cycles** between `start` and `done`.
    reg [WIDTH-1:0] x, y;
    reg             busy;

    always @(posedge clk) begin
        if (rst) begin
            x     <= {WIDTH{1'b0}};
            y     <= {WIDTH{1'b0}};
            result<= {WIDTH{1'b0}};
            done  <= 1'b0;
            busy  <= 1'b0;
        end else begin
            done <= 1'b0; // 1-cycle pulse when finishing

            if (start && !busy) begin
                // Latch inputs and begin
                x    <= a;
                y    <= b;
                busy <= 1'b1;
            end else if (busy) begin
                if (x == 0) begin
                    result <= y;
                    busy   <= 1'b0;
                    done   <= 1'b1;
                end else if (y == 0) begin
                    result <= x;
                    busy   <= 1'b0;
                    done   <= 1'b1;
                end else if (x >= y) begin
                    x <= x - y;
                end else begin
                    y <= y - x;
                end
            end
        end
    end
    // EVOLVE-BLOCK-END

endmodule