// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef VERILATED_VJPEG_CORE_JPEG_IDCT_TRANSPOSE_RAM_H_
#define VERILATED_VJPEG_CORE_JPEG_IDCT_TRANSPOSE_RAM_H_  // guard

#include "verilated.h"

class Vjpeg_core__Syms;

class Vjpeg_core_jpeg_idct_transpose_ram final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk0_i,0,0);
    VL_IN8(__PVT__clk1_i,0,0);
    VL_IN8(__PVT__rst0_i,0,0);
    VL_IN8(__PVT__addr0_i,4,0);
    VL_IN8(__PVT__wr0_i,0,0);
    VL_IN8(__PVT__rst1_i,0,0);
    VL_IN8(__PVT__addr1_i,4,0);
    VL_IN8(__PVT__wr1_i,0,0);
    CData/*4:0*/ __Vdlyvdim0__ram__v0;
    CData/*0:0*/ __Vdlyvset__ram__v0;
    VL_IN(__PVT__data0_i,31,0);
    VL_IN(__PVT__data1_i,31,0);
    VL_OUT(__PVT__data0_o,31,0);
    VL_OUT(__PVT__data1_o,31,0);
    IData/*31:0*/ __PVT__ram_read1_q;
    IData/*31:0*/ __Vdlyvval__ram__v0;
    VlUnpacked<IData/*31:0*/, 32> ram;

    // INTERNAL VARIABLES
    Vjpeg_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vjpeg_core_jpeg_idct_transpose_ram(Vjpeg_core__Syms* symsp, const char* v__name);
    ~Vjpeg_core_jpeg_idct_transpose_ram();
    VL_UNCOPYABLE(Vjpeg_core_jpeg_idct_transpose_ram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
