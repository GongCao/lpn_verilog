// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_idct.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_idct___ctor_var_reset(Vjpeg_core_jpeg_idct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_start_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_end_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_data_i = VL_RAND_RESET_I(16);
    vlSelf->__PVT__inport_idx_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inport_eob_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_id_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__outport_accept_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__outport_idx_o = VL_RAND_RESET_I(6);
    vlSelf->__PVT__outport_id_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idct_x_data_w = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__u_id_fifo__pop_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_id_fifo__DOT__accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_id_fifo__DOT__valid_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__u_id_fifo__DOT__ram_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_id_fifo__DOT__rd_ptr_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_id_fifo__DOT__wr_ptr_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_id_fifo__DOT__count_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_0_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_2_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_4_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_6_7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__i0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg0_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg0_idx_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg1_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg1_idx_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t6_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t5_6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg3_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg3_idx_q = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out_tmp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__valid_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__ptr_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__i0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg0_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg0_idx_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg1_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg1_idx_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t6_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t5_6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg3_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg3_idx_q = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out_tmp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__valid_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__ptr_q = VL_RAND_RESET_I(6);
}
