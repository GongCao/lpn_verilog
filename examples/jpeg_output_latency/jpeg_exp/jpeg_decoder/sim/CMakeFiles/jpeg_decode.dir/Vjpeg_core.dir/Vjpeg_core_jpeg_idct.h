// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef VERILATED_VJPEG_CORE_JPEG_IDCT_H_
#define VERILATED_VJPEG_CORE_JPEG_IDCT_H_  // guard

#include "verilated.h"

class Vjpeg_core__Syms;
class Vjpeg_core_jpeg_idct_ram;
class Vjpeg_core_jpeg_idct_transpose;


class Vjpeg_core_jpeg_idct final : public VerilatedModule {
  public:
    // CELLS
    Vjpeg_core_jpeg_idct_ram* u_input;
    Vjpeg_core_jpeg_idct_transpose* u_transpose;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__img_start_i,0,0);
        VL_IN8(__PVT__img_end_i,0,0);
        VL_IN8(__PVT__inport_valid_i,0,0);
        VL_IN8(__PVT__inport_idx_i,5,0);
        VL_IN8(__PVT__inport_eob_i,0,0);
        VL_IN8(__PVT__outport_accept_i,0,0);
        VL_OUT8(__PVT__inport_accept_o,0,0);
        VL_OUT8(__PVT__outport_valid_o,0,0);
        VL_OUT8(__PVT__outport_idx_o,5,0);
        CData/*0:0*/ __Vcellinp__u_id_fifo__pop_i;
        CData/*0:0*/ __PVT__u_id_fifo__DOT__accept_o;
        CData/*0:0*/ __PVT__u_id_fifo__DOT__valid_o;
        CData/*2:0*/ __PVT__u_id_fifo__DOT__rd_ptr_q;
        CData/*2:0*/ __PVT__u_id_fifo__DOT__wr_ptr_q;
        CData/*3:0*/ __PVT__u_id_fifo__DOT__count_q;
        CData/*0:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__out_stg0_valid_q;
        CData/*2:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__out_stg0_idx_q;
        CData/*0:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__out_stg1_valid_q;
        CData/*2:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__out_stg1_idx_q;
        CData/*0:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_valid_q;
        CData/*2:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q;
        CData/*0:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__out_stg3_valid_q;
        CData/*2:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__out_stg3_idx_q;
        CData/*7:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__valid_q;
        CData/*5:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__ptr_q;
        CData/*0:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__out_stg0_valid_q;
        CData/*2:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__out_stg0_idx_q;
        CData/*0:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__out_stg1_valid_q;
        CData/*2:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__out_stg1_idx_q;
        CData/*0:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_valid_q;
        CData/*2:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q;
        CData/*0:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__out_stg3_valid_q;
        CData/*2:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__out_stg3_idx_q;
        CData/*7:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__valid_q;
        CData/*5:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__ptr_q;
        VL_IN16(__PVT__inport_data_i,15,0);
        VL_IN(__PVT__inport_id_i,31,0);
        VL_OUT(__PVT__outport_data_o,31,0);
        VL_OUT(__PVT__outport_id_o,31,0);
        IData/*31:0*/ __PVT__idct_x_data_w;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__block_in_0_1;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__block_in_2_3;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__block_in_4_5;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__block_in_6_7;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__i0;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul0_a;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul0_b;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul1_a;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul1_b;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul2_a;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul2_b;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul3_a;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul3_b;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul4_a;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul4_b;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul0_q;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul1_q;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul2_q;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul3_q;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul4_q;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul0;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul1;
    };
    struct {
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul2;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul3;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__mul4;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__o_s5;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__o_s6;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__o_s7;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__o_t0;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__o_t1;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__o_t2;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__o_t3;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__o_t4;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__o_t5;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__o_t6;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__o_t7;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__o_t6_5;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__o_t5_6;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_x__DOT__block_out_tmp;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__i0;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul0_a;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul0_b;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul1_a;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul1_b;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul2_a;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul2_b;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul3_a;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul3_b;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul4_a;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul4_b;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul0_q;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul1_q;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul2_q;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul3_q;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul4_q;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul0;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul1;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul2;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul3;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__mul4;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__o_s5;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__o_s6;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__o_s7;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__o_t0;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__o_t1;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__o_t2;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__o_t3;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__o_t4;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__o_t5;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__o_t6;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__o_t7;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__o_t6_5;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__o_t5_6;
        IData/*31:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__block_out_tmp;
        VlUnpacked<IData/*31:0*/, 8> __PVT__u_id_fifo__DOT__ram_q;
        VlUnpacked<IData/*31:0*/, 8> __PVT__genblk1__DOT__u_idct_x__DOT__block_out;
        VlUnpacked<IData/*31:0*/, 8> __PVT__genblk2__DOT__u_idct_y__DOT__block_out;
    };

    // INTERNAL VARIABLES
    Vjpeg_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vjpeg_core_jpeg_idct(Vjpeg_core__Syms* symsp, const char* v__name);
    ~Vjpeg_core_jpeg_idct();
    VL_UNCOPYABLE(Vjpeg_core_jpeg_idct);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    uint32_t get_sample();
    uint32_t get_sample_idx();
    bool get_valid();
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
