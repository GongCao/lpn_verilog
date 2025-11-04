// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_idct_transpose.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_idct_transpose___stl_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__0(Vjpeg_core_jpeg_idct_transpose* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_idct_transpose___stl_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__0\n"); );
    // Body
    vlSelf->__PVT__wr_ptr_w = (((IData)(vlSelf->__PVT__block_wr_q) 
                                << 4U) | (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_x__DOT__ptr_q)));
    vlSelf->__Vcellinp__u_ram0__addr1_i = (((IData)(vlSelf->__PVT__block_rd_q) 
                                            << 4U) 
                                           | (IData)(vlSelf->__PVT__rd_addr_q));
    vlSelf->__PVT__next_state_r = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if ((1U & ((IData)(vlSelf->__PVT__block_ready_q) 
                   >> (IData)(vlSelf->__PVT__block_rd_q)))) {
            vlSelf->__PVT__next_state_r = 1U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__next_state_r = 2U;
    } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
        if (((2U == (IData)(vlSelf->__PVT__state_q)) 
             & (0x3fU == (IData)(vlSelf->__PVT__rd_idx_q)))) {
            vlSelf->__PVT__next_state_r = 0U;
        }
    }
    if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
        vlSelf->__PVT__next_state_r = 0U;
    }
    vlSelf->__PVT__inport_accept_o = (1U & (~ ((IData)(vlSelf->__PVT__block_ready_q) 
                                               >> (IData)(vlSelf->__PVT__block_wr_q))));
    vlSelf->__VdfgTmp_ha5b8369a__0 = ((IData)(vlSelf->__PVT__inport_accept_o) 
                                      & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_x__DOT__valid_q) 
                                         >> 6U));
}
