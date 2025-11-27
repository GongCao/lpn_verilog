// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_output_cx_ram.h"

VL_INLINE_OPT void Vjpeg_core_jpeg_output_cx_ram___ico_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__0(Vjpeg_core_jpeg_output_cx_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_output_cx_ram___ico_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__0\n"); );
    // Body
    vlSelf->__PVT__count_r = vlSelf->__PVT__count_q;
    if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w) 
         & (IData)(vlSelf->__PVT__valid_o))) {
        vlSelf->__PVT__count_r = (vlSelf->__PVT__count_r 
                                  - (IData)(1U));
    }
    if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cb__push_i) {
        vlSelf->__PVT__count_r = (vlSelf->__PVT__count_r 
                                  + ((2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
                                      ? 4U : 1U));
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output_cx_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__1(Vjpeg_core_jpeg_output_cx_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_output_cx_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__1\n"); );
    // Body
    vlSelf->__PVT__rd_addr_w = ((2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
                                 ? (((IData)(vlSelf->__PVT__cx_half_q) 
                                     << 6U) | (IData)(vlSelf->__PVT__cx_rd_ptr_q))
                                 : (IData)(vlSelf->__PVT__rd_ptr_q));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output_cx_ram___ico_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__0(Vjpeg_core_jpeg_output_cx_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_output_cx_ram___ico_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__0\n"); );
    // Body
    vlSelf->__PVT__count_r = vlSelf->__PVT__count_q;
    if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w) 
         & (IData)(vlSelf->__PVT__valid_o))) {
        vlSelf->__PVT__count_r = (vlSelf->__PVT__count_r 
                                  - (IData)(1U));
    }
    if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cr__push_i) {
        vlSelf->__PVT__count_r = (vlSelf->__PVT__count_r 
                                  + ((2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
                                      ? 4U : 1U));
    }
}
