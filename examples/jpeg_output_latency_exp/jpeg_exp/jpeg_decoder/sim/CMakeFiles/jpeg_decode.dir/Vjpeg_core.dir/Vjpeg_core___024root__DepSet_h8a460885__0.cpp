// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjpeg_core___024root___dump_triggers__ico(Vjpeg_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vjpeg_core___024root___eval_triggers__ico(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vjpeg_core___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vjpeg_core___024root___ico_sequent__TOP__0(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->inport_accept_o = (((3U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__byte_idx_q)) 
                                | (IData)(vlSelf->inport_last_i)) 
                               & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__inport_accept_w));
}

void Vjpeg_core_jpeg_core___ico_sequent__TOP__jpeg_core__0(Vjpeg_core_jpeg_core* vlSelf);
void Vjpeg_core_jpeg_output___ico_sequent__TOP__jpeg_core__u_jpeg_output__0(Vjpeg_core_jpeg_output* vlSelf);
void Vjpeg_core_jpeg_dqt___ico_sequent__TOP__jpeg_core__u_jpeg_dqt__0(Vjpeg_core_jpeg_dqt* vlSelf);
void Vjpeg_core_jpeg_bitbuffer___ico_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__0(Vjpeg_core_jpeg_bitbuffer* vlSelf);
void Vjpeg_core_jpeg_mcu_proc___ico_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__0(Vjpeg_core_jpeg_mcu_proc* vlSelf);
void Vjpeg_core_jpeg_output_y_ram___ico_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__0(Vjpeg_core_jpeg_output_y_ram* vlSelf);
void Vjpeg_core_jpeg_output_cx_ram___ico_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__0(Vjpeg_core_jpeg_output_cx_ram* vlSelf);
void Vjpeg_core_jpeg_output_cx_ram___ico_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__0(Vjpeg_core_jpeg_output_cx_ram* vlSelf);

