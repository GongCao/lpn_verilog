// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_core.h"

VL_INLINE_OPT void Vjpeg_core_jpeg_core___ico_sequent__TOP__jpeg_core__0(Vjpeg_core_jpeg_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vjpeg_core_jpeg_core___ico_sequent__TOP__jpeg_core__0\n"); );
    // Body
    vlSelf->u_jpeg_input__DOT____VdfgTmp_he4b2d5da__0 
        = ((IData)(vlSymsp->TOP.inport_valid_i) & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_valid_q));
    vlSelf->__PVT__dqt_cfg_valid_w = ((7U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                                      & (IData)(vlSymsp->TOP.inport_valid_i));
    vlSelf->__PVT__u_jpeg_input__DOT__data_r = (0xffU 
                                                & ((1U 
                                                    == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__byte_idx_q))
                                                    ? 
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSymsp->TOP.inport_strb_i) 
                                                                   >> 1U)))) 
                                                    & (vlSymsp->TOP.inport_data_i 
                                                       >> 8U))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__byte_idx_q))
                                                     ? 
                                                    ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.inport_strb_i) 
                                                                    >> 2U)))) 
                                                     & (vlSymsp->TOP.inport_data_i 
                                                        >> 0x10U))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__byte_idx_q))
                                                      ? 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.inport_strb_i) 
                                                                     >> 3U)))) 
                                                      & (vlSymsp->TOP.inport_data_i 
                                                         >> 0x18U))
                                                      : 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSymsp->TOP.inport_strb_i)))) 
                                                      & vlSymsp->TOP.inport_data_i)))));
    vlSelf->__PVT__u_jpeg_input__DOT__token_soi_w = 
        ((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
         & (0xd8U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)));
    vlSelf->__PVT__u_jpeg_input__DOT__token_sos_w = 
        ((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
         & (0xdaU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)));
    vlSelf->__PVT__u_jpeg_input__DOT__token_sof0_w 
        = ((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
           & (0xc0U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)));
    vlSelf->__PVT__u_jpeg_input__DOT__token_pad_w = 
        ((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
         & (0U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)));
    vlSelf->__PVT__u_jpeg_input__DOT__token_eoi_w = 
        ((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
         & (0xd9U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)));
    vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w 
        = ((7U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
           | ((0xaU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
              | (((0xeU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                  & ((0x38U >= (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q)) 
                     | (IData)(vlSelf->__PVT__u_jpeg_input__DOT__token_pad_w))) 
                 | ((7U != (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                    & ((0xaU != (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                       & (0xeU != (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)))))));
    vlSelf->__PVT__bb_inport_valid_w = ((~ (IData)(vlSelf->__PVT__u_jpeg_input__DOT__token_eoi_w)) 
                                        & (IData)(vlSelf->u_jpeg_input__DOT____VdfgTmp_he4b2d5da__0));
    vlSelf->__PVT__img_end_w = ((IData)(vlSelf->__PVT__u_jpeg_input__DOT__eof_q) 
                                | ((IData)(vlSymsp->TOP.inport_valid_i) 
                                   & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__token_eoi_w)));
    vlSelf->__PVT__u_jpeg_input__DOT__next_state_r 
        = vlSelf->__PVT__u_jpeg_input__DOT__state_q;
    if ((0x10U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
                        if ((((IData)(vlSymsp->TOP.inport_valid_i) 
                              & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w)) 
                             & (1U >= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__length_q)))) {
                            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 1U;
                        }
                    } else if (vlSymsp->TOP.inport_valid_i) {
                        vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0x11U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
        if ((4U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
            if ((2U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
                    if (vlSymsp->TOP.inport_valid_i) {
                        vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0x10U;
                    }
                } else if (vlSelf->__PVT__u_jpeg_input__DOT__token_eoi_w) {
                    vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0U;
                }
            } else if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
                if (((IData)(vlSymsp->TOP.inport_valid_i) 
                     & (1U >= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__length_q)))) {
                    vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0xeU;
                }
            } else if (vlSymsp->TOP.inport_valid_i) {
                vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0xdU;
            }
        } else if ((2U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
                if (vlSymsp->TOP.inport_valid_i) {
                    vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0xcU;
                }
            } else if ((((IData)(vlSymsp->TOP.inport_valid_i) 
                         & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w)) 
                        & (1U >= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__length_q)))) {
                vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 1U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
            if (vlSymsp->TOP.inport_valid_i) {
                vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0xaU;
            }
        } else if (vlSymsp->TOP.inport_valid_i) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 9U;
        }
    } else if ((4U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
                if ((((IData)(vlSymsp->TOP.inport_valid_i) 
                      & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w)) 
                     & (1U >= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__length_q)))) {
                    vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 1U;
                }
            } else if (vlSymsp->TOP.inport_valid_i) {
                vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 7U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
            if (vlSymsp->TOP.inport_valid_i) {
                vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 6U;
            }
        } else if ((((IData)(vlSymsp->TOP.inport_valid_i) 
                     & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w)) 
                    & (1U >= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__length_q)))) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 1U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
            if (vlSymsp->TOP.inport_valid_i) {
                vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 4U;
            }
        } else if (vlSymsp->TOP.inport_valid_i) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 3U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
        if (vlSelf->__PVT__u_jpeg_input__DOT__token_eoi_w) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0U;
        } else if (((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
                    & (0xdbU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)))) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 5U;
        } else if (((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
                    & (0xc4U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)))) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 8U;
        } else if (vlSelf->__PVT__u_jpeg_input__DOT__token_sos_w) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0xbU;
        } else if (vlSelf->__PVT__u_jpeg_input__DOT__token_sof0_w) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0xfU;
        } else if (((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
                    & ((0xc2U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)) 
                       | ((0xddU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)) 
                          | (((0xd0U <= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)) 
                              & (0xd7U >= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r))) 
                             | (((0xe0U <= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)) 
                                 & (0xefU >= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r))) 
                                | (0xfeU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)))))))) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 2U;
        }
    } else if (vlSelf->__PVT__u_jpeg_input__DOT__token_soi_w) {
        vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 1U;
    }
    if ((((IData)(vlSymsp->TOP.inport_valid_i) & (IData)(vlSymsp->TOP.inport_last_i)) 
         & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w))) {
        vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0U;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_core___nba_sequent__TOP__jpeg_core__0(Vjpeg_core_jpeg_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vjpeg_core_jpeg_core___nba_sequent__TOP__jpeg_core__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__u_jpeg_input__DOT__byte_idx_q;
    __Vdly__u_jpeg_input__DOT__byte_idx_q = 0;
    SData/*15:0*/ __Vdly__u_jpeg_input__DOT__length_q;
    __Vdly__u_jpeg_input__DOT__length_q = 0;
    SData/*15:0*/ __Vdly__u_jpeg_input__DOT__img_height_q;
    __Vdly__u_jpeg_input__DOT__img_height_q = 0;
    // Body
    __Vdly__u_jpeg_input__DOT__byte_idx_q = vlSelf->__PVT__u_jpeg_input__DOT__byte_idx_q;
    vlSelf->__Vdly__u_jpeg_input__DOT__idx_q = vlSelf->__PVT__u_jpeg_input__DOT__idx_q;
    __Vdly__u_jpeg_input__DOT__img_height_q = vlSelf->__PVT__u_jpeg_input__DOT__img_height_q;
    vlSelf->__Vdly__u_jpeg_input__DOT__img_width_q 
        = vlSelf->__PVT__u_jpeg_input__DOT__img_width_q;
    __Vdly__u_jpeg_input__DOT__length_q = vlSelf->__PVT__u_jpeg_input__DOT__length_q;
    if (vlSymsp->TOP.rst_i) {
        __Vdly__u_jpeg_input__DOT__byte_idx_q = 0U;
        vlSelf->__Vdly__u_jpeg_input__DOT__idx_q = 0U;
        __Vdly__u_jpeg_input__DOT__img_height_q = 0U;
        vlSelf->__Vdly__u_jpeg_input__DOT__img_width_q = 0U;
        __Vdly__u_jpeg_input__DOT__length_q = 0U;
        vlSelf->__PVT__u_jpeg_input__DOT__last_b_q = 0U;
        vlSelf->__PVT__u_jpeg_input__DOT__eof_q = 1U;
        vlSelf->__PVT__u_jpeg_input__DOT__img_cr_dqt_table_q = 0U;
        vlSelf->__PVT__u_jpeg_input__DOT__img_cb_dqt_table_q = 0U;
        vlSelf->__PVT__u_jpeg_input__DOT__img_y_dqt_table_q = 0U;
        vlSelf->__PVT__u_jpeg_input__DOT__data_valid_q = 0U;
    } else {
        if ((((IData)(vlSymsp->TOP.inport_valid_i) 
              & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w)) 
             & (IData)(vlSymsp->TOP.inport_last_i))) {
            __Vdly__u_jpeg_input__DOT__byte_idx_q = 0U;
        } else if (((IData)(vlSymsp->TOP.inport_valid_i) 
                    & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w))) {
            __Vdly__u_jpeg_input__DOT__byte_idx_q = 
                (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__u_jpeg_input__DOT__byte_idx_q)));
        }
        if ((((IData)(vlSymsp->TOP.inport_valid_i) 
              & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w)) 
             & (0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)))) {
            vlSelf->__Vdly__u_jpeg_input__DOT__idx_q 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_jpeg_input__DOT__idx_q)));
        } else if ((0xfU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
            vlSelf->__Vdly__u_jpeg_input__DOT__idx_q = 0U;
        }
        if (vlSelf->__PVT__u_jpeg_input__DOT__token_sof0_w) {
            __Vdly__u_jpeg_input__DOT__img_height_q = 0U;
            vlSelf->__Vdly__u_jpeg_input__DOT__img_width_q = 0U;
            vlSelf->__PVT__u_jpeg_input__DOT__img_cr_dqt_table_q = 0U;
            vlSelf->__PVT__u_jpeg_input__DOT__img_cb_dqt_table_q = 0U;
            vlSelf->__PVT__u_jpeg_input__DOT__img_y_dqt_table_q = 0U;
        } else {
            if (((0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                 & (1U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__idx_q)))) {
                __Vdly__u_jpeg_input__DOT__img_height_q 
                    = ((IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r) 
                       << 8U);
            } else if (((0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                        & (2U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__idx_q)))) {
                __Vdly__u_jpeg_input__DOT__img_height_q 
                    = ((0xff00U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__img_height_q)) 
                       | (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r));
            }
            if (((0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                 & (3U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__idx_q)))) {
                vlSelf->__Vdly__u_jpeg_input__DOT__img_width_q 
                    = ((IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r) 
                       << 8U);
            } else if (((0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                        & (4U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__idx_q)))) {
                vlSelf->__Vdly__u_jpeg_input__DOT__img_width_q 
                    = ((0xff00U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__img_width_q)) 
                       | (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r));
            }
            if (((0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                 & (0xeU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__idx_q)))) {
                vlSelf->__PVT__u_jpeg_input__DOT__img_cr_dqt_table_q 
                    = (3U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r));
            }
            if (((0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                 & (0xbU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__idx_q)))) {
                vlSelf->__PVT__u_jpeg_input__DOT__img_cb_dqt_table_q 
                    = (3U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r));
            }
            if (((0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                 & (8U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__idx_q)))) {
                vlSelf->__PVT__u_jpeg_input__DOT__img_y_dqt_table_q 
                    = (3U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r));
            }
        }
        if ((((((2U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                | (5U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) 
               | (8U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) 
              | (0xbU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) 
             | (0xfU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)))) {
            __Vdly__u_jpeg_input__DOT__length_q = ((IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r) 
                                                   << 8U);
        } else if ((((((3U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                       | (6U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) 
                      | (9U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) 
                     | (0xcU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) 
                    | (0x10U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)))) {
            __Vdly__u_jpeg_input__DOT__length_q = (0xffffU 
                                                   & (((0xff00U 
                                                        & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__length_q)) 
                                                       | (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)) 
                                                      - (IData)(2U)));
        } else if ((((((((4U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                         | (7U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) 
                        | (0xaU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) 
                       | (0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) 
                      | (0xdU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) 
                     & (IData)(vlSymsp->TOP.inport_valid_i)) 
                    & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w))) {
            __Vdly__u_jpeg_input__DOT__length_q = (0xffffU 
                                                   & ((IData)(vlSelf->__PVT__u_jpeg_input__DOT__length_q) 
                                                      - (IData)(1U)));
        }
        if (((IData)(vlSymsp->TOP.inport_valid_i) & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w))) {
            vlSelf->__PVT__u_jpeg_input__DOT__last_b_q 
                = ((IData)(vlSymsp->TOP.inport_last_i)
                    ? 0U : (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r));
        }
        if (((0U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
             & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__token_soi_w))) {
            vlSelf->__PVT__u_jpeg_input__DOT__eof_q = 0U;
        } else if (vlSelf->__PVT__img_end_w) {
            vlSelf->__PVT__u_jpeg_input__DOT__eof_q = 1U;
        }
        if (((IData)(vlSymsp->TOP.inport_valid_i) & 
             (0x38U >= (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q)))) {
            vlSelf->__PVT__u_jpeg_input__DOT__data_valid_q 
                = ((0xeU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                   & (((IData)(vlSymsp->TOP.inport_valid_i) 
                       & (~ (IData)(vlSelf->__PVT__u_jpeg_input__DOT__token_pad_w))) 
                      & (~ (IData)(vlSelf->__PVT__u_jpeg_input__DOT__token_eoi_w))));
        } else if ((0xeU != (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
            vlSelf->__PVT__u_jpeg_input__DOT__data_valid_q = 0U;
        }
    }
    vlSelf->__PVT__u_jpeg_input__DOT__byte_idx_q = __Vdly__u_jpeg_input__DOT__byte_idx_q;
    vlSelf->__PVT__u_jpeg_input__DOT__img_height_q 
        = __Vdly__u_jpeg_input__DOT__img_height_q;
    vlSelf->__PVT__u_jpeg_input__DOT__length_q = __Vdly__u_jpeg_input__DOT__length_q;
}

VL_INLINE_OPT void Vjpeg_core_jpeg_core___nba_sequent__TOP__jpeg_core__1(Vjpeg_core_jpeg_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vjpeg_core_jpeg_core___nba_sequent__TOP__jpeg_core__1\n"); );
    // Body
    vlSelf->__PVT__u_jpeg_input__DOT__img_width_q = vlSelf->__Vdly__u_jpeg_input__DOT__img_width_q;
    vlSelf->u_jpeg_input__DOT____VdfgTmp_he4b2d5da__0 
        = ((IData)(vlSymsp->TOP.inport_valid_i) & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_valid_q));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_width_q = 0U;
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_value_q = 0U;
        vlSelf->__PVT__u_jpeg_input__DOT__img_mode_q = 3U;
        vlSelf->__PVT__u_jpeg_input__DOT__data_data_q = 0U;
        vlSelf->__PVT__u_jpeg_input__DOT__img_num_comp_q = 0U;
        vlSelf->__PVT__u_jpeg_input__DOT__img_y_factor_q = 0U;
        vlSelf->__PVT__u_jpeg_input__DOT__img_cb_factor_q = 0U;
        vlSelf->__PVT__u_jpeg_input__DOT__img_cr_factor_q = 0U;
    } else {
        if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_table_r))) {
            if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_table_r))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_width_q 
                    = vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_value_q 
                    = vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r;
            } else {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_width_q 
                    = vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_value_q 
                    = vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r;
            }
        } else if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_table_r))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_width_q 
                = vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_value_q 
                = vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r;
        } else {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_width_q 
                = vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_value_q 
                = vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r;
        }
        if (vlSelf->__PVT__u_jpeg_input__DOT__token_sof0_w) {
            vlSelf->__PVT__u_jpeg_input__DOT__img_mode_q = 3U;
            vlSelf->__PVT__u_jpeg_input__DOT__img_num_comp_q = 0U;
            vlSelf->__PVT__u_jpeg_input__DOT__img_y_factor_q = 0U;
            vlSelf->__PVT__u_jpeg_input__DOT__img_cb_factor_q = 0U;
            vlSelf->__PVT__u_jpeg_input__DOT__img_cr_factor_q = 0U;
        } else {
            if (((0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                 & (1U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__next_state_r)))) {
                if ((1U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__img_num_comp_q))) {
                    vlSelf->__PVT__u_jpeg_input__DOT__img_mode_q = 0U;
                } else if ((3U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__img_num_comp_q))) {
                    if ((IData)((((0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__img_y_factor_q)) 
                                  & (0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__img_cb_factor_q))) 
                                 & (0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__img_cr_factor_q))))) {
                        vlSelf->__PVT__u_jpeg_input__DOT__img_mode_q = 1U;
                    } else if ((IData)((((0x22U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__img_y_factor_q)) 
                                         & (0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__img_cb_factor_q))) 
                                        & (0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__img_cr_factor_q))))) {
                        vlSelf->__PVT__u_jpeg_input__DOT__img_mode_q = 2U;
                    }
                }
            }
            if (((0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                 & (5U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__idx_q)))) {
                vlSelf->__PVT__u_jpeg_input__DOT__img_num_comp_q 
                    = vlSelf->__PVT__u_jpeg_input__DOT__data_r;
            }
            if (((0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                 & (7U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__idx_q)))) {
                vlSelf->__PVT__u_jpeg_input__DOT__img_y_factor_q 
                    = vlSelf->__PVT__u_jpeg_input__DOT__data_r;
            }
            if (((0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                 & (0xaU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__idx_q)))) {
                vlSelf->__PVT__u_jpeg_input__DOT__img_cb_factor_q 
                    = vlSelf->__PVT__u_jpeg_input__DOT__data_r;
            }
            if (((0x11U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                 & (0xdU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__idx_q)))) {
                vlSelf->__PVT__u_jpeg_input__DOT__img_cr_factor_q 
                    = vlSelf->__PVT__u_jpeg_input__DOT__data_r;
            }
        }
        if (((IData)(vlSymsp->TOP.inport_valid_i) & 
             (0x38U >= (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q)))) {
            vlSelf->__PVT__u_jpeg_input__DOT__data_data_q 
                = vlSelf->__PVT__u_jpeg_input__DOT__data_r;
        }
    }
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_valid_q 
        = ((~ (IData)(vlSymsp->TOP.rst_i)) & ((1U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
                                              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o)));
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0U;
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 0U;
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0U;
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 0U;
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0U;
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 0U;
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0U;
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 0U;
    if ((0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                >> 0x1eU))) {
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 2U;
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 2U;
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 2U;
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 2U;
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0U;
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 0U;
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 1U;
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 0U;
    } else {
        if ((1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                    >> 0x1eU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 2U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 2U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 2U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 1U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 1U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 2U;
        } else {
            if ((4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                        >> 0x1dU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 3U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 3U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 2U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 3U;
            } else if ((0xaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                 >> 0x1cU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 4U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 4U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 3U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0U;
            } else if ((0xbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                 >> 0x1cU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 4U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 4U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x11U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 4U;
            } else {
                if ((0x18U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                               >> 0x1bU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 4U;
                } else if ((0x19U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1bU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 5U;
                } else if ((0x1aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1bU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x21U;
                } else if ((0x1bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1bU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x31U;
                } else if ((0x38U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1aU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 6U;
                } else if ((0x39U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1aU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x12U;
                } else if ((0x3aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1aU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x41U;
                } else if ((0x3bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1aU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x51U;
                } else if ((0x78U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x19U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 7U;
                } else if ((0x79U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x19U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x61U;
                } else if ((0x7aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x19U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x71U;
                } else if ((0xf6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x18U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x13U;
                } else if ((0xf7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x18U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x22U;
                } else if ((0xf8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x18U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x32U;
                } else if ((0xf9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x18U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x81U;
                } else if ((0x1f4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 8U;
                } else if ((0x1f5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x14U;
                } else if ((0x1f6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x42U;
                } else if ((0x1f7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x91U;
                } else if ((0x1f8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa1U;
                } else if ((0x1f9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb1U;
                } else if ((0x1faU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc1U;
                } else if ((0x3f6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 9U;
                } else if ((0x3f7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x23U;
                } else if ((0x3f8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x33U;
                } else if ((0x3f9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x52U;
                } else if ((0x3faU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf0U;
                } else if ((0x7f6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xbU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x15U;
                } else if ((0x7f7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xbU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x62U;
                } else if ((0x7f8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xbU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x72U;
                } else if ((0x7f9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xbU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd1U;
                } else if ((0xff4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xcU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xaU;
                } else if ((0xff5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xcU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x16U;
                } else if ((0xff6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xcU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x24U;
                } else if ((0xff7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xcU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x34U;
                } else if ((0x3fe0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x12U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xeU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe1U;
                } else if ((0x7fc2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x11U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xfU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x25U;
                } else if ((0x7fc3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x11U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xfU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf1U;
                } else if ((0xff88U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x17U;
                } else if ((0xff89U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x18U;
                } else if ((0xff8aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x19U;
                } else if ((0xff8bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x1aU;
                } else if ((0xff8cU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x26U;
                } else if ((0xff8dU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x27U;
                } else if ((0xff8eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x28U;
                } else if ((0xff8fU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x29U;
                } else if ((0xff90U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x2aU;
                } else if ((0xff91U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x35U;
                } else if ((0xff92U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x36U;
                } else if ((0xff93U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x37U;
                } else if ((0xff94U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x38U;
                } else if ((0xff95U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x39U;
                } else if ((0xff96U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x3aU;
                } else if ((0xff97U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x43U;
                } else if ((0xff98U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x44U;
                } else if ((0xff99U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x45U;
                } else if ((0xff9aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x46U;
                } else if ((0xff9bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x47U;
                } else if ((0xff9cU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x48U;
                } else if ((0xff9dU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x49U;
                } else if ((0xff9eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x4aU;
                } else if ((0xff9fU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x53U;
                } else if ((0xffa0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x54U;
                } else if ((0xffa1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x55U;
                } else if ((0xffa2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x56U;
                } else if ((0xffa3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x57U;
                } else if ((0xffa4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x58U;
                } else if ((0xffa5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x59U;
                } else if ((0xffa6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x5aU;
                } else if ((0xffa7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x63U;
                } else if ((0xffa8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x64U;
                } else if ((0xffa9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x65U;
                } else if ((0xffaaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x66U;
                } else if ((0xffabU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x67U;
                } else if ((0xffacU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x68U;
                } else if ((0xffadU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x69U;
                } else if ((0xffaeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x6aU;
                } else if ((0xffafU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x73U;
                } else if ((0xffb0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x74U;
                } else if ((0xffb1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x75U;
                } else if ((0xffb2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x76U;
                } else if ((0xffb3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x77U;
                } else if ((0xffb4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x78U;
                } else if ((0xffb5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x79U;
                } else if ((0xffb6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x7aU;
                } else if ((0xffb7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x82U;
                } else if ((0xffb8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x83U;
                } else if ((0xffb9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x84U;
                } else if ((0xffbaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x85U;
                } else if ((0xffbbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x86U;
                } else if ((0xffbcU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x87U;
                } else if ((0xffbdU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x88U;
                } else if ((0xffbeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x89U;
                } else if ((0xffbfU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x8aU;
                } else if ((0xffc0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x92U;
                } else if ((0xffc1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x93U;
                } else if ((0xffc2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x94U;
                } else if ((0xffc3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x95U;
                } else if ((0xffc4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x96U;
                } else if ((0xffc5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x97U;
                } else if ((0xffc6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x98U;
                } else if ((0xffc7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x99U;
                } else if ((0xffc8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x9aU;
                } else if ((0xffc9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa2U;
                } else if ((0xffcaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa3U;
                } else if ((0xffcbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa4U;
                } else if ((0xffccU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa5U;
                } else if ((0xffcdU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa6U;
                } else if ((0xffceU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa7U;
                } else if ((0xffcfU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa8U;
                } else if ((0xffd0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa9U;
                } else if ((0xffd1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xaaU;
                } else if ((0xffd2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb2U;
                } else if ((0xffd3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb3U;
                } else if ((0xffd4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb4U;
                } else if ((0xffd5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb5U;
                } else if ((0xffd6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb6U;
                } else if ((0xffd7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb7U;
                } else if ((0xffd8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb8U;
                } else if ((0xffd9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb9U;
                } else if ((0xffdaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xbaU;
                } else if ((0xffdbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc2U;
                } else if ((0xffdcU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc3U;
                } else if ((0xffddU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc4U;
                } else if ((0xffdeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc5U;
                } else if ((0xffdfU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc6U;
                } else if ((0xffe0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc7U;
                } else if ((0xffe1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc8U;
                } else if ((0xffe2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc9U;
                } else if ((0xffe3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xcaU;
                } else if ((0xffe4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd2U;
                } else if ((0xffe5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd3U;
                } else if ((0xffe6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd4U;
                } else if ((0xffe7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd5U;
                } else if ((0xffe8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd6U;
                } else if ((0xffe9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd7U;
                } else if ((0xffeaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd8U;
                } else if ((0xffebU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd9U;
                } else if ((0xffecU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xdaU;
                } else if ((0xffedU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe2U;
                } else if ((0xffeeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe3U;
                } else if ((0xffefU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe4U;
                } else if ((0xfff0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe5U;
                } else if ((0xfff1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe6U;
                } else if ((0xfff2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe7U;
                } else if ((0xfff3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe8U;
                } else if ((0xfff4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe9U;
                } else if ((0xfff5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xeaU;
                } else if ((0xfff6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf2U;
                } else if ((0xfff7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf3U;
                } else if ((0xfff8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf4U;
                } else if ((0xfff9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf5U;
                } else if ((0xfffaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf6U;
                } else if ((0xfffbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf7U;
                } else if ((0xfffcU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf8U;
                } else if ((0xfffdU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf9U;
                } else if ((0xfffeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xfaU;
                }
                if ((0xcU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                              >> 0x1cU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 4U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x11U;
                } else if ((0x1aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1bU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 5U;
                } else if ((0x1bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1bU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x12U;
                } else if ((0x1cU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1bU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x21U;
                } else if ((0x3aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1aU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x31U;
                } else if ((0x3bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1aU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x41U;
                } else if ((0x78U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x19U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 6U;
                } else if ((0x79U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x19U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x13U;
                } else if ((0x7aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x19U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x51U;
                } else if ((0x7bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x19U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x61U;
                } else if ((0xf8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x18U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 7U;
                } else if ((0xf9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x18U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x22U;
                } else if ((0xfaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x18U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x71U;
                } else if ((0x1f6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x14U;
                } else if ((0x1f7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x32U;
                } else if ((0x1f8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x81U;
                } else if ((0x1f9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x91U;
                } else if ((0x1faU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa1U;
                } else if ((0x3f6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 8U;
                } else if ((0x3f7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x23U;
                } else if ((0x3f8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x42U;
                } else if ((0x3f9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb1U;
                } else if ((0x3faU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc1U;
                } else if ((0x7f6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xbU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x15U;
                } else if ((0x7f7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xbU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x52U;
                } else if ((0x7f8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xbU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd1U;
                } else if ((0x7f9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xbU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf0U;
                } else if ((0xff4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xcU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x24U;
                } else if ((0xff5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xcU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x33U;
                } else if ((0xff6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xcU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x62U;
                } else if ((0xff7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xcU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x72U;
                } else if ((0x7fc0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x11U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xfU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x82U;
                } else if ((0xff82U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 9U;
                } else if ((0xff83U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xaU;
                } else if ((0xff84U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x16U;
                } else if ((0xff85U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x17U;
                } else if ((0xff86U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x18U;
                } else if ((0xff87U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x19U;
                } else if ((0xff88U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x1aU;
                } else if ((0xff89U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x25U;
                } else if ((0xff8aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x26U;
                } else if ((0xff8bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x27U;
                } else if ((0xff8cU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x28U;
                } else if ((0xff8dU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x29U;
                } else if ((0xff8eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x2aU;
                } else if ((0xff8fU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x34U;
                } else if ((0xff90U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x35U;
                } else if ((0xff91U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x36U;
                } else if ((0xff92U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x37U;
                } else if ((0xff93U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x38U;
                } else if ((0xff94U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x39U;
                } else if ((0xff95U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x3aU;
                } else if ((0xff96U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x43U;
                } else if ((0xff97U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x44U;
                } else if ((0xff98U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x45U;
                } else if ((0xff99U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x46U;
                } else if ((0xff9aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x47U;
                } else if ((0xff9bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x48U;
                } else if ((0xff9cU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x49U;
                } else if ((0xff9dU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x4aU;
                } else if ((0xff9eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x53U;
                } else if ((0xff9fU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x54U;
                } else if ((0xffa0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x55U;
                } else if ((0xffa1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x56U;
                } else if ((0xffa2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x57U;
                } else if ((0xffa3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x58U;
                } else if ((0xffa4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x59U;
                } else if ((0xffa5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x5aU;
                } else if ((0xffa6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x63U;
                } else if ((0xffa7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x64U;
                } else if ((0xffa8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x65U;
                } else if ((0xffa9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x66U;
                } else if ((0xffaaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x67U;
                } else if ((0xffabU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x68U;
                } else if ((0xffacU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x69U;
                } else if ((0xffadU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x6aU;
                } else if ((0xffaeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x73U;
                } else if ((0xffafU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x74U;
                } else if ((0xffb0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x75U;
                } else if ((0xffb1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x76U;
                } else if ((0xffb2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x77U;
                } else if ((0xffb3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x78U;
                } else if ((0xffb4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x79U;
                } else if ((0xffb5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x7aU;
                } else if ((0xffb6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x83U;
                } else if ((0xffb7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x84U;
                } else if ((0xffb8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x85U;
                } else if ((0xffb9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x86U;
                } else if ((0xffbaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x87U;
                } else if ((0xffbbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x88U;
                } else if ((0xffbcU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x89U;
                } else if ((0xffbdU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x8aU;
                } else if ((0xffbeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x92U;
                } else if ((0xffbfU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x93U;
                } else if ((0xffc0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x94U;
                } else if ((0xffc1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x95U;
                } else if ((0xffc2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x96U;
                } else if ((0xffc3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x97U;
                } else if ((0xffc4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x98U;
                } else if ((0xffc5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x99U;
                } else if ((0xffc6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x9aU;
                } else if ((0xffc7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa2U;
                } else if ((0xffc8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa3U;
                } else if ((0xffc9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa4U;
                } else if ((0xffcaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa5U;
                } else if ((0xffcbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa6U;
                } else if ((0xffccU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa7U;
                } else if ((0xffcdU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa8U;
                } else if ((0xffceU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa9U;
                } else if ((0xffcfU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xaaU;
                } else if ((0xffd0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb2U;
                } else if ((0xffd1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb3U;
                } else if ((0xffd2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb4U;
                } else if ((0xffd3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb5U;
                } else if ((0xffd4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb6U;
                } else if ((0xffd5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb7U;
                } else if ((0xffd6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb8U;
                } else if ((0xffd7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb9U;
                } else if ((0xffd8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xbaU;
                } else if ((0xffd9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc2U;
                } else if ((0xffdaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc3U;
                } else if ((0xffdbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc4U;
                } else if ((0xffdcU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc5U;
                } else if ((0xffddU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc6U;
                } else if ((0xffdeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc7U;
                } else if ((0xffdfU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc8U;
                } else if ((0xffe0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc9U;
                } else if ((0xffe1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xcaU;
                } else if ((0xffe2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd2U;
                } else if ((0xffe3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd3U;
                } else if ((0xffe4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd4U;
                } else if ((0xffe5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd5U;
                } else if ((0xffe6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd6U;
                } else if ((0xffe7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd7U;
                } else if ((0xffe8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd8U;
                } else if ((0xffe9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd9U;
                } else if ((0xffeaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xdaU;
                } else if ((0xffebU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe1U;
                } else if ((0xffecU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe2U;
                } else if ((0xffedU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe3U;
                } else if ((0xffeeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe4U;
                } else if ((0xffefU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe5U;
                } else if ((0xfff0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe6U;
                } else if ((0xfff1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe7U;
                } else if ((0xfff2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe8U;
                } else if ((0xfff3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe9U;
                } else if ((0xfff4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xeaU;
                } else if ((0xfff5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf1U;
                } else if ((0xfff6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf2U;
                } else if ((0xfff7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf3U;
                } else if ((0xfff8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf4U;
                } else if ((0xfff9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf5U;
                } else if ((0xfffaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf6U;
                } else if ((0xfffbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf7U;
                } else if ((0xfffcU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf8U;
                } else if ((0xfffdU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf9U;
                } else if ((0xfffeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xfaU;
                }
            }
            if ((2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                        >> 0x1eU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 2U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 2U;
            } else if ((6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                               >> 0x1dU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 3U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 3U;
            } else if ((0xeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                 >> 0x1cU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 4U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 4U;
            } else if ((0x1eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                  >> 0x1bU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 5U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 5U;
            } else if ((0x3eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                  >> 0x1aU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 6U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 6U;
            } else if ((0x7eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                  >> 0x19U))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 7U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 7U;
            } else if ((0xfeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                  >> 0x18U))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 8U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 8U;
            } else if ((0x1feU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                   >> 0x17U))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 9U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 9U;
            } else if ((0x3feU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                   >> 0x16U))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 0xaU;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 0xaU;
            } else if ((0x7feU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                   >> 0x15U))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 0xbU;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 0xbU;
            }
        }
        if ((2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                    >> 0x1dU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 3U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 1U;
        } else if ((3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                           >> 0x1dU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 3U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 2U;
        } else if ((4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                           >> 0x1dU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 3U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 3U;
        } else if ((5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                           >> 0x1dU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 3U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 4U;
        } else if ((6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                           >> 0x1dU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 3U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 5U;
        } else if ((0xeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                             >> 0x1cU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 4U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 6U;
        } else if ((0x1eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                              >> 0x1bU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 5U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 7U;
        } else if ((0x3eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                              >> 0x1aU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 6U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 8U;
        } else if ((0x7eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                              >> 0x19U))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 7U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 9U;
        } else if ((0xfeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                              >> 0x18U))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 8U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 0xaU;
        } else if ((0x1feU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                               >> 0x17U))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 9U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 0xbU;
        }
    }
    vlSelf->__PVT__u_jpeg_input__DOT__idx_q = vlSelf->__Vdly__u_jpeg_input__DOT__idx_q;
    vlSelf->__PVT__u_jpeg_input__DOT__data_r = (0xffU 
                                                & ((1U 
                                                    == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__byte_idx_q))
                                                    ? 
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSymsp->TOP.inport_strb_i) 
                                                                   >> 1U)))) 
                                                    & (vlSymsp->TOP.inport_data_i 
                                                       >> 8U))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__byte_idx_q))
                                                     ? 
                                                    ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP.inport_strb_i) 
                                                                    >> 2U)))) 
                                                     & (vlSymsp->TOP.inport_data_i 
                                                        >> 0x10U))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__byte_idx_q))
                                                      ? 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP.inport_strb_i) 
                                                                     >> 3U)))) 
                                                      & (vlSymsp->TOP.inport_data_i 
                                                         >> 0x18U))
                                                      : 
                                                     ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSymsp->TOP.inport_strb_i)))) 
                                                      & vlSymsp->TOP.inport_data_i)))));
    vlSelf->__PVT__u_jpeg_input__DOT__token_sof0_w 
        = ((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
           & (0xc0U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)));
    vlSelf->__PVT__u_jpeg_input__DOT__token_pad_w = 
        ((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
         & (0U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)));
    vlSelf->__PVT__u_jpeg_input__DOT__token_eoi_w = 
        ((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
         & (0xd9U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)));
    vlSelf->__PVT__bb_inport_valid_w = ((~ (IData)(vlSelf->__PVT__u_jpeg_input__DOT__token_eoi_w)) 
                                        & (IData)(vlSelf->u_jpeg_input__DOT____VdfgTmp_he4b2d5da__0));
    vlSelf->__PVT__img_end_w = ((IData)(vlSelf->__PVT__u_jpeg_input__DOT__eof_q) 
                                | ((IData)(vlSymsp->TOP.inport_valid_i) 
                                   & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__token_eoi_w)));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_core___nba_sequent__TOP__jpeg_core__2(Vjpeg_core_jpeg_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vjpeg_core_jpeg_core___nba_sequent__TOP__jpeg_core__2\n"); );
    // Body
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__u_jpeg_input__DOT__start_q = 0U;
        vlSelf->__PVT__u_jpeg_input__DOT__state_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP.inport_valid_i) & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__token_sos_w))) {
            vlSelf->__PVT__u_jpeg_input__DOT__start_q = 0U;
        } else if (((0U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                    & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__token_soi_w))) {
            vlSelf->__PVT__u_jpeg_input__DOT__start_q = 1U;
        }
        vlSelf->__PVT__u_jpeg_input__DOT__state_q = vlSelf->__PVT__u_jpeg_input__DOT__next_state_r;
    }
    vlSelf->__PVT__u_jpeg_input__DOT__token_sos_w = 
        ((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
         & (0xdaU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)));
    vlSelf->__PVT__u_jpeg_input__DOT__token_soi_w = 
        ((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
         & (0xd8U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)));
    vlSelf->__PVT__dqt_cfg_valid_w = ((7U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                                      & (IData)(vlSymsp->TOP.inport_valid_i));
    vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w 
        = ((7U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
           | ((0xaU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
              | (((0xeU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                  & ((0x38U >= (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q)) 
                     | (IData)(vlSelf->__PVT__u_jpeg_input__DOT__token_pad_w))) 
                 | ((7U != (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                    & ((0xaU != (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)) 
                       & (0xeU != (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q)))))));
    vlSelf->__PVT__u_jpeg_input__DOT__next_state_r 
        = vlSelf->__PVT__u_jpeg_input__DOT__state_q;
    if ((0x10U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
                        if ((((IData)(vlSymsp->TOP.inport_valid_i) 
                              & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w)) 
                             & (1U >= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__length_q)))) {
                            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 1U;
                        }
                    } else if (vlSymsp->TOP.inport_valid_i) {
                        vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0x11U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
        if ((4U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
            if ((2U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
                if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
                    if (vlSymsp->TOP.inport_valid_i) {
                        vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0x10U;
                    }
                } else if (vlSelf->__PVT__u_jpeg_input__DOT__token_eoi_w) {
                    vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0U;
                }
            } else if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
                if (((IData)(vlSymsp->TOP.inport_valid_i) 
                     & (1U >= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__length_q)))) {
                    vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0xeU;
                }
            } else if (vlSymsp->TOP.inport_valid_i) {
                vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0xdU;
            }
        } else if ((2U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
                if (vlSymsp->TOP.inport_valid_i) {
                    vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0xcU;
                }
            } else if ((((IData)(vlSymsp->TOP.inport_valid_i) 
                         & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w)) 
                        & (1U >= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__length_q)))) {
                vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 1U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
            if (vlSymsp->TOP.inport_valid_i) {
                vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0xaU;
            }
        } else if (vlSymsp->TOP.inport_valid_i) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 9U;
        }
    } else if ((4U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
                if ((((IData)(vlSymsp->TOP.inport_valid_i) 
                      & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w)) 
                     & (1U >= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__length_q)))) {
                    vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 1U;
                }
            } else if (vlSymsp->TOP.inport_valid_i) {
                vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 7U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
            if (vlSymsp->TOP.inport_valid_i) {
                vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 6U;
            }
        } else if ((((IData)(vlSymsp->TOP.inport_valid_i) 
                     & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w)) 
                    & (1U >= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__length_q)))) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 1U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
            if (vlSymsp->TOP.inport_valid_i) {
                vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 4U;
            }
        } else if (vlSymsp->TOP.inport_valid_i) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 3U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__state_q))) {
        if (vlSelf->__PVT__u_jpeg_input__DOT__token_eoi_w) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0U;
        } else if (((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
                    & (0xdbU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)))) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 5U;
        } else if (((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
                    & (0xc4U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)))) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 8U;
        } else if (vlSelf->__PVT__u_jpeg_input__DOT__token_sos_w) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0xbU;
        } else if (vlSelf->__PVT__u_jpeg_input__DOT__token_sof0_w) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0xfU;
        } else if (((0xffU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__last_b_q)) 
                    & ((0xc2U == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)) 
                       | ((0xddU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)) 
                          | (((0xd0U <= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)) 
                              & (0xd7U >= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r))) 
                             | (((0xe0U <= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)) 
                                 & (0xefU >= (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r))) 
                                | (0xfeU == (IData)(vlSelf->__PVT__u_jpeg_input__DOT__data_r)))))))) {
            vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 2U;
        }
    } else if (vlSelf->__PVT__u_jpeg_input__DOT__token_soi_w) {
        vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 1U;
    }
    if ((((IData)(vlSymsp->TOP.inport_valid_i) & (IData)(vlSymsp->TOP.inport_last_i)) 
         & (IData)(vlSelf->__PVT__u_jpeg_input__DOT__inport_accept_w))) {
        vlSelf->__PVT__u_jpeg_input__DOT__next_state_r = 0U;
    }
}
