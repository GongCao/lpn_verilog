// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_bitbuffer.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_bitbuffer___ctor_var_reset(Vjpeg_core_jpeg_bitbuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_start_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__img_end_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_valid_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inport_data_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inport_last_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_pop_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inport_accept_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_valid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outport_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__outport_last_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__ram_q[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__rd_ptr_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__wr_ptr_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__count_q = VL_RAND_RESET_I(7);
    vlSelf->__PVT__drain_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__count_r = VL_RAND_RESET_I(7);
    vlSelf->__PVT__fifo_data_r = VL_RAND_RESET_Q(40);
}
