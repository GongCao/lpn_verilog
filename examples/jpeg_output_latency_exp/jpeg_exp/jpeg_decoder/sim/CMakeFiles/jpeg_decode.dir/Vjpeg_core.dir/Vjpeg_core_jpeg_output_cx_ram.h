// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef VERILATED_VJPEG_CORE_JPEG_OUTPUT_CX_RAM_H_
#define VERILATED_VJPEG_CORE_JPEG_OUTPUT_CX_RAM_H_  // guard

#include "verilated.h"

class Vjpeg_core__Syms;
class Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8;


class Vjpeg_core_jpeg_output_cx_ram final : public VerilatedModule {
  public:
    // CELLS
    Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8* u_ram;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__wr_idx_i,5,0);
    VL_IN8(__PVT__push_i,0,0);
    VL_IN8(__PVT__mode420_i,0,0);
    VL_IN8(__PVT__pop_i,0,0);
    VL_IN8(__PVT__flush_i,0,0);
    VL_OUT8(__PVT__valid_o,0,0);
    CData/*7:0*/ __PVT__rd_ptr_q;
    CData/*7:0*/ __PVT__wr_ptr_q;
    CData/*7:0*/ __PVT__write_next_w;
    CData/*0:0*/ __PVT__rd_q;
    CData/*7:0*/ __PVT__rd_ptr_next_w;
    CData/*7:0*/ __PVT__cx_idx_q;
    CData/*5:0*/ __PVT__cx_rd_ptr_r;
    CData/*1:0*/ __PVT__cx_half_q;
    CData/*5:0*/ __PVT__cx_rd_ptr_q;
    CData/*7:0*/ __PVT__rd_addr_w;
    CData/*0:0*/ __PVT__rd_skid_q;
    CData/*7:0*/ __Vcellinp__u_ram__addr0_i;
    VL_IN(__PVT__data_in_i,31,0);
    VL_OUT(__PVT__data_out_o,31,0);
    VL_OUT(__PVT__level_o,31,0);
    IData/*31:0*/ __PVT__rd_skid_data_q;
    IData/*31:0*/ __PVT__count_q;
    IData/*31:0*/ __PVT__count_r;

    // INTERNAL VARIABLES
    Vjpeg_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vjpeg_core_jpeg_output_cx_ram(Vjpeg_core__Syms* symsp, const char* v__name);
    ~Vjpeg_core_jpeg_output_cx_ram();
    VL_UNCOPYABLE(Vjpeg_core_jpeg_output_cx_ram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
