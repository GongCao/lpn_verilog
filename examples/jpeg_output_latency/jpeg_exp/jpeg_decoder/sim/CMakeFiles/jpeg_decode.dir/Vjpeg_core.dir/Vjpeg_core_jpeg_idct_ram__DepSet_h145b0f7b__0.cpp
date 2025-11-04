// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_idct_ram.h"

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__0(Vjpeg_core_jpeg_idct_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_idct_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__0\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_ha5b8369a__0;
    __VdfgTmp_ha5b8369a__0 = 0;
    CData/*1:0*/ __Vdly__block_wr_q;
    __Vdly__block_wr_q = 0;
    CData/*1:0*/ __Vdly__block_rd_q;
    __Vdly__block_rd_q = 0;
    CData/*3:0*/ __Vdly__rd_addr_q;
    __Vdly__rd_addr_q = 0;
    // Body
    __Vdly__rd_addr_q = vlSelf->__PVT__rd_addr_q;
    vlSelf->__Vdly__rd_idx_q = vlSelf->__PVT__rd_idx_q;
    __Vdly__block_rd_q = vlSelf->__PVT__block_rd_q;
    __Vdly__block_wr_q = vlSelf->__PVT__block_wr_q;
    vlSelf->__PVT__data_val3_q = (1U & ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                        & (IData)((vlSelf->__PVT__data_valid3_q 
                                                   >> 
                                                   (((IData)(vlSelf->__PVT__block_rd_q) 
                                                     << 4U) 
                                                    | (IData)(vlSelf->__PVT__rd_addr_q))))));
    vlSelf->__PVT__data_val2_q = (1U & ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                        & (IData)((vlSelf->__PVT__data_valid2_q 
                                                   >> 
                                                   (((IData)(vlSelf->__PVT__block_rd_q) 
                                                     << 4U) 
                                                    | (IData)(vlSelf->__PVT__rd_addr_q))))));
    vlSelf->__PVT__data_val1_q = (1U & ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                        & (IData)((vlSelf->__PVT__data_valid1_q 
                                                   >> 
                                                   (((IData)(vlSelf->__PVT__block_rd_q) 
                                                     << 4U) 
                                                    | (IData)(vlSelf->__PVT__rd_addr_q))))));
    vlSelf->__PVT__data_val0_q = (1U & ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                        & (IData)((vlSelf->__PVT__data_valid0_q 
                                                   >> 
                                                   (((IData)(vlSelf->__PVT__block_rd_q) 
                                                     << 4U) 
                                                    | (IData)(vlSelf->__PVT__rd_addr_q))))));
    if (vlSymsp->TOP.rst_i) {
        __Vdly__rd_addr_q = 0U;
        vlSelf->__Vdly__rd_idx_q = 0U;
        vlSelf->__PVT__block_ready_q = 0U;
        __Vdly__block_wr_q = 0U;
        __Vdly__block_rd_q = 0U;
        vlSelf->__PVT__data_valid3_q = 0ULL;
        vlSelf->__PVT__data_valid2_q = 0ULL;
        vlSelf->__PVT__data_valid1_q = 0ULL;
        vlSelf->__PVT__data_valid0_q = 0ULL;
    } else {
        if ((0U == (IData)(vlSelf->__PVT__state_q))) {
            __Vdly__rd_addr_q = 0U;
        } else if ((1U == (IData)(vlSelf->__PVT__state_q))) {
            __Vdly__rd_addr_q = 1U;
        } else if ((2U == (IData)(vlSelf->__PVT__state_q))) {
            if ((4U & (IData)(vlSelf->__PVT__rd_idx_q))) {
                __Vdly__rd_addr_q = (0xfU & ((2U & (IData)(vlSelf->__PVT__rd_idx_q))
                                              ? ((1U 
                                                  & (IData)(vlSelf->__PVT__rd_idx_q))
                                                  ? 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__rd_addr_q))
                                                  : 
                                                 ((IData)(2U) 
                                                  + (IData)(vlSelf->__PVT__rd_addr_q)))
                                              : ((1U 
                                                  & (IData)(vlSelf->__PVT__rd_idx_q))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__rd_addr_q) 
                                                  - (IData)(1U))
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__rd_addr_q)))));
            } else if ((2U & (IData)(vlSelf->__PVT__rd_idx_q))) {
                if ((1U & (IData)(vlSelf->__PVT__rd_idx_q))) {
                    __Vdly__rd_addr_q = (0xfU & ((IData)(vlSelf->__PVT__rd_addr_q) 
                                                 - (IData)(1U)));
                }
            } else {
                __Vdly__rd_addr_q = (0xfU & ((1U & (IData)(vlSelf->__PVT__rd_idx_q))
                                              ? ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__rd_addr_q))
                                              : ((IData)(vlSelf->__PVT__rd_addr_q) 
                                                 - (IData)(1U))));
            }
        }
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            vlSelf->__Vdly__rd_idx_q = 0U;
            vlSelf->__PVT__block_ready_q = 0U;
            __Vdly__block_wr_q = 0U;
            __Vdly__block_rd_q = 0U;
            vlSelf->__PVT__data_valid3_q = 0ULL;
            vlSelf->__PVT__data_valid2_q = 0ULL;
            vlSelf->__PVT__data_valid1_q = 0ULL;
            vlSelf->__PVT__data_valid0_q = 0ULL;
        } else {
            if ((2U == (IData)(vlSelf->__PVT__state_q))) {
                vlSelf->__Vdly__rd_idx_q = (0x3fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__rd_idx_q)));
            }
            if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q) 
                 & (IData)(vlSelf->__PVT__inport_accept_o))) {
                vlSelf->__PVT__block_ready_q = ((IData)(vlSelf->__PVT__block_ready_q) 
                                                | (0xfU 
                                                   & ((IData)(1U) 
                                                      << (IData)(vlSelf->__PVT__block_wr_q))));
                __Vdly__block_wr_q = (3U & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__block_wr_q)));
            }
            if (((2U == (IData)(vlSelf->__PVT__state_q)) 
                 & (0x3fU == (IData)(vlSelf->__PVT__rd_idx_q)))) {
                vlSelf->__PVT__block_ready_q = ((~ 
                                                 ((IData)(1U) 
                                                  << (IData)(vlSelf->__PVT__block_rd_q))) 
                                                & (IData)(vlSelf->__PVT__block_ready_q));
                __Vdly__block_rd_q = (3U & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__block_rd_q)));
            }
            vlSelf->__PVT__data_valid3_q = vlSelf->__PVT__data_valid3_r;
            vlSelf->__PVT__data_valid2_q = vlSelf->__PVT__data_valid2_r;
            vlSelf->__PVT__data_valid1_q = vlSelf->__PVT__data_valid1_r;
            vlSelf->__PVT__data_valid0_q = vlSelf->__PVT__data_valid0_r;
        }
    }
    vlSelf->__PVT__rd_addr_q = __Vdly__rd_addr_q;
    vlSelf->__PVT__block_rd_q = __Vdly__block_rd_q;
    vlSelf->__PVT__block_wr_q = __Vdly__block_wr_q;
    vlSelf->__Vcellinp__u_ram0__addr1_i = (((IData)(vlSelf->__PVT__block_rd_q) 
                                            << 4U) 
                                           | (IData)(vlSelf->__PVT__rd_addr_q));
    vlSelf->__PVT__wr_ptr_w = (((IData)(vlSelf->__PVT__block_wr_q) 
                                << 4U) | ((0xeU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q) 
                                                   >> 2U)) 
                                          | (1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q))));
    vlSelf->__PVT__inport_accept_o = (1U & (~ ((IData)(vlSelf->__PVT__block_ready_q) 
                                               >> (IData)(vlSelf->__PVT__block_wr_q))));
    __VdfgTmp_ha5b8369a__0 = ((IData)(vlSelf->__PVT__inport_accept_o) 
                              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_valid_q));
    vlSelf->__PVT__wr0_w = ((IData)(__VdfgTmp_ha5b8369a__0) 
                            & ((0U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q))) 
                               | (1U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q)))));
    vlSelf->__PVT__wr1_w = ((IData)(__VdfgTmp_ha5b8369a__0) 
                            & ((2U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q))) 
                               | (3U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q)))));
    vlSelf->__PVT__wr2_w = ((IData)(__VdfgTmp_ha5b8369a__0) 
                            & ((4U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q))) 
                               | (5U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q)))));
    vlSelf->__PVT__wr3_w = ((IData)(__VdfgTmp_ha5b8369a__0) 
                            & ((6U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q))) 
                               | (7U == (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q)))));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__1(Vjpeg_core_jpeg_idct_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_idct_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__1\n"); );
    // Body
    vlSelf->__PVT__rd_idx_q = vlSelf->__Vdly__rd_idx_q;
    vlSelf->__PVT__state_q = ((IData)(vlSymsp->TOP.rst_i)
                               ? 0U : (IData)(vlSelf->__PVT__next_state_r));
    vlSelf->__PVT__data_valid0_r = vlSelf->__PVT__data_valid0_q;
    if (((2U == (IData)(vlSelf->__PVT__state_q)) & 
         (0x3fU == (IData)(vlSelf->__PVT__rd_idx_q)))) {
        vlSelf->__PVT__data_valid0_r = ((0U == (IData)(vlSelf->__PVT__block_rd_q))
                                         ? (0xffffffffffff0000ULL 
                                            & vlSelf->__PVT__data_valid0_r)
                                         : ((1U == (IData)(vlSelf->__PVT__block_rd_q))
                                             ? (0xffffffff0000ffffULL 
                                                & vlSelf->__PVT__data_valid0_r)
                                             : ((2U 
                                                 == (IData)(vlSelf->__PVT__block_rd_q))
                                                 ? 
                                                (0xffff0000ffffffffULL 
                                                 & vlSelf->__PVT__data_valid0_r)
                                                 : 
                                                (0xffffffffffffULL 
                                                 & vlSelf->__PVT__data_valid0_r))));
    }
    if (vlSelf->__PVT__wr0_w) {
        vlSelf->__PVT__data_valid0_r = (vlSelf->__PVT__data_valid0_r 
                                        | ((QData)((IData)(1U)) 
                                           << (IData)(vlSelf->__PVT__wr_ptr_w)));
    }
    vlSelf->__PVT__data_valid1_r = vlSelf->__PVT__data_valid1_q;
    if (((2U == (IData)(vlSelf->__PVT__state_q)) & 
         (0x3fU == (IData)(vlSelf->__PVT__rd_idx_q)))) {
        vlSelf->__PVT__data_valid1_r = ((0U == (IData)(vlSelf->__PVT__block_rd_q))
                                         ? (0xffffffffffff0000ULL 
                                            & vlSelf->__PVT__data_valid1_r)
                                         : ((1U == (IData)(vlSelf->__PVT__block_rd_q))
                                             ? (0xffffffff0000ffffULL 
                                                & vlSelf->__PVT__data_valid1_r)
                                             : ((2U 
                                                 == (IData)(vlSelf->__PVT__block_rd_q))
                                                 ? 
                                                (0xffff0000ffffffffULL 
                                                 & vlSelf->__PVT__data_valid1_r)
                                                 : 
                                                (0xffffffffffffULL 
                                                 & vlSelf->__PVT__data_valid1_r))));
    }
    if (vlSelf->__PVT__wr1_w) {
        vlSelf->__PVT__data_valid1_r = (vlSelf->__PVT__data_valid1_r 
                                        | ((QData)((IData)(1U)) 
                                           << (IData)(vlSelf->__PVT__wr_ptr_w)));
    }
    vlSelf->__PVT__data_valid2_r = vlSelf->__PVT__data_valid2_q;
    if (((2U == (IData)(vlSelf->__PVT__state_q)) & 
         (0x3fU == (IData)(vlSelf->__PVT__rd_idx_q)))) {
        vlSelf->__PVT__data_valid2_r = ((0U == (IData)(vlSelf->__PVT__block_rd_q))
                                         ? (0xffffffffffff0000ULL 
                                            & vlSelf->__PVT__data_valid2_r)
                                         : ((1U == (IData)(vlSelf->__PVT__block_rd_q))
                                             ? (0xffffffff0000ffffULL 
                                                & vlSelf->__PVT__data_valid2_r)
                                             : ((2U 
                                                 == (IData)(vlSelf->__PVT__block_rd_q))
                                                 ? 
                                                (0xffff0000ffffffffULL 
                                                 & vlSelf->__PVT__data_valid2_r)
                                                 : 
                                                (0xffffffffffffULL 
                                                 & vlSelf->__PVT__data_valid2_r))));
    }
    if (vlSelf->__PVT__wr2_w) {
        vlSelf->__PVT__data_valid2_r = (vlSelf->__PVT__data_valid2_r 
                                        | ((QData)((IData)(1U)) 
                                           << (IData)(vlSelf->__PVT__wr_ptr_w)));
    }
    vlSelf->__PVT__data_valid3_r = vlSelf->__PVT__data_valid3_q;
    if (((2U == (IData)(vlSelf->__PVT__state_q)) & 
         (0x3fU == (IData)(vlSelf->__PVT__rd_idx_q)))) {
        vlSelf->__PVT__data_valid3_r = ((0U == (IData)(vlSelf->__PVT__block_rd_q))
                                         ? (0xffffffffffff0000ULL 
                                            & vlSelf->__PVT__data_valid3_r)
                                         : ((1U == (IData)(vlSelf->__PVT__block_rd_q))
                                             ? (0xffffffff0000ffffULL 
                                                & vlSelf->__PVT__data_valid3_r)
                                             : ((2U 
                                                 == (IData)(vlSelf->__PVT__block_rd_q))
                                                 ? 
                                                (0xffff0000ffffffffULL 
                                                 & vlSelf->__PVT__data_valid3_r)
                                                 : 
                                                (0xffffffffffffULL 
                                                 & vlSelf->__PVT__data_valid3_r))));
    }
    if (vlSelf->__PVT__wr3_w) {
        vlSelf->__PVT__data_valid3_r = (vlSelf->__PVT__data_valid3_r 
                                        | ((QData)((IData)(1U)) 
                                           << (IData)(vlSelf->__PVT__wr_ptr_w)));
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__2(Vjpeg_core_jpeg_idct_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_idct_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__2\n"); );
    // Body
    vlSelf->__PVT__next_state_r = vlSelf->__PVT__state_q;
    if ((0U == (IData)(vlSelf->__PVT__state_q))) {
        if ((((IData)(vlSelf->__PVT__block_ready_q) 
              >> (IData)(vlSelf->__PVT__block_rd_q)) 
             & (((0x180U >= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_q) 
                 & (0x80U >= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__count_q)) 
                | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idle_q)))) {
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
