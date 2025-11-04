// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef VERILATED_VJPEG_CORE_JPEG_OUTPUT_H_
#define VERILATED_VJPEG_CORE_JPEG_OUTPUT_H_  // guard

#include "verilated.h"

class Vjpeg_core__Syms;
class Vjpeg_core_jpeg_output_y_ram;
class Vjpeg_core_jpeg_output_cx_ram;


class Vjpeg_core_jpeg_output final : public VerilatedModule {
  public:
    // CELLS
    Vjpeg_core_jpeg_output_y_ram* u_ram_y;
    Vjpeg_core_jpeg_output_cx_ram* u_ram_cb;
    Vjpeg_core_jpeg_output_cx_ram* u_ram_cr;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__img_start_i,0,0);
    VL_IN8(__PVT__img_end_i,0,0);
    VL_IN8(__PVT__img_mode_i,1,0);
    VL_IN8(__PVT__inport_valid_i,0,0);
    VL_IN8(__PVT__inport_idx_i,5,0);
    VL_IN8(__PVT__outport_accept_i,0,0);
    VL_OUT8(__PVT__inport_accept_o,0,0);
    VL_OUT8(__PVT__outport_valid_o,0,0);
    VL_OUT8(__PVT__outport_pixel_r_o,7,0);
    VL_OUT8(__PVT__outport_pixel_g_o,7,0);
    VL_OUT8(__PVT__outport_pixel_b_o,7,0);
    VL_OUT8(__PVT__idle_o,0,0);
    CData/*0:0*/ __PVT__valid_r;
    CData/*0:0*/ __PVT__output_space_w;
    CData/*0:0*/ __PVT__y_pop_w;
    CData/*0:0*/ __Vcellinp__u_ram_y__push_i;
    CData/*0:0*/ __Vcellinp__u_ram_cb__push_i;
    CData/*0:0*/ __Vcellinp__u_ram_cr__push_i;
    CData/*0:0*/ __PVT__id_valid_w;
    CData/*0:0*/ __PVT__id_pop_w;
    CData/*0:0*/ __Vcellinp__u_info__push_i;
    CData/*5:0*/ __PVT__idx_q;
    CData/*1:0*/ __PVT__subsmpl_q;
    CData/*0:0*/ __PVT__active_q;
    CData/*0:0*/ __PVT__valid_q;
    CData/*7:0*/ __PVT__pixel_r_q;
    CData/*7:0*/ __PVT__pixel_g_q;
    CData/*7:0*/ __PVT__pixel_b_q;
    CData/*0:0*/ __PVT__idle_q;
    CData/*0:0*/ __PVT__u_info__DOT__accept_o;
    CData/*2:0*/ __PVT__u_info__DOT__rd_ptr_q;
    CData/*2:0*/ __PVT__u_info__DOT__wr_ptr_q;
    CData/*3:0*/ __PVT__u_info__DOT__count_q;
    VL_IN16(__PVT__img_width_i,15,0);
    VL_IN16(__PVT__img_height_i,15,0);
    VL_OUT16(__PVT__outport_width_o,15,0);
    VL_OUT16(__PVT__outport_height_o,15,0);
    VL_OUT16(__PVT__outport_pixel_x_o,15,0);
    VL_OUT16(__PVT__outport_pixel_y_o,15,0);
    SData/*15:0*/ __PVT__pixel_x_q;
    SData/*15:0*/ __PVT__pixel_y_q;
    VL_IN(__PVT__inport_data_i,31,0);
    VL_IN(__PVT__inport_id_i,31,0);
    IData/*31:0*/ __PVT__id_value_w;
    IData/*31:0*/ __PVT__r_conv_r;
    IData/*31:0*/ __PVT__g_conv_r;
    IData/*31:0*/ __PVT__b_conv_r;
    VlUnpacked<IData/*31:0*/, 8> __PVT__u_info__DOT__ram_q;

    // INTERNAL VARIABLES
    Vjpeg_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vjpeg_core_jpeg_output(Vjpeg_core__Syms* symsp, const char* v__name);
    ~Vjpeg_core_jpeg_output();
    VL_UNCOPYABLE(Vjpeg_core_jpeg_output);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
