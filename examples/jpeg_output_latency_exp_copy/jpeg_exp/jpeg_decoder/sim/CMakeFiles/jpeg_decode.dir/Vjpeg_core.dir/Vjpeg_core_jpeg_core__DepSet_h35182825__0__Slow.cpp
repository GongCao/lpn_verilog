// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_core.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_core___ctor_var_reset(Vjpeg_core_jpeg_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vjpeg_core_jpeg_core___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->inport_valid_i = VL_RAND_RESET_I(1);
    vlSelf->inport_data_i = VL_RAND_RESET_I(32);
    vlSelf->inport_strb_i = VL_RAND_RESET_I(4);
    vlSelf->inport_last_i = VL_RAND_RESET_I(1);
    vlSelf->outport_accept_i = VL_RAND_RESET_I(1);
    vlSelf->inport_accept_o = VL_RAND_RESET_I(1);
    vlSelf->outport_valid_o = VL_RAND_RESET_I(1);
    vlSelf->outport_width_o = VL_RAND_RESET_I(16);
    vlSelf->outport_height_o = VL_RAND_RESET_I(16);
    vlSelf->outport_pixel_x_o = VL_RAND_RESET_I(16);
    vlSelf->outport_pixel_y_o = VL_RAND_RESET_I(16);
    vlSelf->outport_pixel_r_o = VL_RAND_RESET_I(8);
    vlSelf->outport_pixel_g_o = VL_RAND_RESET_I(8);
    vlSelf->outport_pixel_b_o = VL_RAND_RESET_I(8);
    vlSelf->idle_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_end_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bb_inport_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dqt_cfg_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_jpeg_input__DOT__byte_idx_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_jpeg_input__DOT__data_r = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_jpeg_input__DOT__last_b_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_jpeg_input__DOT__token_soi_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_jpeg_input__DOT__token_sof0_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_jpeg_input__DOT__token_eoi_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_jpeg_input__DOT__token_sos_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_jpeg_input__DOT__token_pad_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_jpeg_input__DOT__state_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_jpeg_input__DOT__length_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_jpeg_input__DOT__data_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_jpeg_input__DOT__data_data_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_jpeg_input__DOT__idx_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__u_jpeg_input__DOT__img_height_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_jpeg_input__DOT__img_width_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_jpeg_input__DOT__img_num_comp_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_jpeg_input__DOT__img_y_factor_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_jpeg_input__DOT__img_y_dqt_table_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_jpeg_input__DOT__img_cb_factor_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_jpeg_input__DOT__img_cb_dqt_table_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_jpeg_input__DOT__img_cr_factor_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_jpeg_input__DOT__img_cr_dqt_table_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_jpeg_input__DOT__img_mode_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_jpeg_input__DOT__eof_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_jpeg_input__DOT__start_q = VL_RAND_RESET_I(1);
    vlSelf->u_jpeg_input__DOT____VdfgTmp_he4b2d5da__0 = 0;
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_value_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_width_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = VL_RAND_RESET_I(5);
    vlSelf->__Vdly__u_jpeg_input__DOT__idx_q = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__u_jpeg_input__DOT__img_width_q = VL_RAND_RESET_I(16);
}
