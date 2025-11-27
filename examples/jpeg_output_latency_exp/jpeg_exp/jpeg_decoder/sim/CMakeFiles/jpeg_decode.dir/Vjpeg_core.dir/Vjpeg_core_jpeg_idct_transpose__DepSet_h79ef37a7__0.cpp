// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_idct_transpose.h"

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__0(Vjpeg_core_jpeg_idct_transpose* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__block_wr_q;
    __Vdly__block_wr_q = 0;
    CData/*0:0*/ __Vdly__block_rd_q;
    __Vdly__block_rd_q = 0;
    CData/*3:0*/ __Vdly__rd_addr_q;
    __Vdly__rd_addr_q = 0;
    // Body
    __Vdly__rd_addr_q = vlSelf->__PVT__rd_addr_q;
    vlSelf->__Vdly__rd_idx_q = vlSelf->__PVT__rd_idx_q;
    __Vdly__block_rd_q = vlSelf->__PVT__block_rd_q;
    __Vdly__block_wr_q = vlSelf->__PVT__block_wr_q;
    if (vlSymsp->TOP.rst_i) {
        __Vdly__rd_addr_q = 0U;
        vlSelf->__Vdly__rd_idx_q = 0U;
        vlSelf->__PVT__block_ready_q = 0U;
        __Vdly__block_wr_q = 0U;
        __Vdly__block_rd_q = 0U;
    } else {
        if ((0U == (IData)(vlSelf->__PVT__state_q))) {
            __Vdly__rd_addr_q = 0U;
        } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            __Vdly__rd_addr_q = 8U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            if ((4U & (IData)(vlSelf->__PVT__rd_idx_q))) {
                __Vdly__rd_addr_q = (0xfU & ((2U & (IData)(vlSelf->__PVT__rd_idx_q))
                                              ? ((1U 
                                                  & (IData)(vlSelf->__PVT__rd_idx_q))
                                                  ? 
                                                 ((IData)(8U) 
                                                  + (IData)(vlSelf->__PVT__rd_addr_q))
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__rd_addr_q)))
                                              : ((1U 
                                                  & (IData)(vlSelf->__PVT__rd_idx_q))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__rd_addr_q) 
                                                  - (IData)(8U))
                                                  : 
                                                 ((IData)(8U) 
                                                  + (IData)(vlSelf->__PVT__rd_addr_q)))));
            } else if ((2U & (IData)(vlSelf->__PVT__rd_idx_q))) {
                if ((1U & (IData)(vlSelf->__PVT__rd_idx_q))) {
                    __Vdly__rd_addr_q = (0xfU & ((IData)(vlSelf->__PVT__rd_addr_q) 
                                                 - (IData)(8U)));
                }
            } else {
                __Vdly__rd_addr_q = (0xfU & ((1U & (IData)(vlSelf->__PVT__rd_idx_q))
                                              ? ((IData)(8U) 
                                                 + (IData)(vlSelf->__PVT__rd_addr_q))
                                              : ((IData)(vlSelf->__PVT__rd_addr_q) 
                                                 - (IData)(8U))));
            }
        }
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            vlSelf->__Vdly__rd_idx_q = 0U;
            vlSelf->__PVT__block_ready_q = 0U;
            __Vdly__block_wr_q = 0U;
            __Vdly__block_rd_q = 0U;
        } else {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__Vdly__rd_idx_q = (0x3fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__rd_idx_q)));
            }
            if (((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_x__DOT__valid_q) 
                   >> 6U) & (0x3fU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_x__DOT__ptr_q))) 
                 & (IData)(vlSelf->__PVT__inport_accept_o))) {
                vlSelf->__PVT__block_ready_q = ((IData)(vlSelf->__PVT__block_ready_q) 
                                                | (3U 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__block_wr_q))));
                __Vdly__block_wr_q = (1U & (~ (IData)(vlSelf->__PVT__block_wr_q)));
            }
            if (((2U == (IData)(vlSelf->__PVT__state_q)) 
                 & (0x3fU == (IData)(vlSelf->__PVT__rd_idx_q)))) {
                vlSelf->__PVT__block_ready_q = ((~ 
                                                 ((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__block_rd_q))) 
                                                & (IData)(vlSelf->__PVT__block_ready_q));
                __Vdly__block_rd_q = (1U & (~ (IData)(vlSelf->__PVT__block_rd_q)));
            }
        }
    }
    vlSelf->__PVT__rd_addr_q = __Vdly__rd_addr_q;
    vlSelf->__PVT__block_rd_q = __Vdly__block_rd_q;
    vlSelf->__PVT__block_wr_q = __Vdly__block_wr_q;
    vlSelf->__PVT__inport_accept_o = (1U & (~ ((IData)(vlSelf->__PVT__block_ready_q) 
                                               >> (IData)(vlSelf->__PVT__block_wr_q))));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__1(Vjpeg_core_jpeg_idct_transpose* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__1\n"); );
    // Body
    vlSelf->__PVT__wr_ptr_w = (((IData)(vlSelf->__PVT__block_wr_q) 
                                << 4U) | (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_x__DOT__ptr_q)));
    vlSelf->__VdfgTmp_ha5b8369a__0 = ((IData)(vlSelf->__PVT__inport_accept_o) 
                                      & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_x__DOT__valid_q) 
                                         >> 6U));
    vlSelf->__PVT__rd_idx_q = vlSelf->__Vdly__rd_idx_q;
    vlSelf->__PVT__state_q = ((IData)(vlSymsp->TOP.rst_i)
                               ? 0U : (IData)(vlSelf->__PVT__next_state_r));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__3(Vjpeg_core_jpeg_idct_transpose* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__3\n"); );
    // Body
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
}
