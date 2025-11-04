// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef VERILATED_VJPEG_CORE___024ROOT_H_
#define VERILATED_VJPEG_CORE___024ROOT_H_  // guard

#include "verilated.h"

class Vjpeg_core__Syms;
class Vjpeg_core_jpeg_core;


class Vjpeg_core___024root final : public VerilatedModule {
  public:
    // CELLS
    Vjpeg_core_jpeg_core* jpeg_core;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(inport_valid_i,0,0);
    VL_IN8(inport_strb_i,3,0);
    VL_IN8(inport_last_i,0,0);
    VL_IN8(outport_accept_i,0,0);
    VL_OUT8(inport_accept_o,0,0);
    VL_OUT8(outport_valid_o,0,0);
    VL_OUT8(outport_pixel_r_o,7,0);
    VL_OUT8(outport_pixel_g_o,7,0);
    VL_OUT8(outport_pixel_b_o,7,0);
    VL_OUT8(idle_o,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_i__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(outport_width_o,15,0);
    VL_OUT16(outport_height_o,15,0);
    VL_OUT16(outport_pixel_x_o,15,0);
    VL_OUT16(outport_pixel_y_o,15,0);
    VL_IN(inport_data_i,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vjpeg_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vjpeg_core___024root(Vjpeg_core__Syms* symsp, const char* v__name);
    ~Vjpeg_core___024root();
    VL_UNCOPYABLE(Vjpeg_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
