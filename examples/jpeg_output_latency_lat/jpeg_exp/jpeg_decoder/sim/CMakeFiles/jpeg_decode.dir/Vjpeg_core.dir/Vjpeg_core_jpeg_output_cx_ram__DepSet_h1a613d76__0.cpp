// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_output_cx_ram.h"
#include "Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8.h"

extern const VlUnpacked<CData/*5:0*/, 256> Vjpeg_core__ConstPool__TABLE_hf3facd12_0;

VL_INLINE_OPT void Vjpeg_core_jpeg_output_cx_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__0(Vjpeg_core_jpeg_output_cx_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_output_cx_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vdly__cx_idx_q;
    __Vdly__cx_idx_q = 0;
    CData/*1:0*/ __Vdly__cx_half_q;
    __Vdly__cx_half_q = 0;
    // Body
    __Vdly__cx_idx_q = vlSelf->__PVT__cx_idx_q;
    __Vdly__cx_half_q = vlSelf->__PVT__cx_half_q;
    vlSelf->__PVT__rd_skid_q = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                & ((~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)) 
                                   & ((IData)(vlSelf->__PVT__valid_o) 
                                      & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))));
    vlSelf->__PVT__rd_q = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                           & ((~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)) 
                              & (1U < vlSelf->__PVT__count_q)));
    if (vlSymsp->TOP.rst_i) {
        __Vdly__cx_idx_q = 0U;
        __Vdly__cx_half_q = 0U;
        vlSelf->__PVT__wr_ptr_q = 0U;
        vlSelf->__PVT__rd_skid_data_q = 0U;
        vlSelf->__PVT__cx_rd_ptr_q = 0U;
        vlSelf->__PVT__rd_ptr_q = 0U;
        vlSelf->__PVT__count_q = 0U;
    } else {
        if (((1U < vlSelf->__PVT__count_q) & ((~ (IData)(vlSelf->__PVT__valid_o)) 
                                              | ((IData)(vlSelf->__PVT__valid_o) 
                                                 & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w))))) {
            vlSelf->__PVT__cx_rd_ptr_q = vlSelf->__PVT__cx_rd_ptr_r;
        }
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__cx_idx_q = 0U;
            __Vdly__cx_half_q = 0U;
            vlSelf->__PVT__wr_ptr_q = 0U;
            vlSelf->__PVT__rd_skid_data_q = 0U;
            vlSelf->__PVT__rd_ptr_q = 0U;
            vlSelf->__PVT__count_q = 0U;
        } else {
            if (((1U < vlSelf->__PVT__count_q) & ((~ (IData)(vlSelf->__PVT__valid_o)) 
                                                  | ((IData)(vlSelf->__PVT__valid_o) 
                                                     & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w))))) {
                __Vdly__cx_idx_q = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__cx_idx_q)));
                vlSelf->__PVT__rd_ptr_q = vlSelf->__PVT__rd_ptr_next_w;
            }
            if ((((1U < vlSelf->__PVT__count_q) & (
                                                   (~ (IData)(vlSelf->__PVT__valid_o)) 
                                                   | ((IData)(vlSelf->__PVT__valid_o) 
                                                      & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))) 
                 & (0xffU == (IData)(vlSelf->__PVT__cx_idx_q)))) {
                __Vdly__cx_half_q = (3U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__cx_half_q)));
            }
            if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cb__push_i) {
                vlSelf->__PVT__wr_ptr_q = vlSelf->__PVT__write_next_w;
            }
            vlSelf->__PVT__rd_skid_data_q = (((IData)(vlSelf->__PVT__valid_o) 
                                              & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))
                                              ? vlSelf->__PVT__data_out_o
                                              : 0U);
            vlSelf->__PVT__count_q = vlSelf->__PVT__count_r;
        }
    }
    vlSelf->__PVT__cx_half_q = __Vdly__cx_half_q;
    vlSelf->__PVT__cx_idx_q = __Vdly__cx_idx_q;
    __Vtableidx1 = vlSelf->__PVT__cx_idx_q;
    vlSelf->__PVT__cx_rd_ptr_r = Vjpeg_core__ConstPool__TABLE_hf3facd12_0
        [__Vtableidx1];
    vlSelf->__PVT__write_next_w = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__wr_ptr_q)));
    vlSelf->__Vcellinp__u_ram__addr0_i = ((0xc0U & (IData)(vlSelf->__PVT__wr_ptr_q)) 
                                          | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o));
    vlSelf->__PVT__data_out_o = ((IData)(vlSelf->__PVT__rd_skid_q)
                                  ? vlSelf->__PVT__rd_skid_data_q
                                  : vlSelf->u_ram->__PVT__ram_read1_q);
    vlSelf->__PVT__valid_o = ((IData)(vlSelf->__PVT__rd_q) 
                              | (IData)(vlSelf->__PVT__rd_skid_q));
    vlSelf->__PVT__rd_ptr_next_w = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__rd_ptr_q)));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output_cx_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__0(Vjpeg_core_jpeg_output_cx_ram* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vjpeg_core_jpeg_output_cx_ram___nba_sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vdly__cx_idx_q;
    __Vdly__cx_idx_q = 0;
    CData/*1:0*/ __Vdly__cx_half_q;
    __Vdly__cx_half_q = 0;
    // Body
    __Vdly__cx_idx_q = vlSelf->__PVT__cx_idx_q;
    __Vdly__cx_half_q = vlSelf->__PVT__cx_half_q;
    vlSelf->__PVT__rd_skid_q = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                & ((~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)) 
                                   & ((IData)(vlSelf->__PVT__valid_o) 
                                      & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))));
    vlSelf->__PVT__rd_q = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                           & ((~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)) 
                              & (1U < vlSelf->__PVT__count_q)));
    if (vlSymsp->TOP.rst_i) {
        __Vdly__cx_idx_q = 0U;
        __Vdly__cx_half_q = 0U;
        vlSelf->__PVT__wr_ptr_q = 0U;
        vlSelf->__PVT__rd_skid_data_q = 0U;
        vlSelf->__PVT__cx_rd_ptr_q = 0U;
        vlSelf->__PVT__rd_ptr_q = 0U;
        vlSelf->__PVT__count_q = 0U;
    } else {
        if (((1U < vlSelf->__PVT__count_q) & ((~ (IData)(vlSelf->__PVT__valid_o)) 
                                              | ((IData)(vlSelf->__PVT__valid_o) 
                                                 & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w))))) {
            vlSelf->__PVT__cx_rd_ptr_q = vlSelf->__PVT__cx_rd_ptr_r;
        }
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__cx_idx_q = 0U;
            __Vdly__cx_half_q = 0U;
            vlSelf->__PVT__wr_ptr_q = 0U;
            vlSelf->__PVT__rd_skid_data_q = 0U;
            vlSelf->__PVT__rd_ptr_q = 0U;
            vlSelf->__PVT__count_q = 0U;
        } else {
            if (((1U < vlSelf->__PVT__count_q) & ((~ (IData)(vlSelf->__PVT__valid_o)) 
                                                  | ((IData)(vlSelf->__PVT__valid_o) 
                                                     & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w))))) {
                __Vdly__cx_idx_q = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__cx_idx_q)));
                vlSelf->__PVT__rd_ptr_q = vlSelf->__PVT__rd_ptr_next_w;
            }
            if ((((1U < vlSelf->__PVT__count_q) & (
                                                   (~ (IData)(vlSelf->__PVT__valid_o)) 
                                                   | ((IData)(vlSelf->__PVT__valid_o) 
                                                      & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))) 
                 & (0xffU == (IData)(vlSelf->__PVT__cx_idx_q)))) {
                __Vdly__cx_half_q = (3U & ((IData)(1U) 
                                           + (IData)(vlSelf->__PVT__cx_half_q)));
            }
            if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cr__push_i) {
                vlSelf->__PVT__wr_ptr_q = vlSelf->__PVT__write_next_w;
            }
            vlSelf->__PVT__rd_skid_data_q = (((IData)(vlSelf->__PVT__valid_o) 
                                              & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w)))
                                              ? vlSelf->__PVT__data_out_o
                                              : 0U);
            vlSelf->__PVT__count_q = vlSelf->__PVT__count_r;
        }
    }
    vlSelf->__PVT__cx_half_q = __Vdly__cx_half_q;
    vlSelf->__PVT__cx_idx_q = __Vdly__cx_idx_q;
    __Vtableidx2 = vlSelf->__PVT__cx_idx_q;
    vlSelf->__PVT__cx_rd_ptr_r = Vjpeg_core__ConstPool__TABLE_hf3facd12_0
        [__Vtableidx2];
    vlSelf->__PVT__write_next_w = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->__PVT__wr_ptr_q)));
    vlSelf->__Vcellinp__u_ram__addr0_i = ((0xc0U & (IData)(vlSelf->__PVT__wr_ptr_q)) 
                                          | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o));
    vlSelf->__PVT__data_out_o = ((IData)(vlSelf->__PVT__rd_skid_q)
                                  ? vlSelf->__PVT__rd_skid_data_q
                                  : vlSelf->u_ram->__PVT__ram_read1_q);
    vlSelf->__PVT__valid_o = ((IData)(vlSelf->__PVT__rd_q) 
                              | (IData)(vlSelf->__PVT__rd_skid_q));
    vlSelf->__PVT__rd_ptr_next_w = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelf->__PVT__rd_ptr_q)));
}
