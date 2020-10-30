// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTopPipeline__Syms.h"


//======================

void VTopPipeline::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTopPipeline* t=(VTopPipeline*)userthis;
    VTopPipeline__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VTopPipeline::traceChgThis(VTopPipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTopPipeline::traceChgThis__2(VTopPipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->TopPipeline__DOT__AluControl_io_out),5);
	vcdp->chgBus  (c+2,(vlTOPp->TopPipeline__DOT__Alu_io_in1),32);
	vcdp->chgBus  (c+3,(vlTOPp->TopPipeline__DOT__Alu_io_in2),32);
	vcdp->chgBus  (c+4,((IData)(vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_19)),32);
	vcdp->chgBit  (c+5,(((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
			     & ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load)) 
				& (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store)))));
	vcdp->chgBit  (c+6,(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_Branch));
	vcdp->chgBit  (c+7,(((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
			     & (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load))));
	vcdp->chgBit  (c+8,(((0x33U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
			     | ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load) 
				| ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store)) 
				   & ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch)) 
				      & ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_I) 
					 | ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jal) 
					    | ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jalr) 
					       | (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Lui))))))))));
	vcdp->chgBus  (c+9,(((0x33U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg))
			      ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load)
				       ? 4U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store)
					        ? 5U
					        : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch)
						    ? 2U
						    : 
						   ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_I)
						     ? 1U
						     : 
						    ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jal)
						      ? 3U
						      : 
						     ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jalr)
						       ? 3U
						       : 
						      ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Lui)
						        ? 6U
						        : 7U))))))))),3);
	vcdp->chgBus  (c+10,(((0x33U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg))
			       ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load)
				        ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store)
						 ? 0U
						 : 
						((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch)
						  ? 0U
						  : 
						 ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_I)
						   ? 0U
						   : 
						  ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jal)
						    ? 2U
						    : 
						   ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jalr)
						     ? 2U
						     : 
						    ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Lui)
						      ? 3U
						      : 0U))))))))),2);
	vcdp->chgBit  (c+11,(((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
			      & ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load) 
				 | ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store) 
				    | ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch)) 
				       & ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_I) 
					  | (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2__DOT___GEN_14))))))));
	vcdp->chgBus  (c+12,(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_ExtSel),2);
	vcdp->chgBus  (c+13,(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc),2);
	vcdp->chgBus  (c+14,((vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_41 
			      + vlTOPp->TopPipeline__DOT__IF_ID__DOT__pcreg)),32);
	vcdp->chgBus  (c+15,(((IData)(vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_58) 
			      + vlTOPp->TopPipeline__DOT__IF_ID__DOT__pcreg)),32);
	vcdp->chgBus  (c+16,(vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_77),32);
	vcdp->chgBus  (c+17,(vlTOPp->TopPipeline__DOT__Register_io_WriteData),32);
	vcdp->chgBus  (c+18,(vlTOPp->TopPipeline__DOT__Register_io_rs1),32);
	vcdp->chgBus  (c+19,(vlTOPp->TopPipeline__DOT__Register_io_rs2),32);
	vcdp->chgBus  (c+20,(vlTOPp->TopPipeline__DOT__Memory__DOT__mem___05FT_11_data),32);
	vcdp->chgBus  (c+21,(((1U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
			       ? ((IData)(vlTOPp->TopPipeline__DOT___T_27)
				   ? (vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_41 
				      + vlTOPp->TopPipeline__DOT__IF_ID__DOT__pcreg)
				   : ((IData)(4U) + vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024))
			       : ((2U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
				   ? ((IData)(vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_58) 
				      + vlTOPp->TopPipeline__DOT__IF_ID__DOT__pcreg)
				   : ((3U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
				       ? (0xfffffffeU 
					  & (vlTOPp->TopPipeline__DOT__Jalr_io_in1 
					     + vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_77))
				       : ((IData)(4U) 
					  + vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024))))),32);
	vcdp->chgBus  (c+22,(vlTOPp->TopPipeline__DOT__Jalr_io_in1),32);
	vcdp->chgBus  (c+23,((0xfffffffeU & (vlTOPp->TopPipeline__DOT__Jalr_io_in1 
					     + vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_77))),32);
	vcdp->chgBus  (c+24,(vlTOPp->TopPipeline__DOT__DataMemory__DOT__mem___05FT_22_data),32);
	vcdp->chgBus  (c+25,(((1U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
			       ? ((IData)(vlTOPp->TopPipeline__DOT___T_27)
				   ? 0U : vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024)
			       : ((2U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
				   ? 0U : ((3U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
					    ? 0U : vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024)))),32);
	vcdp->chgBus  (c+26,(((1U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
			       ? ((IData)(vlTOPp->TopPipeline__DOT___T_27)
				   ? 0U : ((IData)(4U) 
					   + vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024))
			       : ((2U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
				   ? 0U : ((3U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
					    ? 0U : 
					   ((IData)(4U) 
					    + vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024))))),32);
	vcdp->chgBus  (c+27,(((1U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
			       ? ((IData)(vlTOPp->TopPipeline__DOT___T_27)
				   ? 0U : vlTOPp->TopPipeline__DOT___GEN_0)
			       : ((2U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
				   ? 0U : ((3U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
					    ? 0U : vlTOPp->TopPipeline__DOT___GEN_0)))),32);
	vcdp->chgBit  (c+28,(((~ (IData)(vlTOPp->TopPipeline__DOT__Stalling_io_stall)) 
			      & ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
				 & ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load)) 
				    & (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store))))));
	vcdp->chgBit  (c+29,(((~ (IData)(vlTOPp->TopPipeline__DOT__Stalling_io_stall)) 
			      & ((0x33U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
				 | ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load) 
				    | ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store)) 
				       & ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch)) 
					  & ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_I) 
					     | ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jal) 
						| ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jalr) 
						   | (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Lui)))))))))));
	vcdp->chgBus  (c+30,(((0U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_ExtSel))
			       ? vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_77
			       : ((1U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_ExtSel))
				   ? (IData)((VL_ULL(0xfffffffffff) 
					      & ((QData)((IData)(
								 ((((0x80000000U 
								     & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)
								     ? 0xfffU
								     : 0U) 
								   << 0x14U) 
								  | (0xfffffU 
								     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									>> 0xcU))))) 
						 << 0xcU)))
				   : ((2U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_ExtSel))
				       ? ((((0x80000000U 
					     & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)
					     ? 0xfffffU
					     : 0U) 
					   << 0xcU) 
					  | ((0xfe0U 
					      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						 >> 0x14U)) 
					     | (0x1fU 
						& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						   >> 7U))))
				       : 0U)))),32);
	vcdp->chgBus  (c+31,((((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) 
			       & ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg) 
				  == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					       >> 0xfU))))
			       ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
			       : vlTOPp->TopPipeline__DOT__Register_io_rs1)),32);
	vcdp->chgBus  (c+32,((((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) 
			       & ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg) 
				  == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					       >> 0x14U))))
			       ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
			       : vlTOPp->TopPipeline__DOT__Register_io_rs2)),32);
	vcdp->chgBus  (c+33,(vlTOPp->TopPipeline__DOT___GEN_53),32);
	vcdp->chgBus  (c+34,((((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__MemReadreg) 
			       & (IData)(vlTOPp->TopPipeline__DOT__Stalling__DOT___T_33))
			       ? vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg
			       : 0U)),32);
	vcdp->chgBit  (c+35,(vlTOPp->TopPipeline__DOT__Stalling_io_stall));
	vcdp->chgBus  (c+36,(vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardA),2);
	vcdp->chgBus  (c+37,(vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardB),2);
	vcdp->chgBus  (c+38,(vlTOPp->TopPipeline__DOT__Branch_io_rs1),32);
	vcdp->chgBus  (c+39,(vlTOPp->TopPipeline__DOT__Branch_io_rs2),32);
	vcdp->chgBit  (c+40,(((0U == (7U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					    >> 0xcU)))
			       ? (vlTOPp->TopPipeline__DOT__Branch_io_rs1 
				  == vlTOPp->TopPipeline__DOT__Branch_io_rs2)
			       : ((1U == (7U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						>> 0xcU)))
				   ? (vlTOPp->TopPipeline__DOT__Branch_io_rs1 
				      != vlTOPp->TopPipeline__DOT__Branch_io_rs2)
				   : ((4U == (7U & 
					      (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					       >> 0xcU)))
				       ? VL_LTS_III(1,32,32, vlTOPp->TopPipeline__DOT__Branch_io_rs1, vlTOPp->TopPipeline__DOT__Branch_io_rs2)
				       : ((5U == (7U 
						  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						     >> 0xcU)))
					   ? VL_GTES_III(1,32,32, vlTOPp->TopPipeline__DOT__Branch_io_rs1, vlTOPp->TopPipeline__DOT__Branch_io_rs2)
					   : ((6U == 
					       (7U 
						& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						   >> 0xcU)))
					       ? (vlTOPp->TopPipeline__DOT__Branch_io_rs1 
						  < vlTOPp->TopPipeline__DOT__Branch_io_rs2)
					       : ((7U 
						   == 
						   (7U 
						    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						       >> 0xcU))) 
						  & (vlTOPp->TopPipeline__DOT__Branch_io_rs1 
						     >= vlTOPp->TopPipeline__DOT__Branch_io_rs2)))))))));
	vcdp->chgBus  (c+41,(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA),4);
	vcdp->chgBus  (c+42,(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_34),4);
	vcdp->chgBit  (c+43,(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load));
	vcdp->chgBit  (c+44,(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store));
	vcdp->chgBit  (c+45,(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch));
	vcdp->chgBit  (c+46,(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_I));
	vcdp->chgBit  (c+47,(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jal));
	vcdp->chgBit  (c+48,(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jalr));
	vcdp->chgBit  (c+49,(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Lui));
	vcdp->chgBus  (c+50,((vlTOPp->TopPipeline__DOT__Jalr_io_in1 
			      + vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_77)),32);
    }
}

