// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_idct_ram_dp.h"

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0__0(Vjpeg_core_jpeg_idct_ram_dp* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__ram__v0;
    __Vdlyvdim0__ram__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ram__v0;
    __Vdlyvval__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ram__v0;
    __Vdlyvset__ram__v0 = 0;
    // Body
    __Vdlyvset__ram__v0 = 0U;
    if (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr0_w) {
        __Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_data_q;
        __Vdlyvset__ram__v0 = 1U;
        __Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w;
    }
    vlSelf->__PVT__ram_read1_q = vlSelf->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram0__addr1_i];
    if (__Vdlyvset__ram__v0) {
        vlSelf->ram[__Vdlyvdim0__ram__v0] = __Vdlyvval__ram__v0;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1__0(Vjpeg_core_jpeg_idct_ram_dp* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__ram__v0;
    __Vdlyvdim0__ram__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ram__v0;
    __Vdlyvval__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ram__v0;
    __Vdlyvset__ram__v0 = 0;
    // Body
    __Vdlyvset__ram__v0 = 0U;
    if (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr1_w) {
        __Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_data_q;
        __Vdlyvset__ram__v0 = 1U;
        __Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w;
    }
    vlSelf->__PVT__ram_read1_q = vlSelf->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram0__addr1_i];
    if (__Vdlyvset__ram__v0) {
        vlSelf->ram[__Vdlyvdim0__ram__v0] = __Vdlyvval__ram__v0;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2__0(Vjpeg_core_jpeg_idct_ram_dp* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__ram__v0;
    __Vdlyvdim0__ram__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ram__v0;
    __Vdlyvval__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ram__v0;
    __Vdlyvset__ram__v0 = 0;
    // Body
    __Vdlyvset__ram__v0 = 0U;
    if (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr2_w) {
        __Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_data_q;
        __Vdlyvset__ram__v0 = 1U;
        __Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w;
    }
    vlSelf->__PVT__ram_read1_q = vlSelf->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram0__addr1_i];
    if (__Vdlyvset__ram__v0) {
        vlSelf->ram[__Vdlyvdim0__ram__v0] = __Vdlyvval__ram__v0;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3__0(Vjpeg_core_jpeg_idct_ram_dp* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3__0\n"); );
    // Init
    CData/*5:0*/ __Vdlyvdim0__ram__v0;
    __Vdlyvdim0__ram__v0 = 0;
    SData/*15:0*/ __Vdlyvval__ram__v0;
    __Vdlyvval__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ram__v0;
    __Vdlyvset__ram__v0 = 0;
    // Body
    __Vdlyvset__ram__v0 = 0U;
    if (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr3_w) {
        __Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_data_q;
        __Vdlyvset__ram__v0 = 1U;
        __Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w;
    }
    vlSelf->__PVT__ram_read1_q = vlSelf->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram0__addr1_i];
    if (__Vdlyvset__ram__v0) {
        vlSelf->ram[__Vdlyvdim0__ram__v0] = __Vdlyvval__ram__v0;
    }
}
