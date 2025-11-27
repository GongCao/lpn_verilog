// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_output.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_output___ctor_var_reset(Vjpeg_core_jpeg_output* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_start_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_end_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_width_i = VL_RAND_RESET_I(16);
    vlSelf->__PVT__img_height_i = VL_RAND_RESET_I(16);
    vlSelf->__PVT__img_mode_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inport_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inport_idx_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inport_id_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__outport_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_width_o = VL_RAND_RESET_I(16);
    vlSelf->__PVT__outport_height_o = VL_RAND_RESET_I(16);
    vlSelf->__PVT__outport_pixel_x_o = VL_RAND_RESET_I(16);
    vlSelf->__PVT__outport_pixel_y_o = VL_RAND_RESET_I(16);
    vlSelf->__PVT__outport_pixel_r_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__outport_pixel_g_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__outport_pixel_b_o = VL_RAND_RESET_I(8);
    vlSelf->__PVT__idle_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__output_space_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__y_pop_w = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__u_ram_y__push_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__u_ram_cb__push_i = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__u_ram_cr__push_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_valid_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_value_w = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_pop_w = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__u_info__push_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idx_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__subsmpl_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__active_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__r_conv_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__g_conv_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__b_conv_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pixel_x_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__pixel_y_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__pixel_r_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pixel_g_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__pixel_b_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__idle_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_info__DOT__accept_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__u_info__DOT__ram_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_info__DOT__rd_ptr_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_info__DOT__wr_ptr_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_info__DOT__count_q = VL_RAND_RESET_I(4);
}
