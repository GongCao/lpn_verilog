// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_output.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_output___stl_sequent__TOP__jpeg_core__u_jpeg_output__0(Vjpeg_core_jpeg_output* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output___stl_sequent__TOP__jpeg_core__u_jpeg_output__0\n"); );
    // Body
    vlSelf->__PVT__valid_r = vlSelf->__PVT__active_q;
    vlSelf->__PVT__id_valid_w = (0U != (IData)(vlSelf->__PVT__u_info__DOT__count_q));
    vlSelf->__PVT__u_info__DOT__accept_o = (8U != (IData)(vlSelf->__PVT__u_info__DOT__count_q));
    vlSelf->__PVT__id_value_w = vlSelf->__PVT__u_info__DOT__ram_q
        [vlSelf->__PVT__u_info__DOT__rd_ptr_q];
    vlSelf->__PVT__output_space_w = (1U & ((~ (IData)(vlSelf->__PVT__valid_q)) 
                                           | (IData)(vlSymsp->TOP.outport_accept_i)));
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
    vlSelf->__PVT__id_pop_w = ((IData)(vlSelf->__PVT__output_space_w) 
                               & (0x3fU == (IData)(vlSelf->__PVT__idx_q)));
    vlSelf->__PVT__y_pop_w = ((IData)(vlSelf->__PVT__output_space_w) 
                              & (IData)(vlSelf->__PVT__active_q));
    vlSelf->__Vcellinp__u_info__push_i = ((IData)(vlSelf->__Vcellinp__u_ram_y__push_i) 
                                          & (0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o)));
}

VL_ATTR_COLD void Vjpeg_core_jpeg_output___stl_sequent__TOP__jpeg_core__u_jpeg_output__1(Vjpeg_core_jpeg_output* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output___stl_sequent__TOP__jpeg_core__u_jpeg_output__1\n"); );
    // Body
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
