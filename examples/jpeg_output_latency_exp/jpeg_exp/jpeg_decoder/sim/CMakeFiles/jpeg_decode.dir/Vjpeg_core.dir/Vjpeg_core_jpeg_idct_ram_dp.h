// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef VERILATED_VJPEG_CORE_JPEG_IDCT_RAM_DP_H_
#define VERILATED_VJPEG_CORE_JPEG_IDCT_RAM_DP_H_  // guard

#include "verilated.h"

class Vjpeg_core__Syms;

class Vjpeg_core_jpeg_idct_ram_dp final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk0_i,0,0);
    VL_IN8(__PVT__clk1_i,0,0);
    VL_IN8(__PVT__rst0_i,0,0);
    VL_IN8(__PVT__addr0_i,5,0);
    VL_IN8(__PVT__wr0_i,0,0);
    VL_IN8(__PVT__rst1_i,0,0);
    VL_IN8(__PVT__addr1_i,5,0);
    VL_IN8(__PVT__wr1_i,0,0);
    VL_IN16(__PVT__data0_i,15,0);
    VL_IN16(__PVT__data1_i,15,0);
    VL_OUT16(__PVT__data0_o,15,0);
    VL_OUT16(__PVT__data1_o,15,0);
    SData/*15:0*/ __PVT__ram_read1_q;
    VlUnpacked<SData/*15:0*/, 64> ram;

    // INTERNAL VARIABLES
    Vjpeg_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vjpeg_core_jpeg_idct_ram_dp(Vjpeg_core__Syms* symsp, const char* v__name);
    ~Vjpeg_core_jpeg_idct_ram_dp();
    VL_UNCOPYABLE(Vjpeg_core_jpeg_idct_ram_dp);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
