// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_bitbuffer.h"

bool Vjpeg_core_jpeg_bitbuffer::get_valid() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer::get_valid\n"); );
    VL_OUT8(get_valid__Vfuncrtn,0,0);
    // Body
    get_valid__Vfuncrtn = ((IData)(vlSymsp->TOP__jpeg_core.__PVT__bb_inport_valid_w) 
                           & (0x38U >= (IData)(this->__PVT__count_q)));
    // Final
    return (get_valid__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_bitbuffer::get_data() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer::get_data\n"); );
    VL_OUT8(get_data__Vfuncrtn,7,0);
    // Body
    get_data__Vfuncrtn = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_data_q;
    // Final
    return (get_data__Vfuncrtn);
}

VL_INLINE_OPT void Vjpeg_core_jpeg_bitbuffer___ico_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__0(Vjpeg_core_jpeg_bitbuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer___ico_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__0\n"); );
    // Body
    vlSelf->__PVT__count_r = vlSelf->__PVT__count_q;
    if (((IData)(vlSymsp->TOP__jpeg_core.__PVT__bb_inport_valid_w) 
         & (0x38U >= (IData)(vlSelf->__PVT__count_q)))) {
        vlSelf->__PVT__count_r = (0x7fU & ((IData)(8U) 
                                           + (IData)(vlSelf->__PVT__count_r)));
    }
    if (((IData)(vlSelf->__PVT__outport_valid_o) & 
         (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r)))) {
        vlSelf->__PVT__count_r = (0x7fU & ((IData)(vlSelf->__PVT__count_r) 
                                           - (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r)));
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_bitbuffer___nba_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__0(Vjpeg_core_jpeg_bitbuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer___nba_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__0\n"); );
    // Init
    CData/*5:0*/ __Vdly__wr_ptr_q;
    __Vdly__wr_ptr_q = 0;
    CData/*2:0*/ __Vdlyvdim0__ram_q__v0;
    __Vdlyvdim0__ram_q__v0 = 0;
    CData/*7:0*/ __Vdlyvval__ram_q__v0;
    __Vdlyvval__ram_q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ram_q__v0;
    __Vdlyvset__ram_q__v0 = 0;
    CData/*5:0*/ __Vdly__rd_ptr_q;
    __Vdly__rd_ptr_q = 0;
    // Body
    __Vdly__rd_ptr_q = vlSelf->__PVT__rd_ptr_q;
    __Vdly__wr_ptr_q = vlSelf->__PVT__wr_ptr_q;
    __Vdlyvset__ram_q__v0 = 0U;
    if (vlSymsp->TOP.rst_i) {
        __Vdly__rd_ptr_q = 0U;
        __Vdly__wr_ptr_q = 0U;
        vlSelf->__PVT__drain_q = 0U;
    } else if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
        __Vdly__rd_ptr_q = 0U;
        __Vdly__wr_ptr_q = 0U;
        vlSelf->__PVT__drain_q = 0U;
    } else {
        if (((IData)(vlSelf->__PVT__outport_valid_o) 
             & (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r)))) {
            __Vdly__rd_ptr_q = (0x3fU & ((IData)(vlSelf->__PVT__rd_ptr_q) 
                                         + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r)));
        }
        if (((IData)(vlSymsp->TOP__jpeg_core.__PVT__bb_inport_valid_w) 
             & (0x38U >= (IData)(vlSelf->__PVT__count_q)))) {
            __Vdlyvval__ram_q__v0 = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_data_q;
            __Vdlyvset__ram_q__v0 = 1U;
            __Vdlyvdim0__ram_q__v0 = (7U & ((IData)(vlSelf->__PVT__wr_ptr_q) 
                                            >> 3U));
            __Vdly__wr_ptr_q = (0x3fU & ((IData)(8U) 
                                         + (IData)(vlSelf->__PVT__wr_ptr_q)));
        }
        if (((IData)(vlSymsp->TOP__jpeg_core.u_jpeg_input__DOT____VdfgTmp_he4b2d5da__0) 
             & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__token_eoi_w))) {
            vlSelf->__PVT__drain_q = 1U;
        }
    }
    vlSelf->__PVT__rd_ptr_q = __Vdly__rd_ptr_q;
    vlSelf->__PVT__wr_ptr_q = __Vdly__wr_ptr_q;
    if (__Vdlyvset__ram_q__v0) {
        vlSelf->__PVT__ram_q[__Vdlyvdim0__ram_q__v0] 
            = __Vdlyvval__ram_q__v0;
    }
    vlSelf->__PVT__fifo_data_r = ((0x20U & (IData)(vlSelf->__PVT__rd_ptr_q))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__rd_ptr_q))
                                       ? ((8U & (IData)(vlSelf->__PVT__rd_ptr_q))
                                           ? (((QData)((IData)(
                                                               ((vlSelf->__PVT__ram_q
                                                                 [7U] 
                                                                 << 0x18U) 
                                                                | ((vlSelf->__PVT__ram_q
                                                                    [0U] 
                                                                    << 0x10U) 
                                                                   | ((vlSelf->__PVT__ram_q
                                                                       [1U] 
                                                                       << 8U) 
                                                                      | vlSelf->__PVT__ram_q
                                                                      [2U]))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__ram_q
                                                                [3U])))
                                           : (((QData)((IData)(
                                                               ((vlSelf->__PVT__ram_q
                                                                 [6U] 
                                                                 << 0x18U) 
                                                                | ((vlSelf->__PVT__ram_q
                                                                    [7U] 
                                                                    << 0x10U) 
                                                                   | ((vlSelf->__PVT__ram_q
                                                                       [0U] 
                                                                       << 8U) 
                                                                      | vlSelf->__PVT__ram_q
                                                                      [1U]))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__ram_q
                                                                [2U]))))
                                       : ((8U & (IData)(vlSelf->__PVT__rd_ptr_q))
                                           ? (((QData)((IData)(
                                                               ((vlSelf->__PVT__ram_q
                                                                 [5U] 
                                                                 << 0x18U) 
                                                                | ((vlSelf->__PVT__ram_q
                                                                    [6U] 
                                                                    << 0x10U) 
                                                                   | ((vlSelf->__PVT__ram_q
                                                                       [7U] 
                                                                       << 8U) 
                                                                      | vlSelf->__PVT__ram_q
                                                                      [0U]))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__ram_q
                                                                [1U])))
                                           : (((QData)((IData)(
                                                               ((vlSelf->__PVT__ram_q
                                                                 [4U] 
                                                                 << 0x18U) 
                                                                | ((vlSelf->__PVT__ram_q
                                                                    [5U] 
                                                                    << 0x10U) 
                                                                   | ((vlSelf->__PVT__ram_q
                                                                       [6U] 
                                                                       << 8U) 
                                                                      | vlSelf->__PVT__ram_q
                                                                      [7U]))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__ram_q
                                                                [0U])))))
                                   : ((0x10U & (IData)(vlSelf->__PVT__rd_ptr_q))
                                       ? ((8U & (IData)(vlSelf->__PVT__rd_ptr_q))
                                           ? (((QData)((IData)(
                                                               ((vlSelf->__PVT__ram_q
                                                                 [3U] 
                                                                 << 0x18U) 
                                                                | ((vlSelf->__PVT__ram_q
                                                                    [4U] 
                                                                    << 0x10U) 
                                                                   | ((vlSelf->__PVT__ram_q
                                                                       [5U] 
                                                                       << 8U) 
                                                                      | vlSelf->__PVT__ram_q
                                                                      [6U]))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__ram_q
                                                                [7U])))
                                           : (((QData)((IData)(
                                                               ((vlSelf->__PVT__ram_q
                                                                 [2U] 
                                                                 << 0x18U) 
                                                                | ((vlSelf->__PVT__ram_q
                                                                    [3U] 
                                                                    << 0x10U) 
                                                                   | ((vlSelf->__PVT__ram_q
                                                                       [4U] 
                                                                       << 8U) 
                                                                      | vlSelf->__PVT__ram_q
                                                                      [5U]))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__ram_q
                                                                [6U]))))
                                       : ((8U & (IData)(vlSelf->__PVT__rd_ptr_q))
                                           ? (((QData)((IData)(
                                                               ((vlSelf->__PVT__ram_q
                                                                 [1U] 
                                                                 << 0x18U) 
                                                                | ((vlSelf->__PVT__ram_q
                                                                    [2U] 
                                                                    << 0x10U) 
                                                                   | ((vlSelf->__PVT__ram_q
                                                                       [3U] 
                                                                       << 8U) 
                                                                      | vlSelf->__PVT__ram_q
                                                                      [4U]))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__ram_q
                                                                [5U])))
                                           : (((QData)((IData)(
                                                               ((vlSelf->__PVT__ram_q
                                                                 [0U] 
                                                                 << 0x18U) 
                                                                | ((vlSelf->__PVT__ram_q
                                                                    [1U] 
                                                                    << 0x10U) 
                                                                   | ((vlSelf->__PVT__ram_q
                                                                       [2U] 
                                                                       << 8U) 
                                                                      | vlSelf->__PVT__ram_q
                                                                      [3U]))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__ram_q
                                                                [4U]))))));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_bitbuffer___nba_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__1(Vjpeg_core_jpeg_bitbuffer* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer___nba_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__1\n"); );
    // Body
    vlSelf->__PVT__outport_data_o = (IData)((0xffffffffULL 
                                             & ((vlSelf->__PVT__fifo_data_r 
                                                 << 
                                                 (7U 
                                                  & (IData)(vlSelf->__PVT__rd_ptr_q))) 
                                                >> 8U)));
    vlSelf->__PVT__count_q = ((IData)(vlSymsp->TOP.rst_i)
                               ? 0U : ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)
                                        ? 0U : (IData)(vlSelf->__PVT__count_r)));
    vlSelf->__PVT__outport_valid_o = ((0x20U <= (IData)(vlSelf->__PVT__count_q)) 
                                      | ((IData)(vlSelf->__PVT__drain_q) 
                                         & (0U != (IData)(vlSelf->__PVT__count_q))));
}
