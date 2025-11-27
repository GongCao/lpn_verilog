// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_idct_transpose_ram.h"

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__0(Vjpeg_core_jpeg_idct_transpose_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__0\n"); );
    // Body
    vlSelf->__Vdlyvset__ram__v0 = 0U;
    if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__VdfgTmp_ha5b8369a__0) 
         & (0U == (0x30U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_x__DOT__ptr_q))))) {
        vlSelf->__Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__idct_x_data_w;
        vlSelf->__Vdlyvset__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__wr_ptr_w;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__1(Vjpeg_core_jpeg_idct_transpose_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__1\n"); );
    // Body
    vlSelf->__PVT__ram_read1_q = vlSelf->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram0__addr1_i];
    if (vlSelf->__Vdlyvset__ram__v0) {
        vlSelf->ram[vlSelf->__Vdlyvdim0__ram__v0] = vlSelf->__Vdlyvval__ram__v0;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1__0(Vjpeg_core_jpeg_idct_transpose_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1__0\n"); );
    // Body
    vlSelf->__Vdlyvset__ram__v0 = 0U;
    if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__VdfgTmp_ha5b8369a__0) 
         & (0x10U == (0x30U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_x__DOT__ptr_q))))) {
        vlSelf->__Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__idct_x_data_w;
        vlSelf->__Vdlyvset__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__wr_ptr_w;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2__0(Vjpeg_core_jpeg_idct_transpose_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2__0\n"); );
    // Body
    vlSelf->__Vdlyvset__ram__v0 = 0U;
    if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__VdfgTmp_ha5b8369a__0) 
         & (0x20U == (0x30U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_x__DOT__ptr_q))))) {
        vlSelf->__Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__idct_x_data_w;
        vlSelf->__Vdlyvset__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__wr_ptr_w;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3__0(Vjpeg_core_jpeg_idct_transpose_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3__0\n"); );
    // Body
    vlSelf->__Vdlyvset__ram__v0 = 0U;
    if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__VdfgTmp_ha5b8369a__0) 
         & (0x30U == (0x30U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_x__DOT__ptr_q))))) {
        vlSelf->__Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__idct_x_data_w;
        vlSelf->__Vdlyvset__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__wr_ptr_w;
    }
}
