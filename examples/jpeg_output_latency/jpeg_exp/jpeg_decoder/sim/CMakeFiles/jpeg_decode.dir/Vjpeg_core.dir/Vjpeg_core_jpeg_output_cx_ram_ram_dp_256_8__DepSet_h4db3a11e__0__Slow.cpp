// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8___ctor_var_reset(Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk0_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst0_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr0_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__data0_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wr0_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk1_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst1_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr1_i = VL_RAND_RESET_I(8);
    vlSelf->__PVT__data1_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wr1_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data0_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data1_o = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__ram_read1_q = VL_RAND_RESET_I(32);
}
