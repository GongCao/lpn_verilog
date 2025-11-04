// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core_jpeg_core.h"

VL_ATTR_COLD void Vjpeg_core_jpeg_core___stl_sequent__TOP__jpeg_core__1(Vjpeg_core_jpeg_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjpeg_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vjpeg_core_jpeg_core___stl_sequent__TOP__jpeg_core__1\n"); );
    // Body
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 0U;
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 0U;
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0U;
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0U;
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 0U;
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 0U;
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0U;
    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0U;
    if ((0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                >> 0x1eU))) {
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 0U;
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 2U;
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 1U;
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 2U;
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 0U;
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 2U;
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0U;
        vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 2U;
    } else {
        if ((2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                    >> 0x1dU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 1U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 3U;
        } else if ((3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                           >> 0x1dU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 2U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 3U;
        } else if ((4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                           >> 0x1dU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 3U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 3U;
        } else if ((5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                           >> 0x1dU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 4U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 3U;
        } else if ((6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                           >> 0x1dU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 5U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 3U;
        } else if ((0xeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                             >> 0x1cU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 6U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 4U;
        } else if ((0x1eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                              >> 0x1bU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 7U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 5U;
        } else if ((0x3eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                              >> 0x1aU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 8U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 6U;
        } else if ((0x7eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                              >> 0x19U))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 9U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 7U;
        } else if ((0xfeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                              >> 0x18U))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 0xaU;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 8U;
        } else if ((0x1feU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                               >> 0x17U))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_value_r = 0xbU;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_dc__DOT__y_dc_width_r = 9U;
        }
        if ((1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                    >> 0x1eU))) {
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 2U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 2U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 1U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 2U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 1U;
            vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 2U;
        } else {
            if ((4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                        >> 0x1dU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 3U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 3U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 2U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 3U;
            } else if ((0xaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                 >> 0x1cU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 4U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 3U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 4U;
            } else if ((0xbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                 >> 0x1cU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 4U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 4U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x11U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 4U;
            } else {
                if ((0xcU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                              >> 0x1cU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x11U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 4U;
                } else if ((0x1aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1bU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 5U;
                } else if ((0x1bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1bU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x12U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 5U;
                } else if ((0x1cU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1bU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x21U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 5U;
                } else if ((0x3aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1aU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x31U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 6U;
                } else if ((0x3bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1aU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x41U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 6U;
                } else if ((0x78U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x19U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 7U;
                } else if ((0x79U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x19U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x13U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 7U;
                } else if ((0x7aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x19U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x51U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 7U;
                } else if ((0x7bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x19U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x61U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 7U;
                } else if ((0xf8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x18U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 8U;
                } else if ((0xf9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x18U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x22U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 8U;
                } else if ((0xfaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x18U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x71U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 8U;
                } else if ((0x1f6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x14U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 9U;
                } else if ((0x1f7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x32U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 9U;
                } else if ((0x1f8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x81U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 9U;
                } else if ((0x1f9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x91U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 9U;
                } else if ((0x1faU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa1U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 9U;
                } else if ((0x3f6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xaU;
                } else if ((0x3f7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x23U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xaU;
                } else if ((0x3f8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x42U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xaU;
                } else if ((0x3f9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb1U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xaU;
                } else if ((0x3faU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc1U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xaU;
                } else if ((0x7f6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x15U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xbU;
                } else if ((0x7f7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x52U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xbU;
                } else if ((0x7f8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd1U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xbU;
                } else if ((0x7f9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf0U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xbU;
                } else if ((0xff4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x24U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xcU;
                } else if ((0xff5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x33U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xcU;
                } else if ((0xff6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x62U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xcU;
                } else if ((0xff7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x72U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xcU;
                } else if ((0x7fc0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x11U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x82U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0xfU;
                } else if ((0xff82U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff83U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff84U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x16U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff85U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x17U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff86U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x18U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff87U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x19U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff88U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x1aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff89U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x25U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff8aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x26U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff8bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x27U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff8cU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x28U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff8dU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x29U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff8eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x2aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff8fU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x34U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff90U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x35U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff91U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x36U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff92U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x37U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff93U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x38U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff94U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x39U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff95U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x3aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff96U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x43U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff97U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x44U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff98U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x45U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff99U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x46U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff9aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x47U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff9bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x48U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff9cU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x49U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff9dU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x4aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff9eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x53U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xff9fU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x54U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffa0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x55U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffa1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x56U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffa2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x57U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffa3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x58U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffa4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x59U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffa5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x5aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffa6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x63U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffa7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x64U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffa8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x65U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffa9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x66U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffaaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x67U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffabU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x68U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffacU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x69U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffadU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x6aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffaeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x73U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffafU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x74U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffb0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x75U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffb1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x76U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffb2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x77U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffb3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x78U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffb4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x79U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffb5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x7aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffb6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x83U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffb7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x84U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffb8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x85U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffb9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x86U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffbaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x87U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffbbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x88U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffbcU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x89U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffbdU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x8aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffbeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x92U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffbfU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x93U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffc0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x94U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffc1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x95U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffc2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x96U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffc3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x97U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffc4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x98U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffc5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x99U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffc6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0x9aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffc7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa2U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffc8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa3U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffc9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa4U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffcaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffcbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffccU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffcdU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffceU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xa9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffcfU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xaaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffd0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb2U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffd1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb3U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffd2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb4U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffd3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffd4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffd5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffd6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffd7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xb9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffd8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xbaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffd9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc2U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffdaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc3U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffdbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc4U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffdcU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffddU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffdeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffdfU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffe0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xc9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffe1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xcaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffe2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd2U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffe3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd3U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffe4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd4U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffe5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffe6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffe7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffe8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffe9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xd9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffeaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xdaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffebU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe1U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffecU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe2U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffedU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe3U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffeeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe4U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xffefU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xfff0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xfff1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xfff2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xfff3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xe9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xfff4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xeaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xfff5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf1U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xfff6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf2U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xfff7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf3U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xfff8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf4U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xfff9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xfffaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xfffbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xfffcU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xfffdU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xf9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                } else if ((0xfffeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_value_r = 0xfaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_y_ac__DOT__y_ac_width_r = 0x10U;
                }
                if ((0x18U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                               >> 0x1bU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 4U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 5U;
                } else if ((0x19U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1bU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 5U;
                } else if ((0x1aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1bU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x21U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 5U;
                } else if ((0x1bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1bU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x31U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 5U;
                } else if ((0x38U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1aU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 6U;
                } else if ((0x39U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1aU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x12U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 6U;
                } else if ((0x3aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1aU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x41U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 6U;
                } else if ((0x3bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x1aU))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x51U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 6U;
                } else if ((0x78U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x19U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 7U;
                } else if ((0x79U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x19U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x61U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 7U;
                } else if ((0x7aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x19U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x71U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 7U;
                } else if ((0xf6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x18U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x13U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 8U;
                } else if ((0xf7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x18U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x22U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 8U;
                } else if ((0xf8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x18U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x32U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 8U;
                } else if ((0xf9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                      >> 0x18U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x81U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 8U;
                } else if ((0x1f4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 9U;
                } else if ((0x1f5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x14U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 9U;
                } else if ((0x1f6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x42U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 9U;
                } else if ((0x1f7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x91U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 9U;
                } else if ((0x1f8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa1U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 9U;
                } else if ((0x1f9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb1U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 9U;
                } else if ((0x1faU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x17U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc1U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 9U;
                } else if ((0x3f6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xaU;
                } else if ((0x3f7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x23U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xaU;
                } else if ((0x3f8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x33U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xaU;
                } else if ((0x3f9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x52U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xaU;
                } else if ((0x3faU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x16U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf0U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xaU;
                } else if ((0x7f6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x15U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xbU;
                } else if ((0x7f7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x62U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xbU;
                } else if ((0x7f8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x72U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xbU;
                } else if ((0x7f9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x15U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd1U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xbU;
                } else if ((0xff4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xcU;
                } else if ((0xff5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x16U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xcU;
                } else if ((0xff6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x24U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xcU;
                } else if ((0xff7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                       >> 0x14U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x34U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xcU;
                } else if ((0x3fe0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x12U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe1U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xeU;
                } else if ((0x7fc2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x11U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x25U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xfU;
                } else if ((0x7fc3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x11U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf1U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0xfU;
                } else if ((0xff88U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x17U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff89U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x18U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff8aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x19U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff8bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x1aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff8cU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x26U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff8dU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x27U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff8eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x28U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff8fU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x29U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff90U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x2aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff91U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x35U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff92U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x36U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff93U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x37U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff94U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x38U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff95U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x39U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff96U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x3aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff97U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x43U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff98U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x44U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff99U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x45U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff9aU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x46U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff9bU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x47U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff9cU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x48U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff9dU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x49U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff9eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x4aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xff9fU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x53U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffa0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x54U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffa1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x55U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffa2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x56U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffa3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x57U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffa4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x58U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffa5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x59U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffa6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x5aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffa7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x63U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffa8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x64U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffa9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x65U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffaaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x66U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffabU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x67U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffacU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x68U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffadU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x69U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffaeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x6aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffafU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x73U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffb0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x74U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffb1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x75U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffb2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x76U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffb3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x77U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffb4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x78U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffb5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x79U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffb6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x7aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffb7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x82U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffb8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x83U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffb9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x84U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffbaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x85U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffbbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x86U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffbcU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x87U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffbdU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x88U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffbeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x89U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffbfU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x8aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffc0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x92U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffc1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x93U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffc2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x94U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffc3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x95U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffc4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x96U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffc5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x97U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffc6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x98U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffc7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x99U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffc8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0x9aU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffc9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa2U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffcaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa3U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffcbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa4U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffccU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffcdU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffceU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffcfU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffd0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xa9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffd1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xaaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffd2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb2U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffd3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb3U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffd4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb4U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffd5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffd6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffd7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffd8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffd9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xb9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffdaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xbaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffdbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc2U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffdcU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc3U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffddU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc4U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffdeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffdfU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffe0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffe1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffe2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xc9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffe3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xcaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffe4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd2U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffe5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd3U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffe6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd4U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffe7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffe8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffe9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffeaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffebU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xd9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffecU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xdaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffedU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe2U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffeeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe3U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xffefU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe4U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xfff0U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xfff1U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xfff2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xfff3U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xfff4U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xe9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xfff5U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xeaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xfff6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf2U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xfff7U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf3U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xfff8U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf4U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xfff9U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf5U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xfffaU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf6U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xfffbU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf7U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xfffcU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf8U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xfffdU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xf9U;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                } else if ((0xfffeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                        >> 0x10U))) {
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r = 0xfaU;
                    vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r = 0x10U;
                }
            }
            if ((2U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                        >> 0x1eU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 2U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 2U;
            } else if ((6U == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                               >> 0x1dU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 3U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 3U;
            } else if ((0xeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                 >> 0x1cU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 4U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 4U;
            } else if ((0x1eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                  >> 0x1bU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 5U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 5U;
            } else if ((0x3eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                  >> 0x1aU))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 6U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 6U;
            } else if ((0x7eU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                  >> 0x19U))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 7U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 7U;
            } else if ((0xfeU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                  >> 0x18U))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 8U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 8U;
            } else if ((0x1feU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                   >> 0x17U))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 9U;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 9U;
            } else if ((0x3feU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                   >> 0x16U))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 0xaU;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 0xaU;
            } else if ((0x7feU == (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_data_o 
                                   >> 0x15U))) {
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r = 0xbU;
                vlSelf->__PVT__u_jpeg_dht__DOT__genblk1__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r = 0xbU;
            }
        }
    }
}
