// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


//======================

void Valu::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Valu* t = (Valu*)userthis;
    Valu__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Valu::traceChgThis(Valu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Valu::traceChgThis__2(Valu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->alu__DOT__a_in_r),32);
        vcdp->chgBus(c+9,(vlTOPp->alu__DOT__b_in_r),32);
        vcdp->chgBit(c+17,(vlTOPp->alu__DOT__in_valid_r));
        vcdp->chgBus(c+25,(vlTOPp->alu__DOT__result),32);
        vcdp->chgBus(c+33,(vlTOPp->alu__DOT__op_in_r),2);
        vcdp->chgBit(c+41,(vlTOPp->alu__DOT__done));
    }
}

void Valu::traceChgThis__3(Valu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Valu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+49,(vlTOPp->clk));
        vcdp->chgBit(c+57,(vlTOPp->rst));
        vcdp->chgBus(c+65,(vlTOPp->op_in),2);
        vcdp->chgBus(c+73,(vlTOPp->a_in),32);
        vcdp->chgBus(c+81,(vlTOPp->b_in),32);
        vcdp->chgBit(c+89,(vlTOPp->in_valid));
        vcdp->chgBus(c+97,(vlTOPp->out),32);
        vcdp->chgBit(c+105,(vlTOPp->out_valid));
    }
}
