// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core___024root.h"

VL_ATTR_COLD void Vjpeg_core___024root___eval_static(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vjpeg_core___024root___eval_final(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vjpeg_core___024root___eval_triggers__stl(Vjpeg_core___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vjpeg_core___024root___dump_triggers__stl(Vjpeg_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vjpeg_core___024root___eval_stl(Vjpeg_core___024root* vlSelf);

VL_ATTR_COLD void Vjpeg_core___024root___eval_settle(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vjpeg_core___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vjpeg_core___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../src_v/../src_v/jpeg_core.v", 159, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vjpeg_core___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjpeg_core___024root___dump_triggers__stl(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjpeg_core___024root___dump_triggers__ico(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjpeg_core___024root___dump_triggers__act(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk_i or posedge rst_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjpeg_core___024root___dump_triggers__nba(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk_i or posedge rst_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vjpeg_core___024root___ctor_var_reset(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->inport_valid_i = VL_RAND_RESET_I(1);
    vlSelf->inport_data_i = VL_RAND_RESET_I(32);
    vlSelf->inport_strb_i = VL_RAND_RESET_I(4);
    vlSelf->inport_last_i = VL_RAND_RESET_I(1);
    vlSelf->outport_accept_i = VL_RAND_RESET_I(1);
    vlSelf->inport_accept_o = VL_RAND_RESET_I(1);
    vlSelf->outport_valid_o = VL_RAND_RESET_I(1);
    vlSelf->outport_width_o = VL_RAND_RESET_I(16);
    vlSelf->outport_height_o = VL_RAND_RESET_I(16);
    vlSelf->outport_pixel_x_o = VL_RAND_RESET_I(16);
    vlSelf->outport_pixel_y_o = VL_RAND_RESET_I(16);
    vlSelf->outport_pixel_r_o = VL_RAND_RESET_I(8);
    vlSelf->outport_pixel_g_o = VL_RAND_RESET_I(8);
    vlSelf->outport_pixel_b_o = VL_RAND_RESET_I(8);
    vlSelf->idle_o = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_i__0 = VL_RAND_RESET_I(1);
}
