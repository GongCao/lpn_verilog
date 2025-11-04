// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_idct.h"

VL_INLINE_OPT void Vjpeg_core_jpeg_idct___nba_sequent__TOP__jpeg_core__u_jpeg_idct__0(Vjpeg_core_jpeg_idct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct___nba_sequent__TOP__jpeg_core__u_jpeg_idct__0\n"); );
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__u_idct_y__DOT__ptr_conv__Vstatic__out_idx;
    __PVT__genblk2__DOT__u_idct_y__DOT__ptr_conv__Vstatic__out_idx = 0;
    CData/*5:0*/ __Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__Vfuncout;
    __Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__Vfuncout = 0;
    CData/*5:0*/ __Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx;
    __Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx = 0;
    IData/*31:0*/ __Vdly__genblk1__DOT__u_idct_x__DOT__o_t5_6;
    __Vdly__genblk1__DOT__u_idct_x__DOT__o_t5_6 = 0;
    IData/*31:0*/ __Vdly__genblk1__DOT__u_idct_x__DOT__o_t0;
    __Vdly__genblk1__DOT__u_idct_x__DOT__o_t0 = 0;
    IData/*31:0*/ __Vdly__genblk1__DOT__u_idct_x__DOT__o_t3;
    __Vdly__genblk1__DOT__u_idct_x__DOT__o_t3 = 0;
    IData/*31:0*/ __Vdly__genblk1__DOT__u_idct_x__DOT__o_t5;
    __Vdly__genblk1__DOT__u_idct_x__DOT__o_t5 = 0;
    CData/*0:0*/ __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v0;
    __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v0 = 0;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v8;
    __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v8 = 0;
    CData/*0:0*/ __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v8;
    __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v8 = 0;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v9;
    __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v9 = 0;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v10;
    __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v10 = 0;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v11;
    __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v11 = 0;
    CData/*0:0*/ __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v11;
    __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v11 = 0;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v12;
    __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v12 = 0;
    CData/*0:0*/ __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v12;
    __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v12 = 0;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v13;
    __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v13 = 0;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v14;
    __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v14 = 0;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v15;
    __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v15 = 0;
    CData/*5:0*/ __Vdly__genblk1__DOT__u_idct_x__DOT__ptr_q;
    __Vdly__genblk1__DOT__u_idct_x__DOT__ptr_q = 0;
    IData/*31:0*/ __Vdly__genblk2__DOT__u_idct_y__DOT__o_t5_6;
    __Vdly__genblk2__DOT__u_idct_y__DOT__o_t5_6 = 0;
    IData/*31:0*/ __Vdly__genblk2__DOT__u_idct_y__DOT__o_t0;
    __Vdly__genblk2__DOT__u_idct_y__DOT__o_t0 = 0;
    IData/*31:0*/ __Vdly__genblk2__DOT__u_idct_y__DOT__o_t3;
    __Vdly__genblk2__DOT__u_idct_y__DOT__o_t3 = 0;
    IData/*31:0*/ __Vdly__genblk2__DOT__u_idct_y__DOT__o_t5;
    __Vdly__genblk2__DOT__u_idct_y__DOT__o_t5 = 0;
    CData/*0:0*/ __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v0;
    __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v0 = 0;
    IData/*31:0*/ __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v8;
    __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v8 = 0;
    CData/*0:0*/ __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v8;
    __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v8 = 0;
    IData/*31:0*/ __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v9;
    __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v9 = 0;
    IData/*31:0*/ __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v10;
    __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v10 = 0;
    IData/*31:0*/ __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v11;
    __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v11 = 0;
    CData/*0:0*/ __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v11;
    __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v11 = 0;
    IData/*31:0*/ __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v12;
    __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v12 = 0;
    CData/*0:0*/ __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v12;
    __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v12 = 0;
    IData/*31:0*/ __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v13;
    __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v13 = 0;
    IData/*31:0*/ __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v14;
    __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v14 = 0;
    IData/*31:0*/ __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v15;
    __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v15 = 0;
    CData/*5:0*/ __Vdly__genblk2__DOT__u_idct_y__DOT__ptr_q;
    __Vdly__genblk2__DOT__u_idct_y__DOT__ptr_q = 0;
    // Body
    __Vdly__genblk1__DOT__u_idct_x__DOT__ptr_q = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__ptr_q;
    __Vdly__genblk2__DOT__u_idct_y__DOT__ptr_q = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__ptr_q;
    __Vdly__genblk2__DOT__u_idct_y__DOT__o_t5_6 = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t5_6;
    __Vdly__genblk1__DOT__u_idct_x__DOT__o_t5_6 = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t5_6;
    __Vdly__genblk2__DOT__u_idct_y__DOT__o_t5 = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t5;
    __Vdly__genblk2__DOT__u_idct_y__DOT__o_t3 = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t3;
    __Vdly__genblk2__DOT__u_idct_y__DOT__o_t0 = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t0;
    __Vdly__genblk1__DOT__u_idct_x__DOT__o_t5 = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t5;
    __Vdly__genblk1__DOT__u_idct_x__DOT__o_t3 = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t3;
    __Vdly__genblk1__DOT__u_idct_x__DOT__o_t0 = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t0;
    __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v0 = 0U;
    __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v8 = 0U;
    __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v11 = 0U;
    __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v12 = 0U;
    __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v0 = 0U;
    __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v8 = 0U;
    __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v11 = 0U;
    __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v12 = 0U;
    if (vlSymsp->TOP.rst_i) {
        __Vdly__genblk1__DOT__u_idct_x__DOT__ptr_q = 0U;
        __Vdly__genblk2__DOT__u_idct_y__DOT__ptr_q = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__valid_q = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__valid_q = 0U;
        __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v0 = 1U;
        __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v0 = 1U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out_tmp = 0U;
        __Vdly__genblk2__DOT__u_idct_y__DOT__o_t0 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t1 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t2 = 0U;
        __Vdly__genblk2__DOT__u_idct_y__DOT__o_t3 = 0U;
        __Vdly__genblk2__DOT__u_idct_y__DOT__o_t5 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out_tmp = 0U;
        __Vdly__genblk1__DOT__u_idct_x__DOT__o_t0 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t1 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t2 = 0U;
        __Vdly__genblk1__DOT__u_idct_x__DOT__o_t3 = 0U;
        __Vdly__genblk1__DOT__u_idct_x__DOT__o_t5 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg3_idx_q = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t4 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s5 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg3_idx_q = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t4 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s5 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t6_5 = 0U;
        __Vdly__genblk2__DOT__u_idct_y__DOT__o_t5_6 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t6_5 = 0U;
        __Vdly__genblk1__DOT__u_idct_x__DOT__o_t5_6 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4_q = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t6 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t7 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4_q = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t6 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t7 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4_b = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4_a = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s6 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s7 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4_b = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4_a = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s7 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s6 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__i0 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__i0 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2 = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3 = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_q = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_q = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg1_idx_q = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_q = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_q = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_q = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_q = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg1_idx_q = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_q = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_q = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_b = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_a = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_b = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_a = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg0_idx_q = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_b = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_a = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_b = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_a = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_b = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_a = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_b = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_a = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg0_idx_q = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_b = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_a = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_b = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_a = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__genblk1__DOT__u_idct_x__DOT__ptr_q = 0U;
            __Vdly__genblk2__DOT__u_idct_y__DOT__ptr_q = 0U;
            vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__valid_q = 0U;
            vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__valid_q = 0U;
        } else {
            if ((0x40U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__valid_q))) {
                __Vdly__genblk1__DOT__u_idct_x__DOT__ptr_q 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__ptr_q)));
            }
            if ((0x40U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__valid_q))) {
                __Vdly__genblk2__DOT__u_idct_y__DOT__ptr_q 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__ptr_q)));
            }
            vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__valid_q 
                = ((0xfeU & ((IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__valid_q) 
                             << 1U)) | (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg3_valid_q));
            vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__valid_q 
                = ((0xfeU & ((IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__valid_q) 
                             << 1U)) | (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg3_valid_q));
        }
        if (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg3_valid_q) {
            if ((6U == (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg3_idx_q))) {
                __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v11 
                    = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out_tmp;
                __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v11 = 1U;
            }
            if ((3U == (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg3_idx_q))) {
                __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v8 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t0 
                                                + vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t7), 0xfU);
                __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v8 = 1U;
                __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v9 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t3 
                                                + vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t4), 0xfU);
                __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v10 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t3 
                                                - vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t4), 0xfU);
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out_tmp 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t0 
                                                - vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t7), 0xfU);
            }
            if ((7U == (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg3_idx_q))) {
                __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v12 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t2 
                                                + vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s5), 0xfU);
                __Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v12 = 1U;
                __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v13 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t2 
                                                - vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s5), 0xfU);
                __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v14 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t1 
                                                + vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s6), 0xfU);
                __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v15 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t1 
                                                - vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s6), 0xfU);
            }
        }
        if (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg3_valid_q) {
            if ((6U == (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg3_idx_q))) {
                __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v11 
                    = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out_tmp;
                __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v11 = 1U;
            }
            if ((3U == (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg3_idx_q))) {
                __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v8 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t0 
                                                + vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t7), 0xbU);
                __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v8 = 1U;
                __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v9 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t3 
                                                + vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t4), 0xbU);
                __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v10 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t3 
                                                - vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t4), 0xbU);
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out_tmp 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t0 
                                                - vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t7), 0xbU);
            }
            if ((7U == (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg3_idx_q))) {
                __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v12 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t2 
                                                + vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s5), 0xbU);
                __Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v12 = 1U;
                __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v13 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t2 
                                                - vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s5), 0xbU);
                __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v14 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t1 
                                                + vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s6), 0xbU);
                __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v15 
                    = VL_SHIFTRS_III(32,32,32, (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t1 
                                                - vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s6), 0xbU);
            }
        }
        if ((4U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q))) {
            if ((2U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q)))) {
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t1 
                        = (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t4 
                           + vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t3);
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t2 
                        = (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t4 
                           - vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t3);
                }
            } else if ((1U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q))) {
                __Vdly__genblk2__DOT__u_idct_y__DOT__o_t3 
                    = (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0 
                       - vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1);
                __Vdly__genblk2__DOT__u_idct_y__DOT__o_t5 
                    = (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t0 
                       - vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s5);
            } else {
                __Vdly__genblk2__DOT__u_idct_y__DOT__o_t0 
                    = (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0 
                       - vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1);
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q))) {
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t4 
                        = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4;
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q))) {
                if ((1U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q))) {
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s5 
                        = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xb5U), vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t6_5), (IData)(0x100U));
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q)))) {
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t6_5 
                        = (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t6 
                           - vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t5);
                    __Vdly__genblk2__DOT__u_idct_y__DOT__o_t5_6 
                        = (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t5 
                           + vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t6);
                }
            } else if ((1U & (~ (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q)))) {
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s5 
                    = (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2 
                       - vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3);
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q))) {
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t6 
                        = (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s7 
                           - vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s6);
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q))) {
                if ((1U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q))) {
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s6 
                        = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xb5U), vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t5_6), (IData)(0x100U));
                }
            }
        } else {
            if ((2U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q)))) {
                    __Vdly__genblk2__DOT__u_idct_y__DOT__o_t0 
                        = (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t0 
                           + vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t3);
                    __Vdly__genblk2__DOT__u_idct_y__DOT__o_t3 
                        = (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t0 
                           - vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t3);
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t7 
                        = (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s6 
                           + vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s7);
                }
                if ((1U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q))) {
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t4 
                        = ((vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0 
                            - vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1) 
                           + (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2 
                              - vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3));
                }
            } else if ((1U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q))) {
                __Vdly__genblk2__DOT__u_idct_y__DOT__o_t0 
                    = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4;
            } else {
                __Vdly__genblk2__DOT__u_idct_y__DOT__o_t3 
                    = (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0 
                       + vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1);
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q))) {
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s6 
                        = (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2 
                           + vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3);
                }
            }
        }
        if ((4U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q))) {
            if ((2U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q)))) {
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t1 
                        = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t4 
                           + vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t3);
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t2 
                        = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t4 
                           - vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t3);
                }
            } else if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q))) {
                __Vdly__genblk1__DOT__u_idct_x__DOT__o_t3 
                    = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0 
                       - vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1);
                __Vdly__genblk1__DOT__u_idct_x__DOT__o_t5 
                    = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t0 
                       - vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s5);
            } else {
                __Vdly__genblk1__DOT__u_idct_x__DOT__o_t0 
                    = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0 
                       - vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1);
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q))) {
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t4 
                        = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4;
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q))) {
                if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q))) {
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s5 
                        = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xb5U), vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t6_5), (IData)(0x100U));
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q)))) {
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t6_5 
                        = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t6 
                           - vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t5);
                    __Vdly__genblk1__DOT__u_idct_x__DOT__o_t5_6 
                        = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t5 
                           + vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t6);
                }
            } else if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q)))) {
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s5 
                    = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2 
                       - vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3);
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q))) {
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t6 
                        = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s7 
                           - vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s6);
                }
            }
            if ((2U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q))) {
                if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q))) {
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s6 
                        = VL_DIVS_III(32, VL_MULS_III(32, (IData)(0xb5U), vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t5_6), (IData)(0x100U));
                }
            }
        } else {
            if ((2U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q)))) {
                    __Vdly__genblk1__DOT__u_idct_x__DOT__o_t0 
                        = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t0 
                           + vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t3);
                    __Vdly__genblk1__DOT__u_idct_x__DOT__o_t3 
                        = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t0 
                           - vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t3);
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t7 
                        = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s6 
                           + vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s7);
                }
                if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q))) {
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t4 
                        = ((vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0 
                            - vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1) 
                           + (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2 
                              - vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3));
                }
            } else if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q))) {
                __Vdly__genblk1__DOT__u_idct_x__DOT__o_t0 
                    = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4;
            } else {
                __Vdly__genblk1__DOT__u_idct_x__DOT__o_t3 
                    = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0 
                       + vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1);
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q))) {
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s6 
                        = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2 
                           + vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3);
                }
            }
        }
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg3_idx_q 
            = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg3_idx_q 
            = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4 
            = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4_q;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4 
            = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4_q;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4_q 
            = VL_MULS_III(32, vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4_a, vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4_b);
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4_q 
            = VL_MULS_III(32, vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4_a, vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4_b);
        if ((1U & (~ ((IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q))) {
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_s7 
                        = (vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0 
                           + vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1);
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q))) {
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_s7 
                        = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0 
                           + vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1);
                }
            }
        }
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4_b = 0xb50U;
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4_a 
                        = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__i0;
                }
            }
        } else if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q) 
                             >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4_b = 0xb50U;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul4_a 
                    = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__i0;
            }
        }
        if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q)))) {
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__i0 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.__PVT__ram_read1_q 
                           - vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.__PVT__ram_read1_q);
                }
            } else if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q)))) {
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__i0 
                    = (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.__PVT__ram_read1_q 
                       + vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.__PVT__ram_read1_q);
            }
        }
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2 
            = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_q;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3 
            = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_q;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_idx_q 
            = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg1_idx_q;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1 
            = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_q;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0 
            = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_q;
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4_b = 0xb50U;
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4_a 
                        = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__i0;
                }
            }
        } else if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q) 
                             >> 1U)))) {
            if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4_b = 0xb50U;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul4_a 
                    = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__i0;
            }
        }
        if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__i0 
                        = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_0_1 
                           - vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_4_5);
                }
            } else if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__i0 
                    = (vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_0_1 
                       + vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_4_5);
            }
        }
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1 
            = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_q;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0 
            = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_q;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_idx_q 
            = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg1_idx_q;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2 
            = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_q;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3 
            = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_q;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_q 
            = VL_MULS_III(32, vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_a, vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_b);
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_q 
            = VL_MULS_III(32, vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_a, vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_b);
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg1_idx_q 
            = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg0_idx_q;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_q 
            = VL_MULS_III(32, vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_a, vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_b);
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_q 
            = VL_MULS_III(32, vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_a, vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_b);
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q)))) {
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_b = 0xd4eU;
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_a 
                        = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.__PVT__ram_read1_q;
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_b = 0x8e4U;
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_a 
                        = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.__PVT__ram_read1_q;
                }
                if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_b = 0xec8U;
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_b = 0x61fU;
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_a 
                        = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.__PVT__ram_read1_q;
                } else {
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_b = 0xfb1U;
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_b = 0x31fU;
                    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_a 
                        = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.__PVT__ram_read1_q;
                }
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_a 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.__PVT__ram_read1_q;
            }
        } else if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
            if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_b = 0xd4eU;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_a 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.__PVT__ram_read1_q;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_b = 0x8e4U;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_a 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.__PVT__ram_read1_q;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_b = 0xfb1U;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_a 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.__PVT__ram_read1_q;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_b = 0x31fU;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_a 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.__PVT__ram_read1_q;
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_b = 0x8e4U;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul2_a 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.__PVT__ram_read1_q;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_b = 0xd4eU;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul3_a 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.__PVT__ram_read1_q;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_b = 0x31fU;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_b = 0xfb1U;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_a 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.__PVT__ram_read1_q;
            } else {
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_b = 0x61fU;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_b = 0xec8U;
                vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul0_a 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.__PVT__ram_read1_q;
            }
            vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__mul1_a 
                = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.__PVT__ram_read1_q;
        }
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_q 
            = VL_MULS_III(32, vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_a, vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_b);
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_q 
            = VL_MULS_III(32, vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_a, vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_b);
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg1_idx_q 
            = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg0_idx_q;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_q 
            = VL_MULS_III(32, vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_a, vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_b);
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_q 
            = VL_MULS_III(32, vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_a, vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_b);
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_b = 0xec8U;
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_b = 0x61fU;
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_a 
                        = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_2_3;
                } else {
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_b = 0xfb1U;
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_b = 0x31fU;
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_a 
                        = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_0_1;
                }
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_a 
                    = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_6_7;
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_b = 0xd4eU;
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_a 
                        = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_4_5;
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_b = 0x8e4U;
                    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_a 
                        = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_2_3;
                }
            }
        } else if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
            if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_b = 0xfb1U;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_a 
                    = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_6_7;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_b = 0x31fU;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_a 
                    = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_0_1;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_b = 0xd4eU;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_a 
                    = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_4_5;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_b = 0x8e4U;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_a 
                    = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_2_3;
            }
        } else {
            if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_b = 0x31fU;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_b = 0xfb1U;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_a 
                    = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_0_1;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_b = 0x8e4U;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul2_a 
                    = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_4_5;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_b = 0xd4eU;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul3_a 
                    = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_2_3;
            } else {
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_b = 0x61fU;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_b = 0xec8U;
                vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul0_a 
                    = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_2_3;
            }
            vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__mul1_a 
                = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_6_7;
        }
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg0_idx_q 
            = (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q));
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg0_idx_q 
            = (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q));
    }
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__ptr_q 
        = __Vdly__genblk1__DOT__u_idct_x__DOT__ptr_q;
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__ptr_q 
        = __Vdly__genblk2__DOT__u_idct_y__DOT__ptr_q;
    if (__Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v0) {
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[0U] = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[1U] = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[2U] = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[3U] = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[4U] = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[5U] = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[6U] = 0U;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[7U] = 0U;
    }
    if (__Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v8) {
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[0U] 
            = __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v8;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[3U] 
            = __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v9;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[4U] 
            = __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v10;
    }
    if (__Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v11) {
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[7U] 
            = __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v11;
    }
    if (__Vdlyvset__genblk2__DOT__u_idct_y__DOT__block_out__v12) {
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[2U] 
            = __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v12;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[5U] 
            = __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v13;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[1U] 
            = __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v14;
        vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out[6U] 
            = __Vdlyvval__genblk2__DOT__u_idct_y__DOT__block_out__v15;
    }
    if (__Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v0) {
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[0U] = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[1U] = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[2U] = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[3U] = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[4U] = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[5U] = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[6U] = 0U;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[7U] = 0U;
    }
    if (__Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v8) {
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[0U] 
            = __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v8;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[3U] 
            = __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v9;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[4U] 
            = __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v10;
    }
    if (__Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v11) {
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[7U] 
            = __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v11;
    }
    if (__Vdlyvset__genblk1__DOT__u_idct_x__DOT__block_out__v12) {
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[2U] 
            = __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v12;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[5U] 
            = __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v13;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[1U] 
            = __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v14;
        vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out[6U] 
            = __Vdlyvval__genblk1__DOT__u_idct_x__DOT__block_out__v15;
    }
    __Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx 
        = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__ptr_q;
    __PVT__genblk2__DOT__u_idct_y__DOT__ptr_conv__Vstatic__out_idx 
        = ((0x20U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
            ? ((0x10U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                ? ((8U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x3fU : 0x37U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x2fU : 0x27U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1fU
                                                    : 0x17U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0xfU
                                                    : 7U)))
                    : ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x3eU : 0x36U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x2eU : 0x26U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1eU
                                                    : 0x16U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0xeU
                                                    : 6U))))
                : ((8U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x3dU : 0x35U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x2dU : 0x25U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1dU
                                                    : 0x15U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0xdU
                                                    : 5U)))
                    : ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x3cU : 0x34U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x2cU : 0x24U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1cU
                                                    : 0x14U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0xcU
                                                    : 4U)))))
            : ((0x10U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                ? ((8U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x3bU : 0x33U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x2bU : 0x23U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1bU
                                                    : 0x13U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0xbU
                                                    : 3U)))
                    : ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x3aU : 0x32U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x2aU : 0x22U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1aU
                                                    : 0x12U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0xaU
                                                    : 2U))))
                : ((8U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x39U : 0x31U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x29U : 0x21U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x19U
                                                    : 0x11U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 9U
                                                    : 1U)))
                    : ((4U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                ? 0x38U : 0x30U) : 
                           ((1U & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                             ? 0x28U : 0x20U)) : ((2U 
                                                   & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 0x18U
                                                    : 0x10U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(__Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__idx))
                                                    ? 8U
                                                    : 0U))))));
    __Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__Vfuncout 
        = __PVT__genblk2__DOT__u_idct_y__DOT__ptr_conv__Vstatic__out_idx;
    vlSelf->__PVT__outport_idx_o = __Vfunc_genblk2__DOT__u_idct_y__DOT__ptr_conv__0__Vfuncout;
    vlSelf->__PVT__outport_data_o = vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__block_out
        [(7U & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__ptr_q))];
    vlSelf->__PVT__idct_x_data_w = vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_out
        [(7U & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__ptr_q))];
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t3 
        = __Vdly__genblk2__DOT__u_idct_y__DOT__o_t3;
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t0 
        = __Vdly__genblk2__DOT__u_idct_y__DOT__o_t0;
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t3 
        = __Vdly__genblk1__DOT__u_idct_x__DOT__o_t3;
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t0 
        = __Vdly__genblk1__DOT__u_idct_x__DOT__o_t0;
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg3_valid_q 
        = ((~ (IData)(vlSymsp->TOP.rst_i)) & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_valid_q));
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg3_valid_q 
        = ((~ (IData)(vlSymsp->TOP.rst_i)) & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_valid_q));
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg2_valid_q 
        = ((~ (IData)(vlSymsp->TOP.rst_i)) & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg1_valid_q));
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg2_valid_q 
        = ((~ (IData)(vlSymsp->TOP.rst_i)) & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg1_valid_q));
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t5 
        = __Vdly__genblk2__DOT__u_idct_y__DOT__o_t5;
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t5 
        = __Vdly__genblk1__DOT__u_idct_x__DOT__o_t5;
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg1_valid_q 
        = ((~ (IData)(vlSymsp->TOP.rst_i)) & (IData)(vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg0_valid_q));
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg1_valid_q 
        = ((~ (IData)(vlSymsp->TOP.rst_i)) & (IData)(vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg0_valid_q));
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__out_stg0_valid_q 
        = ((~ (IData)(vlSymsp->TOP.rst_i)) & (2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__state_q)));
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__out_stg0_valid_q 
        = ((~ (IData)(vlSymsp->TOP.rst_i)) & (2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q)));
    vlSelf->__PVT__genblk2__DOT__u_idct_y__DOT__o_t5_6 
        = __Vdly__genblk2__DOT__u_idct_y__DOT__o_t5_6;
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__o_t5_6 
        = __Vdly__genblk1__DOT__u_idct_x__DOT__o_t5_6;
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_6_7 
        = (((- (IData)((1U & (((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val3_q))) 
                               & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read1_q)) 
                              >> 0xfU)))) << 0x10U) 
           | ((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val3_q))) 
              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read1_q)));
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_0_1 
        = (((- (IData)((1U & (((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val0_q))) 
                               & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read1_q)) 
                              >> 0xfU)))) << 0x10U) 
           | ((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val0_q))) 
              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read1_q)));
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_4_5 
        = (((- (IData)((1U & (((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val2_q))) 
                               & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read1_q)) 
                              >> 0xfU)))) << 0x10U) 
           | ((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val2_q))) 
              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read1_q)));
    vlSelf->__PVT__genblk1__DOT__u_idct_x__DOT__block_in_2_3 
        = (((- (IData)((1U & (((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val1_q))) 
                               & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read1_q)) 
                              >> 0xfU)))) << 0x10U) 
           | ((- (IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val1_q))) 
              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read1_q)));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct___nba_sequent__TOP__jpeg_core__u_jpeg_idct__1(Vjpeg_core_jpeg_idct* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct___nba_sequent__TOP__jpeg_core__u_jpeg_idct__1\n"); );
    // Init
    CData/*2:0*/ __Vdly__u_id_fifo__DOT__wr_ptr_q;
    __Vdly__u_id_fifo__DOT__wr_ptr_q = 0;
    CData/*2:0*/ __Vdlyvdim0__u_id_fifo__DOT__ram_q__v0;
    __Vdlyvdim0__u_id_fifo__DOT__ram_q__v0 = 0;
    IData/*31:0*/ __Vdlyvval__u_id_fifo__DOT__ram_q__v0;
    __Vdlyvval__u_id_fifo__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_id_fifo__DOT__ram_q__v0;
    __Vdlyvset__u_id_fifo__DOT__ram_q__v0 = 0;
    CData/*2:0*/ __Vdly__u_id_fifo__DOT__rd_ptr_q;
    __Vdly__u_id_fifo__DOT__rd_ptr_q = 0;
    CData/*3:0*/ __Vdly__u_id_fifo__DOT__count_q;
    __Vdly__u_id_fifo__DOT__count_q = 0;
    // Body
    __Vdly__u_id_fifo__DOT__rd_ptr_q = vlSelf->__PVT__u_id_fifo__DOT__rd_ptr_q;
    __Vdly__u_id_fifo__DOT__count_q = vlSelf->__PVT__u_id_fifo__DOT__count_q;
    __Vdly__u_id_fifo__DOT__wr_ptr_q = vlSelf->__PVT__u_id_fifo__DOT__wr_ptr_q;
    __Vdlyvset__u_id_fifo__DOT__ram_q__v0 = 0U;
    if (vlSymsp->TOP.rst_i) {
        __Vdly__u_id_fifo__DOT__rd_ptr_q = 0U;
        __Vdly__u_id_fifo__DOT__count_q = 0U;
        __Vdly__u_id_fifo__DOT__wr_ptr_q = 0U;
    } else if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
        __Vdly__u_id_fifo__DOT__rd_ptr_q = 0U;
        __Vdly__u_id_fifo__DOT__count_q = 0U;
        __Vdly__u_id_fifo__DOT__wr_ptr_q = 0U;
    } else {
        if (((IData)(vlSelf->__Vcellinp__u_id_fifo__pop_i) 
             & (0U != (IData)(vlSelf->__PVT__u_id_fifo__DOT__count_q)))) {
            __Vdly__u_id_fifo__DOT__rd_ptr_q = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_id_fifo__DOT__rd_ptr_q)));
        }
        if ((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q) 
              & (IData)(vlSelf->__PVT__u_id_fifo__DOT__accept_o)) 
             & (~ ((IData)(vlSelf->__Vcellinp__u_id_fifo__pop_i) 
                   & (IData)(vlSelf->__PVT__u_id_fifo__DOT__valid_o))))) {
            __Vdly__u_id_fifo__DOT__count_q = (0xfU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__u_id_fifo__DOT__count_q)));
        } else if (((~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q) 
                        & (IData)(vlSelf->__PVT__u_id_fifo__DOT__accept_o))) 
                    & ((IData)(vlSelf->__Vcellinp__u_id_fifo__pop_i) 
                       & (IData)(vlSelf->__PVT__u_id_fifo__DOT__valid_o)))) {
            __Vdly__u_id_fifo__DOT__count_q = (0xfU 
                                               & ((IData)(vlSelf->__PVT__u_id_fifo__DOT__count_q) 
                                                  - (IData)(1U)));
        }
        if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q) 
             & (8U != (IData)(vlSelf->__PVT__u_id_fifo__DOT__count_q)))) {
            __Vdlyvval__u_id_fifo__DOT__ram_q__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_id_q;
            __Vdlyvset__u_id_fifo__DOT__ram_q__v0 = 1U;
            __Vdlyvdim0__u_id_fifo__DOT__ram_q__v0 
                = vlSelf->__PVT__u_id_fifo__DOT__wr_ptr_q;
            __Vdly__u_id_fifo__DOT__wr_ptr_q = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__u_id_fifo__DOT__wr_ptr_q)));
        }
    }
    vlSelf->__PVT__u_id_fifo__DOT__rd_ptr_q = __Vdly__u_id_fifo__DOT__rd_ptr_q;
    vlSelf->__PVT__u_id_fifo__DOT__wr_ptr_q = __Vdly__u_id_fifo__DOT__wr_ptr_q;
    vlSelf->__PVT__u_id_fifo__DOT__count_q = __Vdly__u_id_fifo__DOT__count_q;
    if (__Vdlyvset__u_id_fifo__DOT__ram_q__v0) {
        vlSelf->__PVT__u_id_fifo__DOT__ram_q[__Vdlyvdim0__u_id_fifo__DOT__ram_q__v0] 
            = __Vdlyvval__u_id_fifo__DOT__ram_q__v0;
    }
    vlSelf->__PVT__u_id_fifo__DOT__accept_o = (8U != (IData)(vlSelf->__PVT__u_id_fifo__DOT__count_q));
    vlSelf->__PVT__u_id_fifo__DOT__valid_o = (0U != (IData)(vlSelf->__PVT__u_id_fifo__DOT__count_q));
    vlSelf->__PVT__outport_id_o = vlSelf->__PVT__u_id_fifo__DOT__ram_q
        [vlSelf->__PVT__u_id_fifo__DOT__rd_ptr_q];
}
