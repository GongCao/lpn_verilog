// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_output_y_ram.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_output_y_ram___ctor_var_reset(Vjpeg_core_jpeg_output_y_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_output_y_ram___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wr_idx_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__data_in_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__push_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pop_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_out_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__level_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rd_ptr_q = VL_RAND_RESET_I(9);
    vlSelf->__PVT__wr_ptr_q = VL_RAND_RESET_I(9);
    vlSelf->__PVT__write_next_w = VL_RAND_RESET_I(9);
    vlSelf->__PVT__read_ok_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_ptr_next_w = VL_RAND_RESET_I(9);
    vlSelf->__PVT__rd_skid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_skid_data_q = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__u_ram__addr0_i = VL_RAND_RESET_I(9);
    vlSelf->__PVT__count_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__count_r = VL_RAND_RESET_I(32);
}