void Vjpeg_core___024root___eval_ico(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vjpeg_core_jpeg_core___ico_sequent__TOP__jpeg_core__0((&vlSymsp->TOP__jpeg_core));
        Vjpeg_core_jpeg_output___ico_sequent__TOP__jpeg_core__u_jpeg_output__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output));
        Vjpeg_core_jpeg_dqt___ico_sequent__TOP__jpeg_core__u_jpeg_dqt__0((&vlSymsp->TOP__jpeg_core__u_jpeg_dqt));
        Vjpeg_core___024root___ico_sequent__TOP__0(vlSelf);
        Vjpeg_core_jpeg_bitbuffer___ico_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__0((&vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer));
        Vjpeg_core_jpeg_mcu_proc___ico_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__0((&vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc));
        Vjpeg_core_jpeg_output_y_ram___ico_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y));
        Vjpeg_core_jpeg_output_cx_ram___ico_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb));
        Vjpeg_core_jpeg_output_cx_ram___ico_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjpeg_core___024root___dump_triggers__act(Vjpeg_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vjpeg_core___024root___eval_triggers__act(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))) 
                                     | ((IData)(vlSelf->rst_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_i__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_i__0 = vlSelf->rst_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vjpeg_core___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vjpeg_core___024root___nba_sequent__TOP__0(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->outport_height_o = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_height_q;
    vlSelf->outport_pixel_b_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_b_q;
    vlSelf->outport_pixel_r_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_r_q;
    vlSelf->outport_pixel_g_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_g_q;
    vlSelf->outport_pixel_y_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_y_q;
    vlSelf->outport_pixel_x_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_x_q;
    vlSelf->outport_valid_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__valid_q;
    vlSelf->idle_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idle_q;
}

VL_INLINE_OPT void Vjpeg_core___024root___nba_sequent__TOP__1(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->outport_width_o = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q;
}

void Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0__0(Vjpeg_core_jpeg_idct_ram_dp* vlSelf);
void Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1__0(Vjpeg_core_jpeg_idct_ram_dp* vlSelf);
void Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2__0(Vjpeg_core_jpeg_idct_ram_dp* vlSelf);
void Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3__0(Vjpeg_core_jpeg_idct_ram_dp* vlSelf);
void Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__0(Vjpeg_core_jpeg_idct_transpose_ram* vlSelf);
void Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1__0(Vjpeg_core_jpeg_idct_transpose_ram* vlSelf);
void Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2__0(Vjpeg_core_jpeg_idct_transpose_ram* vlSelf);
void Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3__0(Vjpeg_core_jpeg_idct_transpose_ram* vlSelf);
void Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram__0(Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8* vlSelf);
void Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram__0(Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8* vlSelf);
void Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram__0(Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9* vlSelf);
void Vjpeg_core_jpeg_dqt___nba_sequent__TOP__jpeg_core__u_jpeg_dqt__0(Vjpeg_core_jpeg_dqt* vlSelf);
void Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__0(Vjpeg_core_jpeg_idct_transpose* vlSelf);
void Vjpeg_core_jpeg_core___nba_sequent__TOP__jpeg_core__0(Vjpeg_core_jpeg_core* vlSelf);
void Vjpeg_core_jpeg_idct_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__0(Vjpeg_core_jpeg_idct_ram* vlSelf);
void Vjpeg_core_jpeg_idct___nba_sequent__TOP__jpeg_core__u_jpeg_idct__0(Vjpeg_core_jpeg_idct* vlSelf);
void Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__0(Vjpeg_core_jpeg_output* vlSelf);
void Vjpeg_core_jpeg_mcu_proc___nba_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__0(Vjpeg_core_jpeg_mcu_proc* vlSelf);
void Vjpeg_core_jpeg_output_cx_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__0(Vjpeg_core_jpeg_output_cx_ram* vlSelf);
void Vjpeg_core_jpeg_output_cx_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__0(Vjpeg_core_jpeg_output_cx_ram* vlSelf);
void Vjpeg_core_jpeg_bitbuffer___nba_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__0(Vjpeg_core_jpeg_bitbuffer* vlSelf);
void Vjpeg_core_jpeg_output_y_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__0(Vjpeg_core_jpeg_output_y_ram* vlSelf);
void Vjpeg_core_jpeg_dqt___nba_sequent__TOP__jpeg_core__u_jpeg_dqt__1(Vjpeg_core_jpeg_dqt* vlSelf);
void Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__1(Vjpeg_core_jpeg_idct_transpose* vlSelf);
void Vjpeg_core_jpeg_idct_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__1(Vjpeg_core_jpeg_idct_ram* vlSelf);
void Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__1(Vjpeg_core_jpeg_idct_transpose_ram* vlSelf);
void Vjpeg_core_jpeg_core___nba_sequent__TOP__jpeg_core__1(Vjpeg_core_jpeg_core* vlSelf);
void Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__1(Vjpeg_core_jpeg_output* vlSelf);
void Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__2(Vjpeg_core_jpeg_idct_transpose* vlSelf);
void Vjpeg_core_jpeg_mcu_proc___nba_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__1(Vjpeg_core_jpeg_mcu_proc* vlSelf);
void Vjpeg_core_jpeg_bitbuffer___nba_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__1(Vjpeg_core_jpeg_bitbuffer* vlSelf);
void Vjpeg_core_jpeg_output_cx_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__1(Vjpeg_core_jpeg_output_cx_ram* vlSelf);
void Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__2(Vjpeg_core_jpeg_output* vlSelf);
void Vjpeg_core_jpeg_idct___nba_sequent__TOP__jpeg_core__u_jpeg_idct__1(Vjpeg_core_jpeg_idct* vlSelf);
void Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__3(Vjpeg_core_jpeg_output* vlSelf);
void Vjpeg_core_jpeg_idct___nba_sequent__TOP__jpeg_core__u_jpeg_idct__2(Vjpeg_core_jpeg_idct* vlSelf);
void Vjpeg_core_jpeg_dqt___nba_sequent__TOP__jpeg_core__u_jpeg_dqt__2(Vjpeg_core_jpeg_dqt* vlSelf);
void Vjpeg_core_jpeg_core___nba_sequent__TOP__jpeg_core__2(Vjpeg_core_jpeg_core* vlSelf);
void Vjpeg_core_jpeg_mcu_proc___nba_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__2(Vjpeg_core_jpeg_mcu_proc* vlSelf);
void Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__3(Vjpeg_core_jpeg_idct_transpose* vlSelf);
void Vjpeg_core_jpeg_idct_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__2(Vjpeg_core_jpeg_idct_ram* vlSelf);
void Vjpeg_core_jpeg_output___nba_comb__TOP__jpeg_core__u_jpeg_output__0(Vjpeg_core_jpeg_output* vlSelf);

void Vjpeg_core___024root___eval_nba(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0__0((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0));
        Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1__0((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1));
        Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2__0((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2));
        Vjpeg_core_jpeg_idct_ram_dp___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3__0((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3));
        Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__0((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0));
        Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1__0((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1));
        Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2__0((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2));
        Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3__0((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3));
        Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram));
        Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram));
        Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram));
        Vjpeg_core_jpeg_dqt___nba_sequent__TOP__jpeg_core__u_jpeg_dqt__0((&vlSymsp->TOP__jpeg_core__u_jpeg_dqt));
        Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__0((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose));
        Vjpeg_core_jpeg_core___nba_sequent__TOP__jpeg_core__0((&vlSymsp->TOP__jpeg_core));
        Vjpeg_core_jpeg_idct_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__0((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input));
        Vjpeg_core_jpeg_idct___nba_sequent__TOP__jpeg_core__u_jpeg_idct__0((&vlSymsp->TOP__jpeg_core__u_jpeg_idct));
        Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output));
        Vjpeg_core_jpeg_mcu_proc___nba_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__0((&vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc));
        Vjpeg_core_jpeg_output_cx_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb));
        Vjpeg_core_jpeg_output_cx_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr));
        Vjpeg_core_jpeg_bitbuffer___nba_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__0((&vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer));
        Vjpeg_core_jpeg_output_y_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y));
        Vjpeg_core___024root___nba_sequent__TOP__0(vlSelf);
        Vjpeg_core_jpeg_dqt___nba_sequent__TOP__jpeg_core__u_jpeg_dqt__1((&vlSymsp->TOP__jpeg_core__u_jpeg_dqt));
        Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__1((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose));
        Vjpeg_core_jpeg_idct_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__1((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input));
        Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__1((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2));
        Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__1((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3));
        Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__1((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1));
        Vjpeg_core_jpeg_idct_transpose_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__1((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0));
        Vjpeg_core_jpeg_core___nba_sequent__TOP__jpeg_core__1((&vlSymsp->TOP__jpeg_core));
        Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__1((&vlSymsp->TOP__jpeg_core__u_jpeg_output));
        Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__2((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose));
        Vjpeg_core___024root___nba_sequent__TOP__1(vlSelf);
        Vjpeg_core_jpeg_mcu_proc___nba_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__1((&vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc));
        Vjpeg_core_jpeg_bitbuffer___nba_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__1((&vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer));
        Vjpeg_core_jpeg_output_cx_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__1((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb));
        Vjpeg_core_jpeg_output_cx_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__1((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__2((&vlSymsp->TOP__jpeg_core__u_jpeg_output));
        Vjpeg_core_jpeg_idct___nba_sequent__TOP__jpeg_core__u_jpeg_idct__1((&vlSymsp->TOP__jpeg_core__u_jpeg_idct));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vjpeg_core_jpeg_output___nba_sequent__TOP__jpeg_core__u_jpeg_output__3((&vlSymsp->TOP__jpeg_core__u_jpeg_output));
        Vjpeg_core_jpeg_idct___nba_sequent__TOP__jpeg_core__u_jpeg_idct__2((&vlSymsp->TOP__jpeg_core__u_jpeg_idct));
        Vjpeg_core_jpeg_dqt___nba_sequent__TOP__jpeg_core__u_jpeg_dqt__2((&vlSymsp->TOP__jpeg_core__u_jpeg_dqt));
        Vjpeg_core_jpeg_core___nba_sequent__TOP__jpeg_core__2((&vlSymsp->TOP__jpeg_core));
        Vjpeg_core_jpeg_mcu_proc___nba_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__2((&vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc));
        Vjpeg_core_jpeg_idct_transpose___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__3((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose));
        Vjpeg_core_jpeg_idct_ram___nba_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__2((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input));
        Vjpeg_core_jpeg_dqt___ico_sequent__TOP__jpeg_core__u_jpeg_dqt__0((&vlSymsp->TOP__jpeg_core__u_jpeg_dqt));
        Vjpeg_core___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vjpeg_core_jpeg_output___nba_comb__TOP__jpeg_core__u_jpeg_output__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output));
        Vjpeg_core_jpeg_output_cx_ram___ico_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb));
        Vjpeg_core_jpeg_output_cx_ram___ico_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr));
        Vjpeg_core_jpeg_output_y_ram___ico_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y));
    }
}