void VTopPipeline::traceChgThis__3(VTopPipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+51,((0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)),7);
	vcdp->chgBus  (c+52,(vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg),32);
	vcdp->chgBus  (c+53,(vlTOPp->TopPipeline__DOT__IF_ID__DOT__pcreg),32);
	vcdp->chgBus  (c+54,(((((0x80000000U & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)
				 ? 0xfffffU : 0U) << 0xcU) 
			      | ((0xfe0U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					    >> 0x14U)) 
				 | (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					     >> 7U))))),32);
	vcdp->chgBus  (c+55,((IData)((VL_ULL(0xfffffffffff) 
				      & ((QData)((IData)(
							 ((((0x80000000U 
							     & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)
							     ? 0xfffU
							     : 0U) 
							   << 0x14U) 
							  | (0xfffffU 
							     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								>> 0xcU))))) 
					 << 0xcU)))),32);
	vcdp->chgBus  (c+56,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__AluOpreg),3);
	vcdp->chgBus  (c+57,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__func3reg),3);
	vcdp->chgBit  (c+58,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__func7reg));
	vcdp->chgBit  (c+59,(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg));
	vcdp->chgBus  (c+60,((0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+61,((0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
				       >> 0x14U))),5);
	vcdp->chgBus  (c+62,(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg),5);
	vcdp->chgBus  (c+63,((0x3ffU & (vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024 
					>> 2U))),10);
	vcdp->chgBus  (c+64,(((IData)(4U) + vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024)),32);
	vcdp->chgBus  (c+65,(vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024),32);
	vcdp->chgBus  (c+66,((0xffU & (vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg 
				       >> 2U))),8);
	vcdp->chgBus  (c+67,(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rs2reg),32);
	vcdp->chgBit  (c+68,(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__MemWritereg));
	vcdp->chgBit  (c+69,(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__MemReadreg));
	vcdp->chgBus  (c+70,(vlTOPp->TopPipeline__DOT__IF_ID__DOT__pc4reg),32);
	vcdp->chgBus  (c+71,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__pcreg),32);
	vcdp->chgBus  (c+72,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__pc4reg),32);
	vcdp->chgBit  (c+73,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__MemWritereg));
	vcdp->chgBit  (c+74,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__MemReadreg));
	vcdp->chgBit  (c+75,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__RegWritereg));
	vcdp->chgBus  (c+76,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__OpAreg),2);
	vcdp->chgBit  (c+77,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__OpBreg));
	vcdp->chgBus  (c+78,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__immreg),32);
	vcdp->chgBus  (c+79,((7U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
				    >> 0xcU))),3);
	vcdp->chgBit  (c+80,((1U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
				    >> 0x1eU))));
	vcdp->chgBus  (c+81,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs1reg),32);
	vcdp->chgBus  (c+82,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs2reg),32);
	vcdp->chgBus  (c+83,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs1sreg),5);
	vcdp->chgBus  (c+84,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs2sreg),5);
	vcdp->chgBus  (c+85,((0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
				       >> 7U))),5);
	vcdp->chgBus  (c+86,(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg),5);
	vcdp->chgBus  (c+87,(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg),32);
	vcdp->chgBus  (c+88,(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg),5);
	vcdp->chgBit  (c+89,(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__RegWritereg));
	vcdp->chgBus  (c+90,(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__memreg),32);
	vcdp->chgBus  (c+91,(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__alureg),32);
	vcdp->chgBit  (c+92,(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__MemtoRegreg));
	vcdp->chgBit  (c+93,((0x33U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg))));
	vcdp->chgBus  (c+94,(((0xfe0U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					 >> 0x14U)) 
			      | (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					  >> 7U)))),12);
	vcdp->chgBus  (c+95,(((0x1000U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					  >> 0x13U)) 
			      | ((0x800U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					    << 4U)) 
				 | ((0x7e0U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					       >> 0x14U)) 
				    | (0x1eU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						>> 7U)))))),13);
	vcdp->chgBus  (c+96,(((0x100000U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					    >> 0xbU)) 
			      | ((0xff000U & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg) 
				 | ((0x800U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					       >> 9U)) 
				    | (0x7feU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						 >> 0x14U)))))),21);
	vcdp->chgBus  (c+97,(vlTOPp->TopPipeline__DOT__Register__DOT__register_0),32);
	vcdp->chgBus  (c+98,(vlTOPp->TopPipeline__DOT__Register__DOT__register_1),32);
	vcdp->chgBus  (c+99,(vlTOPp->TopPipeline__DOT__Register__DOT__register_2),32);
	vcdp->chgBus  (c+100,(vlTOPp->TopPipeline__DOT__Register__DOT__register_3),32);
	vcdp->chgBus  (c+101,(vlTOPp->TopPipeline__DOT__Register__DOT__register_4),32);
	vcdp->chgBus  (c+102,(vlTOPp->TopPipeline__DOT__Register__DOT__register_5),32);
	vcdp->chgBus  (c+103,(vlTOPp->TopPipeline__DOT__Register__DOT__register_6),32);
	vcdp->chgBus  (c+104,(vlTOPp->TopPipeline__DOT__Register__DOT__register_7),32);
	vcdp->chgBus  (c+105,(vlTOPp->TopPipeline__DOT__Register__DOT__register_8),32);
	vcdp->chgBus  (c+106,(vlTOPp->TopPipeline__DOT__Register__DOT__register_9),32);
	vcdp->chgBus  (c+107,(vlTOPp->TopPipeline__DOT__Register__DOT__register_10),32);
	vcdp->chgBus  (c+108,(vlTOPp->TopPipeline__DOT__Register__DOT__register_11),32);
	vcdp->chgBus  (c+109,(vlTOPp->TopPipeline__DOT__Register__DOT__register_12),32);
	vcdp->chgBus  (c+110,(vlTOPp->TopPipeline__DOT__Register__DOT__register_13),32);
	vcdp->chgBus  (c+111,(vlTOPp->TopPipeline__DOT__Register__DOT__register_14),32);
	vcdp->chgBus  (c+112,(vlTOPp->TopPipeline__DOT__Register__DOT__register_15),32);
	vcdp->chgBus  (c+113,(vlTOPp->TopPipeline__DOT__Register__DOT__register_16),32);
	vcdp->chgBus  (c+114,(vlTOPp->TopPipeline__DOT__Register__DOT__register_17),32);
	vcdp->chgBus  (c+115,(vlTOPp->TopPipeline__DOT__Register__DOT__register_18),32);
	vcdp->chgBus  (c+116,(vlTOPp->TopPipeline__DOT__Register__DOT__register_19),32);
	vcdp->chgBus  (c+117,(vlTOPp->TopPipeline__DOT__Register__DOT__register_20),32);
	vcdp->chgBus  (c+118,(vlTOPp->TopPipeline__DOT__Register__DOT__register_21),32);
	vcdp->chgBus  (c+119,(vlTOPp->TopPipeline__DOT__Register__DOT__register_22),32);
	vcdp->chgBus  (c+120,(vlTOPp->TopPipeline__DOT__Register__DOT__register_23),32);
	vcdp->chgBus  (c+121,(vlTOPp->TopPipeline__DOT__Register__DOT__register_24),32);
	vcdp->chgBus  (c+122,(vlTOPp->TopPipeline__DOT__Register__DOT__register_25),32);
	vcdp->chgBus  (c+123,(vlTOPp->TopPipeline__DOT__Register__DOT__register_26),32);
	vcdp->chgBus  (c+124,(vlTOPp->TopPipeline__DOT__Register__DOT__register_27),32);
	vcdp->chgBus  (c+125,(vlTOPp->TopPipeline__DOT__Register__DOT__register_28),32);
	vcdp->chgBus  (c+126,(vlTOPp->TopPipeline__DOT__Register__DOT__register_29),32);
	vcdp->chgBus  (c+127,(vlTOPp->TopPipeline__DOT__Register__DOT__register_30),32);
	vcdp->chgBus  (c+128,(vlTOPp->TopPipeline__DOT__Register__DOT__register_31),32);
	vcdp->chgBus  (c+129,((0xffU & (vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg 
					>> 2U))),10);
    }
}

void VTopPipeline::traceChgThis__4(VTopPipeline__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+130,(vlTOPp->clock));
	vcdp->chgBit  (c+131,(vlTOPp->reset));
	vcdp->chgBus  (c+132,(vlTOPp->io_Reg_Out),32);
    }
}
