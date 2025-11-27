// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef VERILATED_VJPEG_CORE_JPEG_IDCT_TRANSPOSE_H_
#define VERILATED_VJPEG_CORE_JPEG_IDCT_TRANSPOSE_H_  // guard

#include "verilated.h"

class Vjpeg_core__Syms;
class Vjpeg_core_jpeg_idct_transpose_ram;


class Vjpeg_core_jpeg_idct_transpose final : public VerilatedModule {
  public:
    // CELLS
    Vjpeg_core_jpeg_idct_transpose_ram* u_ram0;
    Vjpeg_core_jpeg_idct_transpose_ram* u_ram1;
    Vjpeg_core_jpeg_idct_transpose_ram* u_ram2;
    Vjpeg_core_jpeg_idct_transpose_ram* u_ram3;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__img_start_i,0,0);
    VL_IN8(__PVT__img_end_i,0,0);
    VL_IN8(__PVT__inport_valid_i,0,0);
    VL_IN8(__PVT__inport_idx_i,5,0);
    VL_IN8(__PVT__outport_ready_i,0,0);
    VL_OUT8(__PVT__inport_accept_o,0,0);
    VL_OUT8(__PVT__outport_valid_o,0,0);
    VL_OUT8(__PVT__outport_idx_o,2,0);
    CData/*0:0*/ __PVT__block_wr_q;
    CData/*0:0*/ __PVT__block_rd_q;
    CData/*5:0*/ __PVT__rd_idx_q;
    CData/*3:0*/ __PVT__rd_addr_q;
    CData/*4:0*/ __PVT__wr_ptr_w;
    CData/*4:0*/ __Vcellinp__u_ram0__addr1_i;
    CData/*1:0*/ __PVT__block_ready_q;
    CData/*1:0*/ __PVT__state_q;
    CData/*1:0*/ __PVT__next_state_r;
    CData/*0:0*/ __VdfgTmp_ha5b8369a__0;
    CData/*5:0*/ __Vdly__rd_idx_q;
    VL_IN(__PVT__inport_data_i,31,0);
    VL_OUT(__PVT__outport_data0_o,31,0);
    VL_OUT(__PVT__outport_data1_o,31,0);
    VL_OUT(__PVT__outport_data2_o,31,0);
    VL_OUT(__PVT__outport_data3_o,31,0);

    // INTERNAL VARIABLES
    Vjpeg_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vjpeg_core_jpeg_idct_transpose(Vjpeg_core__Syms* symsp, const char* v__name);
    ~Vjpeg_core_jpeg_idct_transpose();
    VL_UNCOPYABLE(Vjpeg_core_jpeg_idct_transpose);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
