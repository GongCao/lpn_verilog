// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_dqt.h"

VL_INLINE_OPT void Vjpeg_core_jpeg_dqt___ico_sequent__TOP__jpeg_core__u_jpeg_dqt__0(Vjpeg_core_jpeg_dqt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt___ico_sequent__TOP__jpeg_core__u_jpeg_dqt__0\n"); );
    // Body
    vlSelf->__PVT__dqt_write_w = ((IData)(vlSymsp->TOP__jpeg_core.__PVT__dqt_cfg_valid_w) 
                                  & (0xffU != (IData)(vlSelf->__PVT__idx_q)));
    vlSelf->__PVT__dqt_table_addr_w = ((IData)(vlSelf->__PVT__dqt_write_w)
                                        ? (((IData)(vlSelf->__PVT__cfg_table_q) 
                                            << 6U) 
                                           | (0x3fU 
                                              & (IData)(vlSelf->__PVT__idx_q)))
                                        : ((vlSelf->__PVT__table_src_w
                                            [(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_id_o 
                                              >> 0x1eU)] 
                                            << 6U) 
                                           | (0x3fU 
                                              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q))));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_dqt___nba_sequent__TOP__jpeg_core__u_jpeg_dqt__0(Vjpeg_core_jpeg_dqt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt___nba_sequent__TOP__jpeg_core__u_jpeg_dqt__0\n"); );
    // Init
    CData/*5:0*/ __PVT__dezigzag__Vstatic__out_idx;
    __PVT__dezigzag__Vstatic__out_idx = 0;
    CData/*5:0*/ __Vfunc_dezigzag__0__Vfuncout;
    __Vfunc_dezigzag__0__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_dezigzag__0__idx;
    __Vfunc_dezigzag__0__idx = 0;
    CData/*7:0*/ __Vdly__idx_q;
    __Vdly__idx_q = 0;
    CData/*7:0*/ __Vdlyvdim0__table_dqt_q__v0;
    __Vdlyvdim0__table_dqt_q__v0 = 0;
    CData/*7:0*/ __Vdlyvval__table_dqt_q__v0;
    __Vdlyvval__table_dqt_q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__table_dqt_q__v0;
    __Vdlyvset__table_dqt_q__v0 = 0;
    // Body
    __Vdlyvset__table_dqt_q__v0 = 0U;
    __Vdly__idx_q = vlSelf->__PVT__idx_q;
    if (vlSelf->__PVT__dqt_write_w) {
        __Vdlyvval__table_dqt_q__v0 = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r;
        __Vdlyvset__table_dqt_q__v0 = 1U;
        __Vdlyvdim0__table_dqt_q__v0 = vlSelf->__PVT__dqt_table_addr_w;
    }
    __Vfunc_dezigzag__0__idx = vlSelf->__PVT__inport_idx_q;
    __PVT__dezigzag__Vstatic__out_idx = ((0x20U & (IData)(__Vfunc_dezigzag__0__idx))
                                          ? ((0x10U 
                                              & (IData)(__Vfunc_dezigzag__0__idx))
                                              ? ((8U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x3fU
                                                     : 0x3eU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x37U
                                                     : 0x2fU))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x36U
                                                     : 0x3dU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x3cU
                                                     : 0x35U)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x2eU
                                                     : 0x27U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x1fU
                                                     : 0x26U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x2dU
                                                     : 0x34U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x3bU
                                                     : 0x3aU))))
                                              : ((8U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x33U
                                                     : 0x2cU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x25U
                                                     : 0x1eU))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x17U
                                                     : 0xfU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x16U
                                                     : 0x1dU)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x24U
                                                     : 0x2bU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x32U
                                                     : 0x39U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x38U
                                                     : 0x31U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x2aU
                                                     : 0x23U)))))
                                          : ((0x10U 
                                              & (IData)(__Vfunc_dezigzag__0__idx))
                                              ? ((8U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x1cU
                                                     : 0x15U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0xeU
                                                     : 7U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 6U
                                                     : 0xdU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x14U
                                                     : 0x1bU)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x22U
                                                     : 0x29U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x30U
                                                     : 0x28U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x21U
                                                     : 0x1aU)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x13U
                                                     : 0xcU))))
                                              : ((8U 
                                                  & (IData)(__Vfunc_dezigzag__0__idx))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 5U
                                                     : 4U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0xbU
                                                     : 0x12U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x19U
                                                     : 0x20U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x18U
                                                     : 0x11U)))
                                                  : 
                                                 ((4U 
                                                   & (IData)(__Vfunc_dezigzag__0__idx))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0xaU
                                                     : 3U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 2U
                                                     : 9U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_dezigzag__0__idx))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 0x10U
                                                     : 8U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_dezigzag__0__idx))
                                                     ? 1U
                                                     : 0U))))));
    __Vfunc_dezigzag__0__Vfuncout = __PVT__dezigzag__Vstatic__out_idx;
    if (vlSymsp->TOP.rst_i) {
        __Vdly__idx_q = 0xffU;
        vlSelf->__PVT__cfg_table_q = 0U;
        vlSelf->__PVT__outport_idx_q = 0U;
        vlSelf->__PVT__outport_data_q = 0U;
        vlSelf->__PVT__inport_idx_q = 0U;
        vlSelf->__PVT__inport_data_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP__jpeg_core.__PVT__dqt_cfg_valid_w) 
             & ((IData)(vlSymsp->TOP.inport_last_i) 
                | (1U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__length_q))))) {
            __Vdly__idx_q = 0xffU;
        } else if (vlSymsp->TOP__jpeg_core.__PVT__dqt_cfg_valid_w) {
            __Vdly__idx_q = (0xffU & ((IData)(1U) + (IData)(vlSelf->__PVT__idx_q)));
        }
        if (((IData)(vlSymsp->TOP__jpeg_core.__PVT__dqt_cfg_valid_w) 
             & (0xffU == (IData)(vlSelf->__PVT__idx_q)))) {
            vlSelf->__PVT__cfg_table_q = (3U & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r));
        }
        vlSelf->__PVT__outport_idx_q = __Vfunc_dezigzag__0__Vfuncout;
        vlSelf->__PVT__outport_data_q = (0xffffU & 
                                         ((IData)(vlSelf->__PVT__inport_data_q) 
                                          * (IData)(vlSelf->__PVT__dqt_entry_q)));
        vlSelf->__PVT__inport_idx_q = (0x3fU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q));
        vlSelf->__PVT__inport_data_q = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_q;
    }
    vlSelf->__PVT__outport_valid_q = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                      & ((IData)(vlSelf->__PVT__inport_valid_q) 
                                         & (~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q))));
    vlSelf->__PVT__idx_q = __Vdly__idx_q;
    vlSelf->__PVT__inport_valid_q = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                     & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_valid_o) 
                                        & (~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q))));
    vlSelf->__PVT__dqt_entry_q = vlSelf->__PVT__table_dqt_q
        [vlSelf->__PVT__dqt_table_addr_w];
    if (__Vdlyvset__table_dqt_q__v0) {
        vlSelf->__PVT__table_dqt_q[__Vdlyvdim0__table_dqt_q__v0] 
            = __Vdlyvval__table_dqt_q__v0;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_dqt___nba_sequent__TOP__jpeg_core__u_jpeg_dqt__1(Vjpeg_core_jpeg_dqt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt___nba_sequent__TOP__jpeg_core__u_jpeg_dqt__1\n"); );
    // Body
    vlSelf->__PVT__table_src_w[2U] = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cr_dqt_table_q;
    vlSelf->__PVT__table_src_w[1U] = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cb_dqt_table_q;
    vlSelf->__PVT__table_src_w[0U] = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_y_dqt_table_q;
}

VL_INLINE_OPT void Vjpeg_core_jpeg_dqt___nba_sequent__TOP__jpeg_core__u_jpeg_dqt__2(Vjpeg_core_jpeg_dqt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_dqt___nba_sequent__TOP__jpeg_core__u_jpeg_dqt__2\n"); );
    // Body
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__outport_id_q = 0U;
        vlSelf->__PVT__inport_id_q = 0U;
    } else {
        vlSelf->__PVT__outport_id_q = vlSelf->__PVT__inport_id_q;
        if (vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_valid_o) {
            vlSelf->__PVT__inport_id_q = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_id_o;
        }
    }
    vlSelf->__PVT__outport_eob_q = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                    & (IData)(vlSelf->__PVT__inport_eob_q));
    vlSelf->__PVT__inport_eob_q = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                   & ((4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
                                      | ((5U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
                                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__push_q))));
}
