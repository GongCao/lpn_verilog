// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef VERILATED_VJPEG_CORE_JPEG_OUTPUT_Y_RAM_RAM_DP_512_9_H_
#define VERILATED_VJPEG_CORE_JPEG_OUTPUT_Y_RAM_RAM_DP_512_9_H_  // guard

#include "verilated.h"

class Vjpeg_core__Syms;

class Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk0_i,0,0);
    VL_IN8(__PVT__clk1_i,0,0);
    VL_IN8(__PVT__rst0_i,0,0);
    VL_IN8(__PVT__wr0_i,0,0);
    VL_IN8(__PVT__rst1_i,0,0);
    VL_IN8(__PVT__wr1_i,0,0);
    VL_IN16(__PVT__addr0_i,8,0);
    VL_IN16(__PVT__addr1_i,8,0);
    VL_IN(__PVT__data0_i,31,0);
    VL_IN(__PVT__data1_i,31,0);
    VL_OUT(__PVT__data0_o,31,0);
    VL_OUT(__PVT__data1_o,31,0);
    IData/*31:0*/ __PVT__ram_read1_q;
    VlUnpacked<IData/*31:0*/, 512> ram;

    // INTERNAL VARIABLES
    Vjpeg_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9(Vjpeg_core__Syms* symsp, const char* v__name);
    ~Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9();
    VL_UNCOPYABLE(Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
