// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_dqt.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_dqt___eval_initial__TOP__jpeg_core__u_jpeg_dqt(Vjpeg_core_jpeg_dqt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt___eval_initial__TOP__jpeg_core__u_jpeg_dqt\n"); );
    // Body
    vlSelf->__PVT__table_src_w[3U] = 0U;
}

VL_ATTR_COLD void Vjpeg_core_jpeg_dqt___ctor_var_reset(Vjpeg_core_jpeg_dqt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_start_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_end_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_dqt_table_y_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__img_dqt_table_cb_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__img_dqt_table_cr_i = VL_RAND_RESET_I(2);
    vlSelf->__PVT__cfg_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cfg_data_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__cfg_last_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_data_i = VL_RAND_RESET_I(16);
    vlSelf->__PVT__inport_idx_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inport_id_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inport_eob_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cfg_accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_blk_space_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_data_o = VL_RAND_RESET_I(16);
    vlSelf->__PVT__outport_idx_o = VL_RAND_RESET_I(6);
    vlSelf->__PVT__outport_id_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__outport_eob_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__table_dqt_q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__idx_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__cfg_table_q = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__table_src_w[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__dqt_write_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dqt_table_addr_w = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dqt_entry_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inport_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_data_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__inport_idx_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inport_id_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inport_eob_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_data_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__outport_idx_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__outport_id_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__outport_eob_q = VL_RAND_RESET_I(1);
}
