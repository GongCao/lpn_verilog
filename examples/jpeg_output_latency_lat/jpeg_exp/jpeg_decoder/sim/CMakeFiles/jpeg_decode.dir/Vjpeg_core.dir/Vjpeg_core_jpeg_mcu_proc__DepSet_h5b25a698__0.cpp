// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_mcu_proc.h"

bool Vjpeg_core_jpeg_mcu_proc::get_dht_valid() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::get_dht_valid\n"); );
    VL_OUT8(get_dht_valid__Vfuncrtn,0,0);
    // Body
    get_dht_valid__Vfuncrtn = ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_valid_q) 
                               & (2U == (IData)(this->__PVT__state_q)));
    // Final
    return (get_dht_valid__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_mcu_proc::get_dht_width() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::get_dht_width\n"); );
    VL_OUT8(get_dht_width__Vfuncrtn,4,0);
    // Body
    get_dht_width__Vfuncrtn = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_width_q;
    // Final
    return (get_dht_width__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_mcu_proc::get_dht_value() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::get_dht_value\n"); );
    VL_OUT8(get_dht_value__Vfuncrtn,7,0);
    // Body
    get_dht_value__Vfuncrtn = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_value_q;
    // Final
    return (get_dht_value__Vfuncrtn);
}

VL_INLINE_OPT void Vjpeg_core_jpeg_mcu_proc___ico_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__0(Vjpeg_core_jpeg_mcu_proc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc___ico_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__0\n"); );
    // Body
    vlSelf->__PVT__next_state_r = vlSelf->__PVT__state_q;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_q) >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->__PVT__state_q))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->__PVT__state_q))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__img_end_w)))) {
                            vlSelf->__PVT__next_state_r = 0U;
                        }
                    } else {
                        vlSelf->__PVT__next_state_r = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->__PVT__state_q))) {
                if ((1U & (IData)(vlSelf->__PVT__state_q))) {
                    vlSelf->__PVT__next_state_r = 1U;
                } else if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_valid_q) {
                    vlSelf->__PVT__next_state_r = 3U;
                }
            } else if ((1U & (IData)(vlSelf->__PVT__state_q))) {
                if ((0x3fU <= (IData)(vlSelf->__PVT__coeff_idx_q))) {
                    vlSelf->__PVT__next_state_r = 4U;
                } else if (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o) {
                    vlSelf->__PVT__next_state_r = 2U;
                }
            } else if (((IData)(vlSelf->__PVT__u_id__DOT__end_of_image_q) 
                        & ((~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_eob_q) 
                               | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q))) 
                           & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o)))) {
                vlSelf->__PVT__next_state_r = 5U;
            } else if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o) 
                        & ((~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_eob_q) 
                               | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q))) 
                           & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o)))) {
                vlSelf->__PVT__next_state_r = 1U;
            }
        }
    }
    if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
        vlSelf->__PVT__next_state_r = 0U;
    }
    vlSelf->__PVT__start_block_w = ((0U == (IData)(vlSelf->__PVT__state_q)) 
                                    & (0U != (IData)(vlSelf->__PVT__next_state_r)));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_mcu_proc___nba_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__0(Vjpeg_core_jpeg_mcu_proc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc___nba_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__0\n"); );
    // Init
    SData/*15:0*/ __PVT__decode_number__Vstatic__code;
    __PVT__decode_number__Vstatic__code = 0;
    SData/*15:0*/ __Vfunc_decode_number__0__Vfuncout;
    __Vfunc_decode_number__0__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_decode_number__0__w;
    __Vfunc_decode_number__0__w = 0;
    CData/*4:0*/ __Vfunc_decode_number__0__bits;
    __Vfunc_decode_number__0__bits = 0;
    SData/*15:0*/ __Vfunc_decode_number__1__Vfuncout;
    __Vfunc_decode_number__1__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_decode_number__1__w;
    __Vfunc_decode_number__1__w = 0;
    CData/*4:0*/ __Vfunc_decode_number__1__bits;
    __Vfunc_decode_number__1__bits = 0;
    CData/*0:0*/ __Vdlyvset__prev_dc_coeff_q__v0;
    __Vdlyvset__prev_dc_coeff_q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__prev_dc_coeff_q__v4;
    __Vdlyvset__prev_dc_coeff_q__v4 = 0;
    CData/*1:0*/ __Vdlyvdim0__prev_dc_coeff_q__v8;
    __Vdlyvdim0__prev_dc_coeff_q__v8 = 0;
    SData/*15:0*/ __Vdlyvval__prev_dc_coeff_q__v8;
    __Vdlyvval__prev_dc_coeff_q__v8 = 0;
    CData/*0:0*/ __Vdlyvset__prev_dc_coeff_q__v8;
    __Vdlyvset__prev_dc_coeff_q__v8 = 0;
    CData/*7:0*/ __Vdly__coeff_idx_q;
    __Vdly__coeff_idx_q = 0;
    CData/*1:0*/ __Vdly__u_id__DOT__block_type_q;
    __Vdly__u_id__DOT__block_type_q = 0;
    CData/*2:0*/ __Vdly__u_id__DOT__type_idx_q;
    __Vdly__u_id__DOT__type_idx_q = 0;
    SData/*15:0*/ __Vdly__u_id__DOT__block_y_q;
    __Vdly__u_id__DOT__block_y_q = 0;
    SData/*15:0*/ __Vdly__u_id__DOT__x_idx_q;
    __Vdly__u_id__DOT__x_idx_q = 0;
    SData/*15:0*/ __Vdly__u_id__DOT__y_idx_q;
    __Vdly__u_id__DOT__y_idx_q = 0;
    // Body
    __Vdlyvset__prev_dc_coeff_q__v0 = 0U;
    __Vdlyvset__prev_dc_coeff_q__v4 = 0U;
    __Vdlyvset__prev_dc_coeff_q__v8 = 0U;
    __Vdly__coeff_idx_q = vlSelf->__PVT__coeff_idx_q;
    __Vdly__u_id__DOT__y_idx_q = vlSelf->__PVT__u_id__DOT__y_idx_q;
    __Vdly__u_id__DOT__x_idx_q = vlSelf->__PVT__u_id__DOT__x_idx_q;
    __Vdly__u_id__DOT__block_y_q = vlSelf->__PVT__u_id__DOT__block_y_q;
    __Vdly__u_id__DOT__type_idx_q = vlSelf->__PVT__u_id__DOT__type_idx_q;
    __Vdly__u_id__DOT__block_type_q = vlSelf->__PVT__u_id__DOT__block_type_q;
    if (vlSymsp->TOP.rst_i) {
        __Vdlyvset__prev_dc_coeff_q__v0 = 1U;
        __Vdly__coeff_idx_q = 0U;
        __Vdly__u_id__DOT__block_type_q = 0U;
        __Vdly__u_id__DOT__type_idx_q = 0U;
        vlSelf->__PVT__lookup_width_q = 0U;
        vlSelf->__PVT__input_data_q = 0U;
        vlSelf->__PVT__coeff_q = 0U;
        vlSelf->__PVT__dc_coeff_q = 0U;
        vlSelf->__PVT__first_q = 1U;
        vlSelf->__PVT__code_q = 0U;
        vlSelf->__PVT__u_id__DOT__end_of_image_q = 0U;
        vlSelf->__PVT__u_id__DOT__block_x_q = 0U;
        __Vdly__u_id__DOT__block_y_q = 0U;
        __Vdly__u_id__DOT__x_idx_q = 0U;
        __Vdly__u_id__DOT__y_idx_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdlyvset__prev_dc_coeff_q__v4 = 1U;
            __Vdly__u_id__DOT__block_type_q = 0U;
            __Vdly__u_id__DOT__type_idx_q = 0U;
            vlSelf->__PVT__u_id__DOT__end_of_image_q = 0U;
            vlSelf->__PVT__u_id__DOT__block_x_q = 0U;
            __Vdly__u_id__DOT__block_y_q = 0U;
            __Vdly__u_id__DOT__x_idx_q = 0U;
            __Vdly__u_id__DOT__y_idx_q = 0U;
        } else {
            if ((4U == (IData)(vlSelf->__PVT__state_q))) {
                __Vdlyvval__prev_dc_coeff_q__v8 = vlSelf->__PVT__dc_coeff_q;
                __Vdlyvset__prev_dc_coeff_q__v8 = 1U;
                __Vdlyvdim0__prev_dc_coeff_q__v8 = vlSelf->__PVT__u_id__DOT__block_type_q;
            }
            if (((IData)(vlSelf->__PVT__start_block_w) 
                 & (IData)(vlSelf->__PVT__u_id__DOT__end_of_image_q))) {
                __Vdly__u_id__DOT__block_type_q = 3U;
                __Vdly__u_id__DOT__type_idx_q = 0U;
            } else if ((0U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))) {
                __Vdly__u_id__DOT__block_type_q = 0U;
            } else if (((1U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q)) 
                        & (4U == (IData)(vlSelf->__PVT__state_q)))) {
                __Vdly__u_id__DOT__block_type_q = (
                                                   (2U 
                                                    == (IData)(vlSelf->__PVT__u_id__DOT__block_type_q))
                                                    ? 0U
                                                    : 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelf->__PVT__u_id__DOT__block_type_q))));
            } else if (((2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q)) 
                        & (4U == (IData)(vlSelf->__PVT__state_q)))) {
                __Vdly__u_id__DOT__type_idx_q = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__u_id__DOT__type_idx_q)));
                if ((3U == (IData)(vlSelf->__PVT__u_id__DOT__type_idx_q))) {
                    __Vdly__u_id__DOT__block_type_q = 1U;
                } else if ((4U == (IData)(vlSelf->__PVT__u_id__DOT__type_idx_q))) {
                    __Vdly__u_id__DOT__block_type_q = 2U;
                } else if ((5U == (IData)(vlSelf->__PVT__u_id__DOT__type_idx_q))) {
                    __Vdly__u_id__DOT__block_type_q = 0U;
                    __Vdly__u_id__DOT__type_idx_q = 0U;
                } else {
                    __Vdly__u_id__DOT__block_type_q = 0U;
                }
            }
            if (((4U == (IData)(vlSelf->__PVT__state_q)) 
                 & ((0U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q)) 
                    | ((1U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q)) 
                       & (2U == (IData)(vlSelf->__PVT__u_id__DOT__block_type_q)))))) {
                if (((IData)(vlSymsp->TOP__jpeg_core.__PVT__img_end_w) 
                     & ((0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_id__DOT__block_x_q))) 
                        == (0x1fffU & (((IData)(7U) 
                                        + (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q)) 
                                       >> 3U))))) {
                    vlSelf->__PVT__u_id__DOT__end_of_image_q = 1U;
                }
                if (((IData)(vlSelf->__PVT__u_id__DOT__block_x_next_w) 
                     == (0x1fffU & (((IData)(7U) + (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q)) 
                                    >> 3U)))) {
                    __Vdly__u_id__DOT__block_y_q = 
                        (0xffffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_id__DOT__block_y_q)));
                    vlSelf->__PVT__u_id__DOT__block_x_q = 0U;
                } else {
                    vlSelf->__PVT__u_id__DOT__block_x_q 
                        = vlSelf->__PVT__u_id__DOT__block_x_next_w;
                }
            } else {
                if ((1U & (~ (((IData)(vlSelf->__PVT__start_block_w) 
                               & (2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))) 
                              & (0U == (IData)(vlSelf->__PVT__u_id__DOT__block_type_q)))))) {
                    if ((((IData)(vlSelf->__PVT__start_block_w) 
                          & (2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))) 
                         & (2U == (IData)(vlSelf->__PVT__u_id__DOT__block_type_q)))) {
                        if (((IData)(vlSymsp->TOP__jpeg_core.__PVT__img_end_w) 
                             & ((0xffffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__u_id__DOT__block_x_q))) 
                                == (0x1fffU & (((IData)(7U) 
                                                + (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q)) 
                                               >> 3U))))) {
                            vlSelf->__PVT__u_id__DOT__end_of_image_q = 1U;
                        }
                    }
                }
                if ((((IData)(vlSelf->__PVT__start_block_w) 
                      & (2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))) 
                     & (0U == (IData)(vlSelf->__PVT__u_id__DOT__block_type_q)))) {
                    vlSelf->__PVT__u_id__DOT__block_x_q 
                        = (0xffffU & ((0x7ffeU & ((IData)(vlSelf->__PVT__u_id__DOT__x_idx_q) 
                                                  >> 1U)) 
                                      + ((1U & (IData)(vlSelf->__PVT__u_id__DOT__type_idx_q))
                                          ? 1U : 0U)));
                    __Vdly__u_id__DOT__block_y_q = 
                        (0xffffU & ((IData)(vlSelf->__PVT__u_id__DOT__y_idx_q) 
                                    + ((2U & (IData)(vlSelf->__PVT__u_id__DOT__type_idx_q))
                                        ? 1U : 0U)));
                    if ((4U > (IData)(vlSelf->__PVT__u_id__DOT__type_idx_q))) {
                        if (((0xffffU & ((IData)(1U) 
                                         + (IData)(vlSelf->__PVT__u_id__DOT__x_idx_q))) 
                             == (0x3ffeU & (((IData)(7U) 
                                             + (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q)) 
                                            >> 2U)))) {
                            __Vdly__u_id__DOT__y_idx_q 
                                = (0xffffU & ((IData)(2U) 
                                              + (IData)(vlSelf->__PVT__u_id__DOT__y_idx_q)));
                            __Vdly__u_id__DOT__x_idx_q = 0U;
                        } else {
                            __Vdly__u_id__DOT__x_idx_q 
                                = (0xffffU & ((IData)(1U) 
                                              + (IData)(vlSelf->__PVT__u_id__DOT__x_idx_q)));
                        }
                    }
                }
            }
        }
        if (((4U == (IData)(vlSelf->__PVT__state_q)) 
             | (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q))) {
            __Vdly__coeff_idx_q = 0U;
        } else if ((((1U == (IData)(vlSelf->__PVT__state_q)) 
                     & (~ (IData)(vlSelf->__PVT__first_q))) 
                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o))) {
            __Vdly__coeff_idx_q = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__coeff_idx_q)));
        } else if ((3U == (IData)(vlSelf->__PVT__state_q))) {
            if ((0U != (IData)(vlSelf->__PVT__coeff_idx_q))) {
                __Vdly__coeff_idx_q = ((0U == (IData)(vlSelf->__PVT__code_q))
                                        ? 0x40U : (0xffU 
                                                   & ((0xf0U 
                                                       == (IData)(vlSelf->__PVT__code_q))
                                                       ? 
                                                      ((IData)(0xfU) 
                                                       + (IData)(vlSelf->__PVT__coeff_idx_q))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__coeff_idx_q) 
                                                       + 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->__PVT__code_q) 
                                                           >> 4U))))));
            }
        }
        if (((2U == (IData)(vlSelf->__PVT__state_q)) 
             & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_valid_q))) {
            vlSelf->__PVT__lookup_width_q = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_width_q;
            vlSelf->__PVT__input_data_q = (0xffffU 
                                           & (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                              >> (0x1fU 
                                                  & ((IData)(0x10U) 
                                                     - (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_width_q)))));
            vlSelf->__PVT__code_q = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_value_q;
        }
        if ((3U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__coeff_q = vlSelf->__PVT__coeff_r;
        }
        if (((3U == (IData)(vlSelf->__PVT__state_q)) 
             & (0U == (IData)(vlSelf->__PVT__coeff_idx_q)))) {
            vlSelf->__PVT__dc_coeff_q = vlSelf->__PVT__coeff_r;
        }
        if ((0U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__first_q = 1U;
        } else if ((3U == (IData)(vlSelf->__PVT__state_q))) {
            vlSelf->__PVT__first_q = 0U;
        }
    }
    if (__Vdlyvset__prev_dc_coeff_q__v0) {
        vlSelf->__PVT__prev_dc_coeff_q[0U] = 0U;
        vlSelf->__PVT__prev_dc_coeff_q[1U] = 0U;
        vlSelf->__PVT__prev_dc_coeff_q[2U] = 0U;
        vlSelf->__PVT__prev_dc_coeff_q[3U] = 0U;
    }
    if (__Vdlyvset__prev_dc_coeff_q__v4) {
        vlSelf->__PVT__prev_dc_coeff_q[0U] = 0U;
        vlSelf->__PVT__prev_dc_coeff_q[1U] = 0U;
        vlSelf->__PVT__prev_dc_coeff_q[2U] = 0U;
        vlSelf->__PVT__prev_dc_coeff_q[3U] = 0U;
    }
    if (__Vdlyvset__prev_dc_coeff_q__v8) {
        vlSelf->__PVT__prev_dc_coeff_q[__Vdlyvdim0__prev_dc_coeff_q__v8] 
            = __Vdlyvval__prev_dc_coeff_q__v8;
    }
    vlSelf->__PVT__coeff_idx_q = __Vdly__coeff_idx_q;
    vlSelf->__PVT__u_id__DOT__x_idx_q = __Vdly__u_id__DOT__x_idx_q;
    vlSelf->__PVT__u_id__DOT__y_idx_q = __Vdly__u_id__DOT__y_idx_q;
    vlSelf->__PVT__u_id__DOT__type_idx_q = __Vdly__u_id__DOT__type_idx_q;
    vlSelf->__PVT__u_id__DOT__block_y_q = __Vdly__u_id__DOT__block_y_q;
    vlSelf->__PVT__u_id__DOT__block_type_q = __Vdly__u_id__DOT__block_type_q;
    vlSelf->__PVT__u_id__DOT__block_x_next_w = (0xffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_id__DOT__block_x_q)));
    __Vfunc_decode_number__1__bits = (0xfU & (IData)(vlSelf->__PVT__code_q));
    if ((0xfU >= ((IData)(0x10U) - (0xfU & (IData)(vlSelf->__PVT__code_q))))) {
        __Vfunc_decode_number__1__w = (0xffffU & ((IData)(vlSelf->__PVT__input_data_q) 
                                                  >> 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__code_q)))));
        __Vfunc_decode_number__0__w = (0xffffU & ((IData)(vlSelf->__PVT__input_data_q) 
                                                  >> 
                                                  ((IData)(0x10U) 
                                                   - 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__code_q)))));
    } else {
        __Vfunc_decode_number__1__w = 0U;
        __Vfunc_decode_number__0__w = 0U;
    }
    __PVT__decode_number__Vstatic__code = __Vfunc_decode_number__1__w;
    if (((0U == ((IData)(__PVT__decode_number__Vstatic__code) 
                 & ((IData)(1U) << (0x1fU & ((IData)(__Vfunc_decode_number__1__bits) 
                                             - (IData)(1U)))))) 
         & (0U != (IData)(__Vfunc_decode_number__1__bits)))) {
        __PVT__decode_number__Vstatic__code = (0xffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (VL_EXTENDS_II(16,16, (IData)(__PVT__decode_number__Vstatic__code)) 
                                                   | ((IData)(0xffffffffU) 
                                                      << (IData)(__Vfunc_decode_number__1__bits)))));
    }
    __Vfunc_decode_number__1__Vfuncout = __PVT__decode_number__Vstatic__code;
    __Vfunc_decode_number__0__bits = (0xfU & (IData)(vlSelf->__PVT__code_q));
    __PVT__decode_number__Vstatic__code = __Vfunc_decode_number__0__w;
    if (((0U == ((IData)(__PVT__decode_number__Vstatic__code) 
                 & ((IData)(1U) << (0x1fU & ((IData)(__Vfunc_decode_number__0__bits) 
                                             - (IData)(1U)))))) 
         & (0U != (IData)(__Vfunc_decode_number__0__bits)))) {
        __PVT__decode_number__Vstatic__code = (0xffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (VL_EXTENDS_II(16,16, (IData)(__PVT__decode_number__Vstatic__code)) 
                                                   | ((IData)(0xffffffffU) 
                                                      << (IData)(__Vfunc_decode_number__0__bits)))));
    }
    __Vfunc_decode_number__0__Vfuncout = __PVT__decode_number__Vstatic__code;
    vlSelf->__PVT__coeff_r = (0xffffU & ((0U == (IData)(vlSelf->__PVT__coeff_idx_q))
                                          ? ((IData)(__Vfunc_decode_number__0__Vfuncout) 
                                             + vlSelf->__PVT__prev_dc_coeff_q
                                             [vlSelf->__PVT__u_id__DOT__block_type_q])
                                          : (IData)(__Vfunc_decode_number__1__Vfuncout)));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_mcu_proc___nba_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__2(Vjpeg_core_jpeg_mcu_proc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc___nba_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__2\n"); );
    // Body
    vlSelf->__PVT__outport_id_o = (((IData)(vlSelf->__PVT__u_id__DOT__block_type_q) 
                                    << 0x1eU) | ((0x3fff0000U 
                                                  & ((IData)(vlSelf->__PVT__u_id__DOT__block_y_q) 
                                                     << 0x10U)) 
                                                 | (IData)(vlSelf->__PVT__u_id__DOT__block_x_q)));
    vlSelf->__PVT__push_q = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                             & ((3U == (IData)(vlSelf->__PVT__state_q)) 
                                | (5U == (IData)(vlSelf->__PVT__state_q))));
    vlSelf->__PVT__outport_valid_o = ((IData)(vlSelf->__PVT__push_q) 
                                      & (0x40U > (IData)(vlSelf->__PVT__coeff_idx_q)));
    vlSelf->__PVT__state_q = ((IData)(vlSymsp->TOP.rst_i)
                               ? 0U : (IData)(vlSelf->__PVT__next_state_r));
    vlSelf->__PVT__pop_bits_r = 0U;
    if ((3U == (IData)(vlSelf->__PVT__state_q))) {
        vlSelf->__PVT__pop_bits_r = (0x3fU & ((0U == (IData)(vlSelf->__PVT__coeff_idx_q))
                                               ? ((IData)(vlSelf->__PVT__lookup_width_q) 
                                                  + 
                                                  (0xfU 
                                                   & (IData)(vlSelf->__PVT__code_q)))
                                               : ((
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__code_q)) 
                                                   | (0xf0U 
                                                      == (IData)(vlSelf->__PVT__code_q)))
                                                   ? (IData)(vlSelf->__PVT__lookup_width_q)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__lookup_width_q) 
                                                   + 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__code_q))))));
    }
    vlSelf->__PVT__next_state_r = vlSelf->__PVT__state_q;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_q) >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->__PVT__state_q))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->__PVT__state_q))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__img_end_w)))) {
                            vlSelf->__PVT__next_state_r = 0U;
                        }
                    } else {
                        vlSelf->__PVT__next_state_r = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->__PVT__state_q))) {
                if ((1U & (IData)(vlSelf->__PVT__state_q))) {
                    vlSelf->__PVT__next_state_r = 1U;
                } else if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk1__DOT__lookup_valid_q) {
                    vlSelf->__PVT__next_state_r = 3U;
                }
            } else if ((1U & (IData)(vlSelf->__PVT__state_q))) {
                if ((0x3fU <= (IData)(vlSelf->__PVT__coeff_idx_q))) {
                    vlSelf->__PVT__next_state_r = 4U;
                } else if (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o) {
                    vlSelf->__PVT__next_state_r = 2U;
                }
            } else if (((IData)(vlSelf->__PVT__u_id__DOT__end_of_image_q) 
                        & ((~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_eob_q) 
                               | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q))) 
                           & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o)))) {
                vlSelf->__PVT__next_state_r = 5U;
            } else if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o) 
                        & ((~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_eob_q) 
                               | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q))) 
                           & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o)))) {
                vlSelf->__PVT__next_state_r = 1U;
            }
        }
    }
    if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
        vlSelf->__PVT__next_state_r = 0U;
    }
    vlSelf->__PVT__start_block_w = ((0U == (IData)(vlSelf->__PVT__state_q)) 
                                    & (0U != (IData)(vlSelf->__PVT__next_state_r)));
}
