// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef VERILATED_VJPEG_CORE_JPEG_BITBUFFER_H_
#define VERILATED_VJPEG_CORE_JPEG_BITBUFFER_H_  // guard

#include "verilated.h"

class Vjpeg_core__Syms;

class Vjpeg_core_jpeg_bitbuffer final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__img_start_i,0,0);
    VL_IN8(__PVT__img_end_i,0,0);
    VL_IN8(__PVT__inport_valid_i,0,0);
    VL_IN8(__PVT__inport_data_i,7,0);
    VL_IN8(__PVT__inport_last_i,0,0);
    VL_IN8(__PVT__outport_pop_i,5,0);
    VL_OUT8(__PVT__inport_accept_o,0,0);
    VL_OUT8(__PVT__outport_valid_o,0,0);
    VL_OUT8(__PVT__outport_last_o,0,0);
    CData/*5:0*/ __PVT__rd_ptr_q;
    CData/*5:0*/ __PVT__wr_ptr_q;
    CData/*6:0*/ __PVT__count_q;
    CData/*0:0*/ __PVT__drain_q;
    CData/*6:0*/ __PVT__count_r;
    VL_OUT(__PVT__outport_data_o,31,0);
    QData/*39:0*/ __PVT__fifo_data_r;
    VlUnpacked<CData/*7:0*/, 8> __PVT__ram_q;

    // INTERNAL VARIABLES
    Vjpeg_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vjpeg_core_jpeg_bitbuffer(Vjpeg_core__Syms* symsp, const char* v__name);
    ~Vjpeg_core_jpeg_bitbuffer();
    VL_UNCOPYABLE(Vjpeg_core_jpeg_bitbuffer);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    uint32_t get_data();
    bool get_valid();
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
