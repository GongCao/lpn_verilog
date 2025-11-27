// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_output_y_ram.h"

VL_INLINE_OPT void Vjpeg_core_jpeg_output_y_ram___ico_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__0(Vjpeg_core_jpeg_output_y_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_output_y_ram___ico_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__0\n"); );
    // Body
    vlSelf->__PVT__count_r = vlSelf->__PVT__count_q;
    if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w) 
         & (IData)(vlSelf->__PVT__valid_o))) {
        vlSelf->__PVT__count_r = (vlSelf->__PVT__count_r 
                                  - (IData)(1U));
    }
    if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_y__push_i) {
        vlSelf->__PVT__count_r = ((IData)(1U) + vlSelf->__PVT__count_r);
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output_y_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__0(Vjpeg_core_jpeg_output_y_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_output_y_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__0\n"); );
    // Body
    vlSelf->__PVT__rd_q = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                           & ((~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)) 
                              & (IData)(vlSelf->__PVT__read_ok_w)));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__wr_ptr_q = 0U;
        vlSelf->__PVT__rd_skid_data_q = 0U;
        vlSelf->__PVT__rd_ptr_q = 0U;
        vlSelf->__PVT__count_q = 0U;
    } else if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
        vlSelf->__PVT__wr_ptr_q = 0U;
        vlSelf->__PVT__rd_skid_data_q = 0U;
        vlSelf->__PVT__rd_ptr_q = 0U;
        vlSelf->__PVT__count_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_y__push_i) {
            vlSelf->__PVT__wr_ptr_q = vlSelf->__PVT__write_next_w;
        }
        vlSelf->__PVT__rd_skid_data_q = (((IData)(vlSelf->__PVT__valid_o) 
                                          & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))
                                          ? vlSelf->__PVT__data_out_o
                                          : 0U);
        if (((IData)(vlSelf->__PVT__read_ok_w) & ((~ (IData)(vlSelf->__PVT__valid_o)) 
                                                  | ((IData)(vlSelf->__PVT__valid_o) 
                                                     & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w))))) {
            vlSelf->__PVT__rd_ptr_q = vlSelf->__PVT__rd_ptr_next_w;
        }
        vlSelf->__PVT__count_q = vlSelf->__PVT__count_r;
    }
    vlSelf->__PVT__rd_skid_q = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                & ((~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)) 
                                   & ((IData)(vlSelf->__PVT__valid_o) 
                                      & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))));
    vlSelf->__PVT__write_next_w = (0x1ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__wr_ptr_q)));
    vlSelf->__Vcellinp__u_ram__addr0_i = ((0x1c0U & (IData)(vlSelf->__PVT__wr_ptr_q)) 
                                          | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o));
    vlSelf->__PVT__valid_o = ((IData)(vlSelf->__PVT__rd_q) 
                              | (IData)(vlSelf->__PVT__rd_skid_q));
    vlSelf->__PVT__data_out_o = ((IData)(vlSelf->__PVT__rd_skid_q)
                                  ? vlSelf->__PVT__rd_skid_data_q
                                  : vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram.__PVT__ram_read1_q);
    vlSelf->__PVT__rd_ptr_next_w = (0x1ffU & ((IData)(1U) 
                                              + (IData)(vlSelf->__PVT__rd_ptr_q)));
    vlSelf->__PVT__read_ok_w = ((IData)(vlSelf->__PVT__wr_ptr_q) 
                                != (IData)(vlSelf->__PVT__rd_ptr_q));
}
