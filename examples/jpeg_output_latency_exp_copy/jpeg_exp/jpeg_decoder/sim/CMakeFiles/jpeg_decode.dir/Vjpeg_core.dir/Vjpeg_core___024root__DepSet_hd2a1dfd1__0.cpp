// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core___024root.h"

void Vjpeg_core___024root___eval_act(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___eval_act\n"); );
}

void Vjpeg_core___024root___eval_triggers__ico(Vjpeg_core___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vjpeg_core___024root___dump_triggers__ico(Vjpeg_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vjpeg_core___024root___eval_ico(Vjpeg_core___024root* vlSelf);
void Vjpeg_core___024root___eval_triggers__act(Vjpeg_core___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vjpeg_core___024root___dump_triggers__act(Vjpeg_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vjpeg_core___024root___dump_triggers__nba(Vjpeg_core___024root* vlSelf);
#endif  // VL_DEBUG
void Vjpeg_core___024root___eval_nba(Vjpeg_core___024root* vlSelf);

void Vjpeg_core___024root___eval(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vjpeg_core___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vjpeg_core___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("../src_v/../src_v/jpeg_core.v", 140, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vjpeg_core___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vjpeg_core___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vjpeg_core___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../src_v/../src_v/jpeg_core.v", 140, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vjpeg_core___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vjpeg_core___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../src_v/../src_v/jpeg_core.v", 140, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vjpeg_core___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vjpeg_core___024root___eval_debug_assertions(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_i & 0xfeU))) {
        Verilated::overWidthError("rst_i");}
    if (VL_UNLIKELY((vlSelf->inport_valid_i & 0xfeU))) {
        Verilated::overWidthError("inport_valid_i");}
    if (VL_UNLIKELY((vlSelf->inport_strb_i & 0xf0U))) {
        Verilated::overWidthError("inport_strb_i");}
    if (VL_UNLIKELY((vlSelf->inport_last_i & 0xfeU))) {
        Verilated::overWidthError("inport_last_i");}
    if (VL_UNLIKELY((vlSelf->outport_accept_i & 0xfeU))) {
        Verilated::overWidthError("outport_accept_i");}
}
#endif  // VL_DEBUG
