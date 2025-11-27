// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef VERILATED_VJPEG_CORE_JPEG_CORE_H_
#define VERILATED_VJPEG_CORE_JPEG_CORE_H_  // guard

#include "verilated.h"

class Vjpeg_core__Syms;
class Vjpeg_core_jpeg_idct;
class Vjpeg_core_jpeg_dqt;
class Vjpeg_core_jpeg_output;
class Vjpeg_core_jpeg_bitbuffer;
class Vjpeg_core_jpeg_mcu_proc;


class Vjpeg_core_jpeg_core final : public VerilatedModule {
  public:
    // CELLS
    Vjpeg_core_jpeg_idct* u_jpeg_idct;
    Vjpeg_core_jpeg_dqt* u_jpeg_dqt;
    Vjpeg_core_jpeg_output* u_jpeg_output;
    Vjpeg_core_jpeg_bitbuffer* u_jpeg_bitbuffer;
    Vjpeg_core_jpeg_mcu_proc* u_jpeg_mcu_proc;

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
    CData/*0:0*/ __PVT__img_end_w;
    CData/*0:0*/ __PVT__bb_inport_valid_w;
    CData/*0:0*/ __PVT__dqt_cfg_valid_w;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__inport_accept_w;
    CData/*1:0*/ __PVT__u_jpeg_input__DOT__byte_idx_q;
    CData/*7:0*/ __PVT__u_jpeg_input__DOT__data_r;
    CData/*7:0*/ __PVT__u_jpeg_input__DOT__last_b_q;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__token_soi_w;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__token_sof0_w;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__token_eoi_w;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__token_sos_w;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__token_pad_w;
    CData/*4:0*/ __PVT__u_jpeg_input__DOT__state_q;
    CData/*4:0*/ __PVT__u_jpeg_input__DOT__next_state_r;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__data_valid_q;
    CData/*7:0*/ __PVT__u_jpeg_input__DOT__data_data_q;
    CData/*5:0*/ __PVT__u_jpeg_input__DOT__idx_q;
    CData/*7:0*/ __PVT__u_jpeg_input__DOT__img_num_comp_q;
    CData/*7:0*/ __PVT__u_jpeg_input__DOT__img_y_factor_q;
    CData/*1:0*/ __PVT__u_jpeg_input__DOT__img_y_dqt_table_q;
    CData/*7:0*/ __PVT__u_jpeg_input__DOT__img_cb_factor_q;
    CData/*1:0*/ __PVT__u_jpeg_input__DOT__img_cb_dqt_table_q;
    CData/*7:0*/ __PVT__u_jpeg_input__DOT__img_cr_factor_q;
    CData/*1:0*/ __PVT__u_jpeg_input__DOT__img_cr_dqt_table_q;
    CData/*1:0*/ __PVT__u_jpeg_input__DOT__img_mode_q;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__eof_q;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__start_q;
    CData/*0:0*/ u_jpeg_input__DOT____VdfgTmp_he4b2d5da__0;
    CData/*0:0*/ __PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_valid_q;
    CData/*7:0*/ __PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_value_q;
    CData/*4:0*/ __PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_width_q;
    CData/*7:0*/ __PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r;
    CData/*4:0*/ __PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r;
    CData/*7:0*/ __PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r;
    CData/*4:0*/ __PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r;
    CData/*7:0*/ __PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r;
    CData/*4:0*/ __PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r;
    CData/*7:0*/ __PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r;
    CData/*4:0*/ __PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r;
    CData/*5:0*/ __Vdly__u_jpeg_input__DOT__idx_q;
    VL_OUT16(outport_width_o,15,0);
    VL_OUT16(outport_height_o,15,0);
    VL_OUT16(outport_pixel_x_o,15,0);
    VL_OUT16(outport_pixel_y_o,15,0);
    SData/*15:0*/ __PVT__u_jpeg_input__DOT__length_q;
    SData/*15:0*/ __PVT__u_jpeg_input__DOT__img_height_q;
    SData/*15:0*/ __PVT__u_jpeg_input__DOT__img_width_q;
    SData/*15:0*/ __Vdly__u_jpeg_input__DOT__img_width_q;
    VL_IN(inport_data_i,31,0);

    // INTERNAL VARIABLES
    Vjpeg_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vjpeg_core_jpeg_core(Vjpeg_core__Syms* symsp, const char* v__name);
    ~Vjpeg_core_jpeg_core();
    VL_UNCOPYABLE(Vjpeg_core_jpeg_core);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
