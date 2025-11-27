// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8.h"

VL_INLINE_OPT void Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram__0(Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__ram__v0;
    __Vdlyvdim0__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ram__v0;
    __Vdlyvval__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ram__v0;
    __Vdlyvset__ram__v0 = 0;
    // Body
    __Vdlyvset__ram__v0 = 0U;
    if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cb__push_i) {
        __Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_data_o;
        __Vdlyvset__ram__v0 = 1U;
        __Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__Vcellinp__u_ram__addr0_i;
    }
    vlSelf->__PVT__ram_read1_q = vlSelf->ram[vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__rd_addr_w];
    if (__Vdlyvset__ram__v0) {
        vlSelf->ram[__Vdlyvdim0__ram__v0] = __Vdlyvval__ram__v0;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram__0(Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvdim0__ram__v0;
    __Vdlyvdim0__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ram__v0;
    __Vdlyvval__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ram__v0;
    __Vdlyvset__ram__v0 = 0;
    // Body
    __Vdlyvset__ram__v0 = 0U;
    if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cr__push_i) {
        __Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_data_o;
        __Vdlyvset__ram__v0 = 1U;
        __Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__Vcellinp__u_ram__addr0_i;
    }
    vlSelf->__PVT__ram_read1_q = vlSelf->ram[vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__rd_addr_w];
    if (__Vdlyvset__ram__v0) {
        vlSelf->ram[__Vdlyvdim0__ram__v0] = __Vdlyvval__ram__v0;
    }
}
