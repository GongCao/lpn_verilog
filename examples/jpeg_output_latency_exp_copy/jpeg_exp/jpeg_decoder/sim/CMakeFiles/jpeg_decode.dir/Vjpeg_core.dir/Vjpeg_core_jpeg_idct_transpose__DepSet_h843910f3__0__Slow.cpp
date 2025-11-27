// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_idct_transpose.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_idct_transpose___ctor_var_reset(Vjpeg_core_jpeg_idct_transpose* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_idct_transpose___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_start_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_end_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inport_idx_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__outport_ready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_data0_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__outport_data1_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__outport_data2_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__outport_data3_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__outport_idx_o = VL_RAND_RESET_I(3);
    vlSelf->__PVT__block_wr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__block_rd_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_idx_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__rd_addr_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__wr_ptr_w = VL_RAND_RESET_I(5);
    vlSelf->__Vcellinp__u_ram0__addr1_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__block_ready_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__state_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__next_state_r = VL_RAND_RESET_I(2);
    vlSelf->__VdfgTmp_ha5b8369a__0 = 0;
    vlSelf->__Vdly__rd_idx_q = VL_RAND_RESET_I(6);
}
