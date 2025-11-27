// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_dqt.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_dqt___stl_sequent__TOP__jpeg_core__u_jpeg_dqt__0(Vjpeg_core_jpeg_dqt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt___stl_sequent__TOP__jpeg_core__u_jpeg_dqt__0\n"); );
    // Body
    vlSelf->__PVT__table_src_w[0U] = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_y_dqt_table_q;
    vlSelf->__PVT__table_src_w[1U] = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cb_dqt_table_q;
    vlSelf->__PVT__table_src_w[2U] = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cr_dqt_table_q;
}
