// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core___024root.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_dqt___eval_initial__TOP__jpeg_core__u_jpeg_dqt(Vjpeg_core_jpeg_dqt* vlSelf);

VL_ATTR_COLD void Vjpeg_core___024root___eval_initial(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___eval_initial\n"); );
    // Body
    Vjpeg_core_jpeg_dqt___eval_initial__TOP__jpeg_core__u_jpeg_dqt((&vlSymsp->TOP__jpeg_core__u_jpeg_dqt));
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__rst_i__0 = vlSelf->rst_i;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjpeg_core___024root___dump_triggers__stl(Vjpeg_core___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vjpeg_core___024root___eval_triggers__stl(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vjpeg_core___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vjpeg_core___024root___stl_sequent__TOP__0(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->idle_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idle_q;
    vlSelf->outport_pixel_b_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_b_q;
    vlSelf->outport_pixel_g_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_g_q;
    vlSelf->outport_pixel_r_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_r_q;
    vlSelf->outport_pixel_y_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_y_q;
    vlSelf->outport_pixel_x_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_x_q;
    vlSelf->outport_height_o = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_height_q;
    vlSelf->outport_width_o = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q;
    vlSelf->outport_valid_o = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__valid_q;
}

VL_ATTR_COLD void Vjpeg_core_jpeg_idct___stl_sequent__TOP__jpeg_core__u_jpeg_idct__0(Vjpeg_core_jpeg_idct* vlSelf);
VL_ATTR_COLD void Vjpeg_core_jpeg_mcu_proc___stl_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__0(Vjpeg_core_jpeg_mcu_proc* vlSelf);
VL_ATTR_COLD void Vjpeg_core_jpeg_output___stl_sequent__TOP__jpeg_core__u_jpeg_output__0(Vjpeg_core_jpeg_output* vlSelf);
VL_ATTR_COLD void Vjpeg_core_jpeg_output_cx_ram___stl_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__0(Vjpeg_core_jpeg_output_cx_ram* vlSelf);
VL_ATTR_COLD void Vjpeg_core_jpeg_output_cx_ram___stl_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__0(Vjpeg_core_jpeg_output_cx_ram* vlSelf);
VL_ATTR_COLD void Vjpeg_core_jpeg_output_y_ram___stl_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__0(Vjpeg_core_jpeg_output_y_ram* vlSelf);
VL_ATTR_COLD void Vjpeg_core_jpeg_idct_ram___stl_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__0(Vjpeg_core_jpeg_idct_ram* vlSelf);
VL_ATTR_COLD void Vjpeg_core_jpeg_idct_transpose___stl_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__0(Vjpeg_core_jpeg_idct_transpose* vlSelf);
VL_ATTR_COLD void Vjpeg_core_jpeg_dqt___stl_sequent__TOP__jpeg_core__u_jpeg_dqt__0(Vjpeg_core_jpeg_dqt* vlSelf);
void Vjpeg_core_jpeg_core___ico_sequent__TOP__jpeg_core__0(Vjpeg_core_jpeg_core* vlSelf);
VL_ATTR_COLD void Vjpeg_core_jpeg_bitbuffer___stl_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__0(Vjpeg_core_jpeg_bitbuffer* vlSelf);
VL_ATTR_COLD void Vjpeg_core_jpeg_output___stl_sequent__TOP__jpeg_core__u_jpeg_output__1(Vjpeg_core_jpeg_output* vlSelf);
void Vjpeg_core_jpeg_dqt___ico_sequent__TOP__jpeg_core__u_jpeg_dqt__0(Vjpeg_core_jpeg_dqt* vlSelf);
void Vjpeg_core___024root___ico_sequent__TOP__0(Vjpeg_core___024root* vlSelf);
void Vjpeg_core_jpeg_mcu_proc___ico_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__0(Vjpeg_core_jpeg_mcu_proc* vlSelf);
VL_ATTR_COLD void Vjpeg_core_jpeg_core___stl_sequent__TOP__jpeg_core__1(Vjpeg_core_jpeg_core* vlSelf);

VL_ATTR_COLD void Vjpeg_core___024root___eval_stl(Vjpeg_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjpeg_core___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vjpeg_core___024root___stl_sequent__TOP__0(vlSelf);
        Vjpeg_core_jpeg_idct___stl_sequent__TOP__jpeg_core__u_jpeg_idct__0((&vlSymsp->TOP__jpeg_core__u_jpeg_idct));
        Vjpeg_core_jpeg_mcu_proc___stl_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__0((&vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc));
        Vjpeg_core_jpeg_output___stl_sequent__TOP__jpeg_core__u_jpeg_output__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output));
        Vjpeg_core_jpeg_output_cx_ram___stl_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb));
        Vjpeg_core_jpeg_output_cx_ram___stl_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr));
        Vjpeg_core_jpeg_output_y_ram___stl_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__0((&vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y));
        Vjpeg_core_jpeg_idct_ram___stl_sequent__TOP__jpeg_core__u_jpeg_idct__u_input__0((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input));
        Vjpeg_core_jpeg_idct_transpose___stl_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__0((&vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose));
        Vjpeg_core_jpeg_dqt___stl_sequent__TOP__jpeg_core__u_jpeg_dqt__0((&vlSymsp->TOP__jpeg_core__u_jpeg_dqt));
        Vjpeg_core_jpeg_core___ico_sequent__TOP__jpeg_core__0((&vlSymsp->TOP__jpeg_core));
        Vjpeg_core_jpeg_bitbuffer___stl_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__0((&vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer));
        Vjpeg_core_jpeg_output___stl_sequent__TOP__jpeg_core__u_jpeg_output__1((&vlSymsp->TOP__jpeg_core__u_jpeg_output));
        Vjpeg_core_jpeg_dqt___ico_sequent__TOP__jpeg_core__u_jpeg_dqt__0((&vlSymsp->TOP__jpeg_core__u_jpeg_dqt));
        Vjpeg_core___024root___ico_sequent__TOP__0(vlSelf);
        Vjpeg_core_jpeg_mcu_proc___ico_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__0((&vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc));
        Vjpeg_core_jpeg_core___stl_sequent__TOP__jpeg_core__1((&vlSymsp->TOP__jpeg_core));
    }
}
