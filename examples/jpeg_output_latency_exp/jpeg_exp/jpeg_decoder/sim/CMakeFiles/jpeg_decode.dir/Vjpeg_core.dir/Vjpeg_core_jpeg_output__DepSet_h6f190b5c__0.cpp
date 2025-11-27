// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_output.h"

VL_INLINE_OPT void Vjpeg_core_jpeg_output___ico_sequent__TOP__jpeg_core__u_jpeg_output__0(Vjpeg_core_jpeg_output* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output___ico_sequent__TOP__jpeg_core__u_jpeg_output__0\n"); );
    // Body
    vlSelf->__PVT__output_space_w = (1U & ((~ (IData)(vlSelf->__PVT__valid_q)) 
                                           | (IData)(vlSymsp->TOP.outport_accept_i)));
    vlSelf->__PVT__id_pop_w = ((IData)(vlSelf->__PVT__output_space_w) 
                               & (0x3fU == (IData)(vlSelf->__PVT__idx_q)));
    vlSelf->__PVT__y_pop_w = ((IData)(vlSelf->__PVT__output_space_w) 
                              & (IData)(vlSelf->__PVT__active_q));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__0(Vjpeg_core_jpeg_output* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__0\n"); );
    // Init
    CData/*5:0*/ __Vdly__idx_q;
    __Vdly__idx_q = 0;
    CData/*1:0*/ __Vdly__subsmpl_q;
    __Vdly__subsmpl_q = 0;
    CData/*0:0*/ __Vdly__active_q;
    __Vdly__active_q = 0;
    // Body
    __Vdly__idx_q = vlSelf->__PVT__idx_q;
    __Vdly__subsmpl_q = vlSelf->__PVT__subsmpl_q;
    __Vdly__active_q = vlSelf->__PVT__active_q;
    if (vlSymsp->TOP.rst_i) {
        __Vdly__idx_q = 0U;
        __Vdly__subsmpl_q = 0U;
        __Vdly__active_q = 0U;
        vlSelf->__PVT__pixel_b_q = 0U;
        vlSelf->__PVT__pixel_r_q = 0U;
        vlSelf->__PVT__pixel_g_q = 0U;
        vlSelf->__PVT__pixel_y_q = 0U;
        vlSelf->__PVT__pixel_x_q = 0U;
        vlSelf->__PVT__valid_q = 0U;
        vlSelf->__PVT__idle_q = 1U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__idx_q = 0U;
            __Vdly__subsmpl_q = 0U;
            __Vdly__active_q = 0U;
            vlSelf->__PVT__idle_q = 0U;
        } else {
            if (((IData)(vlSelf->__PVT__active_q) & (IData)(vlSelf->__PVT__output_space_w))) {
                __Vdly__idx_q = (0x3fU & ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__idx_q)));
            }
            if (((((IData)(vlSelf->__PVT__active_q) 
                   & (IData)(vlSelf->__PVT__output_space_w)) 
                  & (2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))) 
                 & (0x3fU == (IData)(vlSelf->__PVT__idx_q)))) {
                __Vdly__subsmpl_q = (3U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__subsmpl_q)));
            }
            if (vlSelf->__PVT__active_q) {
                if ((((IData)(vlSelf->__PVT__valid_r) 
                      & (IData)(vlSelf->__PVT__output_space_w)) 
                     & (0x3fU == (IData)(vlSelf->__PVT__idx_q)))) {
                    __Vdly__active_q = 0U;
                }
            } else {
                __Vdly__active_q = ((0U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
                                     ? (0x40U <= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_q)
                                     : ((1U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
                                         ? (((0x40U 
                                              <= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_q) 
                                             & (0x40U 
                                                <= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__count_q)) 
                                            & (0x40U 
                                               <= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__count_q))
                                         : ((0U != (IData)(vlSelf->__PVT__subsmpl_q)) 
                                            | (((0x100U 
                                                 <= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_q) 
                                                & (0x100U 
                                                   <= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__count_q)) 
                                               & (0x100U 
                                                  <= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__count_q)))));
            }
            if (((0U != (IData)(vlSelf->__PVT__u_info__DOT__count_q)) 
                 & (3U == (vlSelf->__PVT__id_value_w 
                           >> 0x1eU)))) {
                vlSelf->__PVT__idle_q = 1U;
            }
        }
        if (vlSelf->__PVT__output_space_w) {
            vlSelf->__PVT__pixel_b_q = (0xffU & ((0U 
                                                  != 
                                                  (vlSelf->__PVT__b_conv_r 
                                                   >> 8U))
                                                  ? 
                                                 (~ 
                                                  (vlSelf->__PVT__b_conv_r 
                                                   >> 0x18U))
                                                  : vlSelf->__PVT__b_conv_r));
            vlSelf->__PVT__pixel_r_q = (0xffU & ((0U 
                                                  != 
                                                  (vlSelf->__PVT__r_conv_r 
                                                   >> 8U))
                                                  ? 
                                                 (~ 
                                                  (vlSelf->__PVT__r_conv_r 
                                                   >> 0x18U))
                                                  : vlSelf->__PVT__r_conv_r));
            vlSelf->__PVT__pixel_g_q = (0xffU & ((0U 
                                                  != 
                                                  (vlSelf->__PVT__g_conv_r 
                                                   >> 8U))
                                                  ? 
                                                 (~ 
                                                  (vlSelf->__PVT__g_conv_r 
                                                   >> 0x18U))
                                                  : vlSelf->__PVT__g_conv_r));
            vlSelf->__PVT__pixel_y_q = (0xffffU & (
                                                   (0x1fff8U 
                                                    & (vlSelf->__PVT__id_value_w 
                                                       >> 0xdU)) 
                                                   + 
                                                   ((IData)(vlSelf->__PVT__idx_q) 
                                                    >> 3U)));
            vlSelf->__PVT__pixel_x_q = (0xffffU & (
                                                   (0x7fff8U 
                                                    & (vlSelf->__PVT__id_value_w 
                                                       << 3U)) 
                                                   + 
                                                   (7U 
                                                    & (IData)(vlSelf->__PVT__idx_q))));
            vlSelf->__PVT__valid_q = ((IData)(vlSelf->__PVT__active_q) 
                                      & (3U != (vlSelf->__PVT__id_value_w 
                                                >> 0x1eU)));
        }
    }
    vlSelf->__PVT__subsmpl_q = __Vdly__subsmpl_q;
    vlSelf->__PVT__idx_q = __Vdly__idx_q;
    vlSelf->__PVT__active_q = __Vdly__active_q;
    vlSelf->__PVT__valid_r = vlSelf->__PVT__active_q;
    vlSelf->__PVT__output_space_w = (1U & ((~ (IData)(vlSelf->__PVT__valid_q)) 
                                           | (IData)(vlSymsp->TOP.outport_accept_i)));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__1(Vjpeg_core_jpeg_output* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__1\n"); );
    // Body
    vlSelf->__PVT__y_pop_w = ((IData)(vlSelf->__PVT__output_space_w) 
                              & (IData)(vlSelf->__PVT__active_q));
    if ((0U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))) {
        vlSelf->__PVT__r_conv_r = ((IData)(0x80U) + vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o);
        vlSelf->__PVT__b_conv_r = ((IData)(0x80U) + vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o);
        vlSelf->__PVT__g_conv_r = ((IData)(0x80U) + vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o);
    } else {
        vlSelf->__PVT__r_conv_r = ((IData)(0x80U) + 
                                   (vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o 
                                    + VL_SHIFTRS_III(32,32,32, 
                                                     VL_MULS_III(32, (IData)(0x166fU), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__data_out_o), 0xcU)));
        vlSelf->__PVT__b_conv_r = ((IData)(0x80U) + 
                                   (vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o 
                                    + VL_SHIFTRS_III(32,32,32, 
                                                     VL_MULS_III(32, (IData)(0x1c5aU), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__data_out_o), 0xcU)));
        vlSelf->__PVT__g_conv_r = ((((IData)(0x80U) 
                                     + vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o) 
                                    - VL_SHIFTRS_III(32,32,32, 
                                                     VL_MULS_III(32, (IData)(0x582U), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__data_out_o), 0xcU)) 
                                   - VL_SHIFTRS_III(32,32,32, 
                                                    VL_MULS_III(32, (IData)(0xb6dU), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__data_out_o), 0xcU));
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__2(Vjpeg_core_jpeg_output* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__2\n"); );
    // Init
    CData/*2:0*/ __Vdly__u_info__DOT__wr_ptr_q;
    __Vdly__u_info__DOT__wr_ptr_q = 0;
    CData/*2:0*/ __Vdlyvdim0__u_info__DOT__ram_q__v0;
    __Vdlyvdim0__u_info__DOT__ram_q__v0 = 0;
    IData/*31:0*/ __Vdlyvval__u_info__DOT__ram_q__v0;
    __Vdlyvval__u_info__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_info__DOT__ram_q__v0;
    __Vdlyvset__u_info__DOT__ram_q__v0 = 0;
    CData/*2:0*/ __Vdly__u_info__DOT__rd_ptr_q;
    __Vdly__u_info__DOT__rd_ptr_q = 0;
    CData/*3:0*/ __Vdly__u_info__DOT__count_q;
    __Vdly__u_info__DOT__count_q = 0;
    // Body
    __Vdly__u_info__DOT__rd_ptr_q = vlSelf->__PVT__u_info__DOT__rd_ptr_q;
    __Vdly__u_info__DOT__count_q = vlSelf->__PVT__u_info__DOT__count_q;
    __Vdly__u_info__DOT__wr_ptr_q = vlSelf->__PVT__u_info__DOT__wr_ptr_q;
    __Vdlyvset__u_info__DOT__ram_q__v0 = 0U;
    if (vlSymsp->TOP.rst_i) {
        __Vdly__u_info__DOT__rd_ptr_q = 0U;
        __Vdly__u_info__DOT__count_q = 0U;
        __Vdly__u_info__DOT__wr_ptr_q = 0U;
    } else if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
        __Vdly__u_info__DOT__rd_ptr_q = 0U;
        __Vdly__u_info__DOT__count_q = 0U;
        __Vdly__u_info__DOT__wr_ptr_q = 0U;
    } else {
        if (((IData)(vlSelf->__PVT__id_pop_w) & (0U 
                                                 != (IData)(vlSelf->__PVT__u_info__DOT__count_q)))) {
            __Vdly__u_info__DOT__rd_ptr_q = (7U & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_info__DOT__rd_ptr_q)));
        }
        if ((((IData)(vlSelf->__Vcellinp__u_info__push_i) 
              & (IData)(vlSelf->__PVT__u_info__DOT__accept_o)) 
             & (~ ((IData)(vlSelf->__PVT__id_pop_w) 
                   & (IData)(vlSelf->__PVT__id_valid_w))))) {
            __Vdly__u_info__DOT__count_q = (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__u_info__DOT__count_q)));
        } else if (((~ ((IData)(vlSelf->__Vcellinp__u_info__push_i) 
                        & (IData)(vlSelf->__PVT__u_info__DOT__accept_o))) 
                    & ((IData)(vlSelf->__PVT__id_pop_w) 
                       & (IData)(vlSelf->__PVT__id_valid_w)))) {
            __Vdly__u_info__DOT__count_q = (0xfU & 
                                            ((IData)(vlSelf->__PVT__u_info__DOT__count_q) 
                                             - (IData)(1U)));
        }
        if (((IData)(vlSelf->__Vcellinp__u_info__push_i) 
             & (8U != (IData)(vlSelf->__PVT__u_info__DOT__count_q)))) {
            __Vdlyvval__u_info__DOT__ram_q__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o;
            __Vdlyvset__u_info__DOT__ram_q__v0 = 1U;
            __Vdlyvdim0__u_info__DOT__ram_q__v0 = vlSelf->__PVT__u_info__DOT__wr_ptr_q;
            __Vdly__u_info__DOT__wr_ptr_q = (7U & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_info__DOT__wr_ptr_q)));
        }
    }
    vlSelf->__PVT__u_info__DOT__rd_ptr_q = __Vdly__u_info__DOT__rd_ptr_q;
    vlSelf->__PVT__u_info__DOT__wr_ptr_q = __Vdly__u_info__DOT__wr_ptr_q;
    if (__Vdlyvset__u_info__DOT__ram_q__v0) {
        vlSelf->__PVT__u_info__DOT__ram_q[__Vdlyvdim0__u_info__DOT__ram_q__v0] 
            = __Vdlyvval__u_info__DOT__ram_q__v0;
    }
    vlSelf->__PVT__u_info__DOT__count_q = __Vdly__u_info__DOT__count_q;
    vlSelf->__PVT__id_value_w = vlSelf->__PVT__u_info__DOT__ram_q
        [vlSelf->__PVT__u_info__DOT__rd_ptr_q];
    vlSelf->__PVT__id_valid_w = (0U != (IData)(vlSelf->__PVT__u_info__DOT__count_q));
    vlSelf->__PVT__u_info__DOT__accept_o = (8U != (IData)(vlSelf->__PVT__u_info__DOT__count_q));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output___nba_comb__TOP__jpeg_core__u_jpeg_output__0(Vjpeg_core_jpeg_output* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output___nba_comb__TOP__jpeg_core__u_jpeg_output__0\n"); );
    // Body
    vlSelf->__Vcellinp__u_ram_cb__push_i = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_y__DOT__valid_q) 
                                             >> 6U) 
                                            & ((1U 
                                                == 
                                                (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                                 >> 0x1eU)) 
                                               | (3U 
                                                  == 
                                                  (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                                   >> 0x1eU))));
    vlSelf->__Vcellinp__u_ram_cr__push_i = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_y__DOT__valid_q) 
                                             >> 6U) 
                                            & ((2U 
                                                == 
                                                (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                                 >> 0x1eU)) 
                                               | (3U 
                                                  == 
                                                  (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                                   >> 0x1eU))));
    vlSelf->__Vcellinp__u_ram_y__push_i = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk2__DOT__u_idct_y__DOT__valid_q) 
                                            >> 6U) 
                                           & ((0U == 
                                               (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                                >> 0x1eU)) 
                                              | (3U 
                                                 == 
                                                 (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                                  >> 0x1eU))));
    vlSelf->__Vcellinp__u_info__push_i = ((IData)(vlSelf->__Vcellinp__u_ram_y__push_i) 
                                          & (0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o)));
}
