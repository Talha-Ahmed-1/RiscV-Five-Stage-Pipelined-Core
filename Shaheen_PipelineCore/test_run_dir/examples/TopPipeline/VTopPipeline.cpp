// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopPipeline.h for the primary calling header

#include "VTopPipeline.h"      // For This
#include "VTopPipeline__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTopPipeline) {
    VTopPipeline__Syms* __restrict vlSymsp = __VlSymsp = new VTopPipeline__Syms(this, name());
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTopPipeline::__Vconfigure(VTopPipeline__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTopPipeline::~VTopPipeline() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VTopPipeline::eval() {
    VTopPipeline__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VTopPipeline::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VTopPipeline::_eval_initial_loop(VTopPipeline__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void VTopPipeline::_initial__TOP__1(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_initial__TOP__1\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,287,0,9);
    // Body
    // INITIAL at /home/talha/riscv/pipeline/test_run_dir/examples/TopPipeline/TopPipeline.Memory.mem.v:7
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x2f616263U;
    __Vtemp1[2U] = 0x6c696e65U;
    __Vtemp1[3U] = 0x70697065U;
    __Vtemp1[4U] = 0x7363762fU;
    __Vtemp1[5U] = 0x612f7269U;
    __Vtemp1[6U] = 0x74616c68U;
    __Vtemp1[7U] = 0x6f6d652fU;
    __Vtemp1[8U] = 0x2f68U;
    VL_READMEM_W (true,32,1024, 0,9, __Vtemp1, vlTOPp->TopPipeline__DOT__Memory__DOT__mem
		  ,0,~0);
}

VL_INLINE_OPT void VTopPipeline::_sequent__TOP__2(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_sequent__TOP__2\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__TopPipeline__DOT__DataMemory__DOT__mem__v0,0,0);
    //char	__VpadToAlign65[1];
    VL_SIG16(__Vdlyvdim0__TopPipeline__DOT__DataMemory__DOT__mem__v0,9,0);
    VL_SIG(__Vdlyvval__TopPipeline__DOT__DataMemory__DOT__mem__v0,31,0);
    // Body
    __Vdlyvset__TopPipeline__DOT__DataMemory__DOT__mem__v0 = 0U;
    // ALWAYS at TopPipeline.v:1884
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__pc4reg = 
	((IData)(vlTOPp->reset) ? 0U : vlTOPp->TopPipeline__DOT__IF_ID__DOT__pc4reg);
    // ALWAYS at TopPipeline.v:1879
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__pcreg = ((IData)(vlTOPp->reset)
						    ? 0U
						    : vlTOPp->TopPipeline__DOT__IF_ID__DOT__pcreg);
    // ALWAYS at TopPipeline.v:2173
    vlTOPp->TopPipeline__DOT__MEM_WB__DOT__memreg = 
	((IData)(vlTOPp->reset) ? 0U : vlTOPp->TopPipeline__DOT__DataMemory__DOT__mem___05FT_22_data);
    // ALWAYS at TopPipeline.v:2178
    vlTOPp->TopPipeline__DOT__MEM_WB__DOT__alureg = 
	((IData)(vlTOPp->reset) ? 0U : vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg);
    // ALWAYS at TopPipeline.v:1894
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__func3reg 
	= (7U & ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						>> 0xcU)));
    // ALWAYS at TopPipeline.v:1899
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__func7reg 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					       >> 0x1eU)));
    // ALWAYS at TopPipeline.v:1889
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__immreg = 
	((IData)(vlTOPp->reset) ? 0U : ((0U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_ExtSel))
					 ? vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_77
					 : ((1U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_ExtSel))
					     ? (IData)(
						       (VL_ULL(0xfffffffffff) 
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
					     : ((2U 
						 == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_ExtSel))
						 ? 
						((((0x80000000U 
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
						 : 0U))));
    // ALWAYS at TopPipeline.v:1959
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__OpBreg = 
	((~ (IData)(vlTOPp->reset)) & ((0x33U != (0x7fU 
						  & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
				       & ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load) 
					  | ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store) 
					     | ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch)) 
						& ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_I) 
						   | (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2__DOT___GEN_14)))))));
    // ALWAYS at TopPipeline.v:1949
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__AluOpreg 
	= ((IData)(vlTOPp->reset) ? 0U : ((0x33U == 
					   (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg))
					   ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load)
						    ? 4U
						    : 
						   ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store)
						     ? 5U
						     : 
						    ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch)
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
							  : 7U)))))))));
    // ALWAYS at TopPipeline.v:1954
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__OpAreg = 
	((IData)(vlTOPp->reset) ? 0U : ((0x33U == (0x7fU 
						   & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg))
					 ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load)
						  ? 0U
						  : 
						 ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store)
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
						        : 0U)))))))));
    // ALWAYS at TopPipeline.v:1613
    if (vlTOPp->TopPipeline__DOT__EX_MEM__DOT__MemWritereg) {
	__Vdlyvval__TopPipeline__DOT__DataMemory__DOT__mem__v0 
	    = vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rs2reg;
	__Vdlyvset__TopPipeline__DOT__DataMemory__DOT__mem__v0 = 1U;
	__Vdlyvdim0__TopPipeline__DOT__DataMemory__DOT__mem__v0 
	    = (0xffU & (vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg 
			>> 2U));
    }
    // ALWAYS at TopPipeline.v:2193
    vlTOPp->TopPipeline__DOT__MEM_WB__DOT__MemtoRegreg 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__MemReadreg));
    // ALWAYS at TopPipeline.v:1919
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs2sreg = 
	(0x1fU & ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						 >> 0x14U)));
    // ALWAYS at TopPipeline.v:1914
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs1sreg = 
	(0x1fU & ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						 >> 0xfU)));
    // ALWAYS at TopPipeline.v:1083
    vlTOPp->TopPipeline__DOT__Register__DOT__register_0 
	= ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg)
	    ? ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))
	        ? 0U : ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))
			 ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
			 : 0U)) : 0U);
    // ALWAYS at TopPipeline.v:1094
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((1U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_1 = 0U;
	    }
	} else {
	    if ((1U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_1 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1108
    vlTOPp->TopPipeline__DOT__Register__DOT__register_2 
	= ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg)
	    ? ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))
	        ? ((2U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))
		    ? 0U : 0x200U) : ((2U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))
				       ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
				       : 0x200U)) : 0x200U);
    // ALWAYS at TopPipeline.v:1122
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((3U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_3 = 0U;
	    }
	} else {
	    if ((3U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_3 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1133
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((4U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_4 = 0U;
	    }
	} else {
	    if ((4U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_4 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1144
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((5U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_5 = 0U;
	    }
	} else {
	    if ((5U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_5 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1155
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((6U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_6 = 0U;
	    }
	} else {
	    if ((6U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_6 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1166
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((7U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_7 = 0U;
	    }
	} else {
	    if ((7U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_7 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1177
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((8U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_8 = 0U;
	    }
	} else {
	    if ((8U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_8 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1188
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((9U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_9 = 0U;
	    }
	} else {
	    if ((9U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_9 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1199
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0xaU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_10 = 0U;
	    }
	} else {
	    if ((0xaU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_10 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1210
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0xbU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_11 = 0U;
	    }
	} else {
	    if ((0xbU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_11 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1221
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0xcU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_12 = 0U;
	    }
	} else {
	    if ((0xcU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_12 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1232
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0xdU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_13 = 0U;
	    }
	} else {
	    if ((0xdU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_13 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1243
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0xeU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_14 = 0U;
	    }
	} else {
	    if ((0xeU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_14 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1254
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0xfU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_15 = 0U;
	    }
	} else {
	    if ((0xfU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_15 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1265
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x10U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_16 = 0U;
	    }
	} else {
	    if ((0x10U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_16 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1276
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x11U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_17 = 0U;
	    }
	} else {
	    if ((0x11U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_17 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1287
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x12U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_18 = 0U;
	    }
	} else {
	    if ((0x12U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_18 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1298
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x13U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_19 = 0U;
	    }
	} else {
	    if ((0x13U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_19 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1309
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x14U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_20 = 0U;
	    }
	} else {
	    if ((0x14U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_20 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1320
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x15U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_21 = 0U;
	    }
	} else {
	    if ((0x15U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_21 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1331
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x16U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_22 = 0U;
	    }
	} else {
	    if ((0x16U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_22 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1342
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x17U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_23 = 0U;
	    }
	} else {
	    if ((0x17U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_23 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1353
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x18U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_24 = 0U;
	    }
	} else {
	    if ((0x18U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_24 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1364
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x19U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_25 = 0U;
	    }
	} else {
	    if ((0x19U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_25 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1375
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x1aU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_26 = 0U;
	    }
	} else {
	    if ((0x1aU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_26 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1386
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x1bU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_27 = 0U;
	    }
	} else {
	    if ((0x1bU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_27 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1397
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x1cU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_28 = 0U;
	    }
	} else {
	    if ((0x1cU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_28 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1408
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x1dU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_29 = 0U;
	    }
	} else {
	    if ((0x1dU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_29 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1419
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x1eU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_30 = 0U;
	    }
	} else {
	    if ((0x1eU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_30 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1430
    if (vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) {
	if ((0U == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
	    if ((0x1fU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_31 = 0U;
	    }
	} else {
	    if ((0x1fU == (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg))) {
		vlTOPp->TopPipeline__DOT__Register__DOT__register_31 
		    = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
	    }
	}
    }
    // ALWAYS at TopPipeline.v:1904
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs1reg = 
	((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) 
					 & ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg) 
					    == (0x1fU 
						& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						   >> 0xfU))))
					 ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
					 : vlTOPp->TopPipeline__DOT__Register_io_rs1));
    // ALWAYS at TopPipeline.v:1909
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs2reg = 
	((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) 
					 & ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg) 
					    == (0x1fU 
						& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						   >> 0x14U))))
					 ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
					 : vlTOPp->TopPipeline__DOT__Register_io_rs2));
    // ALWAYSPOST at TopPipeline.v:1615
    if (__Vdlyvset__TopPipeline__DOT__DataMemory__DOT__mem__v0) {
	vlTOPp->TopPipeline__DOT__DataMemory__DOT__mem[__Vdlyvdim0__TopPipeline__DOT__DataMemory__DOT__mem__v0] 
	    = __Vdlyvval__TopPipeline__DOT__DataMemory__DOT__mem__v0;
    }
    // ALWAYS at TopPipeline.v:1683
    vlTOPp->TopPipeline__DOT__IF_ID__DOT__pc4reg = 
	((IData)(vlTOPp->reset) ? 0U : ((1U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
					 ? ((IData)(vlTOPp->TopPipeline__DOT___T_27)
					     ? 0U : 
					    ((IData)(4U) 
					     + vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024))
					 : ((2U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
					     ? 0U : 
					    ((3U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
					      ? 0U : 
					     ((IData)(4U) 
					      + vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024)))));
    // ALWAYS at TopPipeline.v:1678
    vlTOPp->TopPipeline__DOT__IF_ID__DOT__pcreg = ((IData)(vlTOPp->reset)
						    ? 0U
						    : 
						   ((1U 
						     == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
						     ? 
						    ((IData)(vlTOPp->TopPipeline__DOT___T_27)
						      ? 0U
						      : vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024)
						     : 
						    ((2U 
						      == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
						      ? 0U
						      : 
						     ((3U 
						       == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
						       ? 0U
						       : vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024))));
    vlTOPp->TopPipeline__DOT__AluControl_io_out = (
						   ((0U 
						     == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__AluOpreg)) 
						    | (1U 
						       == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__AluOpreg)))
						    ? 
						   (((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__func7reg) 
						     << 3U) 
						    | (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__func3reg))
						    : 
						   (((5U 
						      == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__AluOpreg)) 
						     | (4U 
							== (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__AluOpreg)))
						     ? 0U
						     : 
						    ((3U 
						      == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__AluOpreg))
						      ? 0x1fU
						      : 
						     ((2U 
						       == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__AluOpreg))
						       ? 
						      (0x10U 
						       | (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__func3reg))
						       : 0U))));
    // ALWAYS at TopPipeline.v:2060
    vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rs2reg = 
	((IData)(vlTOPp->reset) ? 0U : vlTOPp->TopPipeline__DOT___GEN_53);
    // ALWAYS at TopPipeline.v:2065
    vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg = 
	((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_19));
    // ALWAYS at TopPipeline.v:2075
    vlTOPp->TopPipeline__DOT__EX_MEM__DOT__MemWritereg 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__MemWritereg));
    vlTOPp->TopPipeline__DOT__Register_io_WriteData 
	= ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__MemtoRegreg)
	    ? vlTOPp->TopPipeline__DOT__MEM_WB__DOT__memreg
	    : vlTOPp->TopPipeline__DOT__MEM_WB__DOT__alureg);
    // ALWAYS at TopPipeline.v:2080
    vlTOPp->TopPipeline__DOT__EX_MEM__DOT__MemReadreg 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__MemReadreg));
    // ALWAYS at TopPipeline.v:2188
    vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__RegWritereg));
    // ALWAYS at TopPipeline.v:2183
    vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg = 
	((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg));
    // ALWAYS at TopPipeline.v:1530
    vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024 = ((IData)(vlTOPp->reset)
						    ? 0U
						    : vlTOPp->TopPipeline__DOT__Pc_io_input);
    vlTOPp->TopPipeline__DOT__DataMemory__DOT__mem___05FT_22_data 
	= vlTOPp->TopPipeline__DOT__DataMemory__DOT__mem
	[(0xffU & (vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg 
		   >> 2U))];
    // ALWAYS at TopPipeline.v:1929
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__MemWritereg 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->TopPipeline__DOT__Stalling_io_stall)) 
					 & ((0x33U 
					     != (0x7fU 
						 & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
					    & ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load)) 
					       & (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store)))));
    // ALWAYS at TopPipeline.v:1934
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__MemReadreg 
	= ((~ (IData)(vlTOPp->reset)) & ((0x33U != 
					  (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
					 & (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load)));
    // ALWAYS at TopPipeline.v:2085
    vlTOPp->TopPipeline__DOT__EX_MEM__DOT__RegWritereg 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__RegWritereg));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_226 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__MemtoRegreg));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_159 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg)) 
	   & (~ (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__MemtoRegreg)));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_41 
	= ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) 
	   & (0U != (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg)));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_43 
	= ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg) 
	   == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs2sreg));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_42 
	= ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg) 
	   == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs1sreg));
    // ALWAYS at TopPipeline.v:2070
    vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg = 
	((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg));
    vlTOPp->TopPipeline__DOT__Memory__DOT__mem___05FT_11_data 
	= vlTOPp->TopPipeline__DOT__Memory__DOT__mem
	[(0x3ffU & (vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024 
		    >> 2U))];
    // ALWAYS at TopPipeline.v:1939
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__RegWritereg 
	= ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->TopPipeline__DOT__Stalling_io_stall)) 
					 & ((0x33U 
					     == (0x7fU 
						 & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
					    | ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load) 
					       | ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store)) 
						  & ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch)) 
						     & ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_I) 
							| ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jal) 
							   | ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jalr) 
							      | (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Lui))))))))));
    // ALWAYS at TopPipeline.v:1924
    vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg = (0x1fU 
						   & ((IData)(vlTOPp->reset)
						       ? 0U
						       : 
						      (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						       >> 7U)));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_109 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__MemReadreg));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_62 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg)) 
	   & (~ (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__MemReadreg)));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_29 
	= ((IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg) 
	   == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs2sreg));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_27 
	= ((IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__RegWritereg) 
	   & (0U != (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg)));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_28 
	= ((IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg) 
	   == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs1sreg));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_35 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg)) 
	   & (~ (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__MemReadreg)));
    // ALWAYS at TopPipeline.v:1688
    vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg = 
	((IData)(vlTOPp->reset) ? 0U : ((1U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
					 ? ((IData)(vlTOPp->TopPipeline__DOT___T_27)
					     ? 0U : vlTOPp->TopPipeline__DOT___GEN_0)
					 : ((2U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
					     ? 0U : 
					    ((3U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
					      ? 0U : vlTOPp->TopPipeline__DOT___GEN_0))));
    vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_41 
	= ((((0x80000000U & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)
	      ? 0x7ffffU : 0U) << 0xdU) | ((0x1000U 
					    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					       >> 0x13U)) 
					   | ((0x800U 
					       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						  << 4U)) 
					      | ((0x7e0U 
						  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						     >> 0x14U)) 
						 | (0x1eU 
						    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						       >> 7U))))));
    vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_58 
	= ((QData)((IData)(((((0x80000000U & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)
			       ? 0xfffU : 0U) << 0x14U) 
			    | ((0x80000U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					    >> 0xcU)) 
			       | ((0x7f800U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					       >> 1U)) 
				  | ((0x400U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						>> 0xaU)) 
				     | (0x3ffU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						  >> 0x15U)))))))) 
	   << 1U);
    vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_77 
	= ((((0x80000000U & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)
	      ? 0xfffffU : 0U) << 0xcU) | (0xfffU & 
					   (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					    >> 0x14U)));
    vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Lui 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & ((3U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	      & ((0x23U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		 & ((0x63U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		    & ((0x13U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		       & ((0x67U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
			  & ((0x6fU != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
			     & (0x37U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)))))))));
    vlTOPp->TopPipeline__DOT__Stalling__DOT___T_33 
	= (((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg) 
	    == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
			 >> 0xfU))) | ((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg) 
				       == (0x1fU & 
					   (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					    >> 0x14U))));
    vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_I 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & ((3U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	      & ((0x23U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		 & ((0x63U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		    & (0x13U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg))))));
    vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jal 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & ((3U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	      & ((0x23U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		 & ((0x63U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		    & ((0x13U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		       & ((0x67U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
			  & (0x6fU == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg))))))));
    vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jalr 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & ((3U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	      & ((0x23U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		 & ((0x63U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		    & ((0x13U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		       & (0x67U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)))))));
    vlTOPp->TopPipeline__DOT__Register_io_rs2 = ((0x1fU 
						  == 
						  (0x1fU 
						   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						      >> 0x14U)))
						  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_31
						  : 
						 ((0x1eU 
						   == 
						   (0x1fU 
						    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						       >> 0x14U)))
						   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_30
						   : 
						  ((0x1dU 
						    == 
						    (0x1fU 
						     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							>> 0x14U)))
						    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_29
						    : 
						   ((0x1cU 
						     == 
						     (0x1fU 
						      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							 >> 0x14U)))
						     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_28
						     : 
						    ((0x1bU 
						      == 
						      (0x1fU 
						       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							  >> 0x14U)))
						      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_27
						      : 
						     ((0x1aU 
						       == 
						       (0x1fU 
							& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							   >> 0x14U)))
						       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_26
						       : 
						      ((0x19U 
							== 
							(0x1fU 
							 & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							    >> 0x14U)))
						        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_25
						        : 
						       ((0x18U 
							 == 
							 (0x1fU 
							  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							     >> 0x14U)))
							 ? vlTOPp->TopPipeline__DOT__Register__DOT__register_24
							 : 
							((0x17U 
							  == 
							  (0x1fU 
							   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							      >> 0x14U)))
							  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_23
							  : 
							 ((0x16U 
							   == 
							   (0x1fU 
							    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							       >> 0x14U)))
							   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_22
							   : 
							  ((0x15U 
							    == 
							    (0x1fU 
							     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								>> 0x14U)))
							    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_21
							    : 
							   ((0x14U 
							     == 
							     (0x1fU 
							      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								 >> 0x14U)))
							     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_20
							     : 
							    ((0x13U 
							      == 
							      (0x1fU 
							       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								  >> 0x14U)))
							      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_19
							      : 
							     ((0x12U 
							       == 
							       (0x1fU 
								& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								   >> 0x14U)))
							       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_18
							       : 
							      ((0x11U 
								== 
								(0x1fU 
								 & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								    >> 0x14U)))
							        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_17
							        : 
							       ((0x10U 
								 == 
								 (0x1fU 
								  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								     >> 0x14U)))
								 ? vlTOPp->TopPipeline__DOT__Register__DOT__register_16
								 : 
								((0xfU 
								  == 
								  (0x1fU 
								   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								      >> 0x14U)))
								  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_15
								  : 
								 ((0xeU 
								   == 
								   (0x1fU 
								    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								       >> 0x14U)))
								   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_14
								   : 
								  ((0xdU 
								    == 
								    (0x1fU 
								     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									>> 0x14U)))
								    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_13
								    : 
								   ((0xcU 
								     == 
								     (0x1fU 
								      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									 >> 0x14U)))
								     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_12
								     : 
								    ((0xbU 
								      == 
								      (0x1fU 
								       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									  >> 0x14U)))
								      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_11
								      : 
								     ((0xaU 
								       == 
								       (0x1fU 
									& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									   >> 0x14U)))
								       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_10
								       : 
								      ((9U 
									== 
									(0x1fU 
									 & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									    >> 0x14U)))
								        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_9
								        : 
								       ((8U 
									 == 
									 (0x1fU 
									  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									     >> 0x14U)))
									 ? vlTOPp->TopPipeline__DOT__Register__DOT__register_8
									 : 
									((7U 
									  == 
									  (0x1fU 
									   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									      >> 0x14U)))
									  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_7
									  : 
									 ((6U 
									   == 
									   (0x1fU 
									    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									       >> 0x14U)))
									   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_6
									   : 
									  ((5U 
									    == 
									    (0x1fU 
									     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0x14U)))
									    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_5
									    : 
									   ((4U 
									     == 
									     (0x1fU 
									      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0x14U)))
									     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_4
									     : 
									    ((3U 
									      == 
									      (0x1fU 
									       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0x14U)))
									      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_3
									      : 
									     ((2U 
									       == 
									       (0x1fU 
										& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0x14U)))
									       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_2
									       : 
									      ((1U 
										== 
										(0x1fU 
										& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0x14U)))
									        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_1
									        : vlTOPp->TopPipeline__DOT__Register__DOT__register_0)))))))))))))))))))))))))))))));
    vlTOPp->TopPipeline__DOT__Register_io_rs1 = ((0x1fU 
						  == 
						  (0x1fU 
						   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						      >> 0xfU)))
						  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_31
						  : 
						 ((0x1eU 
						   == 
						   (0x1fU 
						    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						       >> 0xfU)))
						   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_30
						   : 
						  ((0x1dU 
						    == 
						    (0x1fU 
						     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							>> 0xfU)))
						    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_29
						    : 
						   ((0x1cU 
						     == 
						     (0x1fU 
						      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							 >> 0xfU)))
						     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_28
						     : 
						    ((0x1bU 
						      == 
						      (0x1fU 
						       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							  >> 0xfU)))
						      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_27
						      : 
						     ((0x1aU 
						       == 
						       (0x1fU 
							& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							   >> 0xfU)))
						       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_26
						       : 
						      ((0x19U 
							== 
							(0x1fU 
							 & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							    >> 0xfU)))
						        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_25
						        : 
						       ((0x18U 
							 == 
							 (0x1fU 
							  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							     >> 0xfU)))
							 ? vlTOPp->TopPipeline__DOT__Register__DOT__register_24
							 : 
							((0x17U 
							  == 
							  (0x1fU 
							   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							      >> 0xfU)))
							  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_23
							  : 
							 ((0x16U 
							   == 
							   (0x1fU 
							    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							       >> 0xfU)))
							   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_22
							   : 
							  ((0x15U 
							    == 
							    (0x1fU 
							     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								>> 0xfU)))
							    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_21
							    : 
							   ((0x14U 
							     == 
							     (0x1fU 
							      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								 >> 0xfU)))
							     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_20
							     : 
							    ((0x13U 
							      == 
							      (0x1fU 
							       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								  >> 0xfU)))
							      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_19
							      : 
							     ((0x12U 
							       == 
							       (0x1fU 
								& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								   >> 0xfU)))
							       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_18
							       : 
							      ((0x11U 
								== 
								(0x1fU 
								 & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								    >> 0xfU)))
							        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_17
							        : 
							       ((0x10U 
								 == 
								 (0x1fU 
								  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								     >> 0xfU)))
								 ? vlTOPp->TopPipeline__DOT__Register__DOT__register_16
								 : 
								((0xfU 
								  == 
								  (0x1fU 
								   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								      >> 0xfU)))
								  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_15
								  : 
								 ((0xeU 
								   == 
								   (0x1fU 
								    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								       >> 0xfU)))
								   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_14
								   : 
								  ((0xdU 
								    == 
								    (0x1fU 
								     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									>> 0xfU)))
								    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_13
								    : 
								   ((0xcU 
								     == 
								     (0x1fU 
								      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									 >> 0xfU)))
								     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_12
								     : 
								    ((0xbU 
								      == 
								      (0x1fU 
								       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									  >> 0xfU)))
								      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_11
								      : 
								     ((0xaU 
								       == 
								       (0x1fU 
									& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									   >> 0xfU)))
								       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_10
								       : 
								      ((9U 
									== 
									(0x1fU 
									 & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									    >> 0xfU)))
								        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_9
								        : 
								       ((8U 
									 == 
									 (0x1fU 
									  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									     >> 0xfU)))
									 ? vlTOPp->TopPipeline__DOT__Register__DOT__register_8
									 : 
									((7U 
									  == 
									  (0x1fU 
									   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									      >> 0xfU)))
									  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_7
									  : 
									 ((6U 
									   == 
									   (0x1fU 
									    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									       >> 0xfU)))
									   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_6
									   : 
									  ((5U 
									    == 
									    (0x1fU 
									     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0xfU)))
									    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_5
									    : 
									   ((4U 
									     == 
									     (0x1fU 
									      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0xfU)))
									     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_4
									     : 
									    ((3U 
									      == 
									      (0x1fU 
									       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0xfU)))
									      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_3
									      : 
									     ((2U 
									       == 
									       (0x1fU 
										& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0xfU)))
									       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_2
									       : 
									      ((1U 
										== 
										(0x1fU 
										& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0xfU)))
									        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_1
									        : vlTOPp->TopPipeline__DOT__Register__DOT__register_0)))))))))))))))))))))))))))))));
    vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & (3U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)));
    vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & ((3U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	      & (0x23U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg))));
    vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & ((3U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	      & ((0x23U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		 & (0x63U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)))));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_176 
	= ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg) 
	   == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
			>> 0xfU)));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_178 
	= ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg) 
	   == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
			>> 0x14U)));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_73 
	= ((IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg) 
	   == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
			>> 0x14U)));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_71 
	= ((IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg) 
	   == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
			>> 0xfU)));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_38 
	= ((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg) 
	   == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
			>> 0x14U)));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_36 
	= ((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg) 
	   == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
			>> 0xfU)));
}

void VTopPipeline::_settle__TOP__3(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_settle__TOP__3\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopPipeline__DOT__AluControl_io_out = (
						   ((0U 
						     == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__AluOpreg)) 
						    | (1U 
						       == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__AluOpreg)))
						    ? 
						   (((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__func7reg) 
						     << 3U) 
						    | (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__func3reg))
						    : 
						   (((5U 
						      == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__AluOpreg)) 
						     | (4U 
							== (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__AluOpreg)))
						     ? 0U
						     : 
						    ((3U 
						      == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__AluOpreg))
						      ? 0x1fU
						      : 
						     ((2U 
						       == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__AluOpreg))
						       ? 
						      (0x10U 
						       | (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__func3reg))
						       : 0U))));
    vlTOPp->TopPipeline__DOT__Register_io_WriteData 
	= ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__MemtoRegreg)
	    ? vlTOPp->TopPipeline__DOT__MEM_WB__DOT__memreg
	    : vlTOPp->TopPipeline__DOT__MEM_WB__DOT__alureg);
    vlTOPp->TopPipeline__DOT__DataMemory__DOT__mem___05FT_22_data 
	= vlTOPp->TopPipeline__DOT__DataMemory__DOT__mem
	[(0xffU & (vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg 
		   >> 2U))];
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_226 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__MemtoRegreg));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_159 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg)) 
	   & (~ (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__MemtoRegreg)));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_41 
	= ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__RegWritereg) 
	   & (0U != (IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg)));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_43 
	= ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg) 
	   == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs2sreg));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_42 
	= ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg) 
	   == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs1sreg));
    vlTOPp->TopPipeline__DOT__Memory__DOT__mem___05FT_11_data 
	= vlTOPp->TopPipeline__DOT__Memory__DOT__mem
	[(0x3ffU & (vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024 
		    >> 2U))];
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_109 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__MemReadreg));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_62 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg)) 
	   & (~ (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__MemReadreg)));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_29 
	= ((IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg) 
	   == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs2sreg));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_27 
	= ((IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__RegWritereg) 
	   & (0U != (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg)));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_28 
	= ((IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg) 
	   == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs1sreg));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_35 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg)) 
	   & (~ (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__MemReadreg)));
    vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_41 
	= ((((0x80000000U & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)
	      ? 0x7ffffU : 0U) << 0xdU) | ((0x1000U 
					    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					       >> 0x13U)) 
					   | ((0x800U 
					       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						  << 4U)) 
					      | ((0x7e0U 
						  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						     >> 0x14U)) 
						 | (0x1eU 
						    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						       >> 7U))))));
    vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_58 
	= ((QData)((IData)(((((0x80000000U & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)
			       ? 0xfffU : 0U) << 0x14U) 
			    | ((0x80000U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					    >> 0xcU)) 
			       | ((0x7f800U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					       >> 1U)) 
				  | ((0x400U & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						>> 0xaU)) 
				     | (0x3ffU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						  >> 0x15U)))))))) 
	   << 1U);
    vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_77 
	= ((((0x80000000U & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)
	      ? 0xfffffU : 0U) << 0xcU) | (0xfffU & 
					   (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					    >> 0x14U)));
    vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Lui 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & ((3U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	      & ((0x23U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		 & ((0x63U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		    & ((0x13U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		       & ((0x67U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
			  & ((0x6fU != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
			     & (0x37U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)))))))));
    vlTOPp->TopPipeline__DOT__Stalling__DOT___T_33 
	= (((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg) 
	    == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
			 >> 0xfU))) | ((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg) 
				       == (0x1fU & 
					   (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					    >> 0x14U))));
    vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_I 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & ((3U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	      & ((0x23U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		 & ((0x63U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		    & (0x13U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg))))));
    vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jal 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & ((3U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	      & ((0x23U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		 & ((0x63U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		    & ((0x13U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		       & ((0x67U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
			  & (0x6fU == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg))))))));
    vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jalr 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & ((3U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	      & ((0x23U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		 & ((0x63U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		    & ((0x13U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		       & (0x67U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)))))));
    vlTOPp->TopPipeline__DOT__Register_io_rs2 = ((0x1fU 
						  == 
						  (0x1fU 
						   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						      >> 0x14U)))
						  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_31
						  : 
						 ((0x1eU 
						   == 
						   (0x1fU 
						    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						       >> 0x14U)))
						   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_30
						   : 
						  ((0x1dU 
						    == 
						    (0x1fU 
						     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							>> 0x14U)))
						    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_29
						    : 
						   ((0x1cU 
						     == 
						     (0x1fU 
						      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							 >> 0x14U)))
						     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_28
						     : 
						    ((0x1bU 
						      == 
						      (0x1fU 
						       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							  >> 0x14U)))
						      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_27
						      : 
						     ((0x1aU 
						       == 
						       (0x1fU 
							& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							   >> 0x14U)))
						       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_26
						       : 
						      ((0x19U 
							== 
							(0x1fU 
							 & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							    >> 0x14U)))
						        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_25
						        : 
						       ((0x18U 
							 == 
							 (0x1fU 
							  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							     >> 0x14U)))
							 ? vlTOPp->TopPipeline__DOT__Register__DOT__register_24
							 : 
							((0x17U 
							  == 
							  (0x1fU 
							   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							      >> 0x14U)))
							  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_23
							  : 
							 ((0x16U 
							   == 
							   (0x1fU 
							    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							       >> 0x14U)))
							   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_22
							   : 
							  ((0x15U 
							    == 
							    (0x1fU 
							     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								>> 0x14U)))
							    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_21
							    : 
							   ((0x14U 
							     == 
							     (0x1fU 
							      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								 >> 0x14U)))
							     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_20
							     : 
							    ((0x13U 
							      == 
							      (0x1fU 
							       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								  >> 0x14U)))
							      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_19
							      : 
							     ((0x12U 
							       == 
							       (0x1fU 
								& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								   >> 0x14U)))
							       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_18
							       : 
							      ((0x11U 
								== 
								(0x1fU 
								 & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								    >> 0x14U)))
							        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_17
							        : 
							       ((0x10U 
								 == 
								 (0x1fU 
								  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								     >> 0x14U)))
								 ? vlTOPp->TopPipeline__DOT__Register__DOT__register_16
								 : 
								((0xfU 
								  == 
								  (0x1fU 
								   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								      >> 0x14U)))
								  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_15
								  : 
								 ((0xeU 
								   == 
								   (0x1fU 
								    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								       >> 0x14U)))
								   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_14
								   : 
								  ((0xdU 
								    == 
								    (0x1fU 
								     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									>> 0x14U)))
								    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_13
								    : 
								   ((0xcU 
								     == 
								     (0x1fU 
								      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									 >> 0x14U)))
								     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_12
								     : 
								    ((0xbU 
								      == 
								      (0x1fU 
								       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									  >> 0x14U)))
								      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_11
								      : 
								     ((0xaU 
								       == 
								       (0x1fU 
									& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									   >> 0x14U)))
								       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_10
								       : 
								      ((9U 
									== 
									(0x1fU 
									 & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									    >> 0x14U)))
								        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_9
								        : 
								       ((8U 
									 == 
									 (0x1fU 
									  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									     >> 0x14U)))
									 ? vlTOPp->TopPipeline__DOT__Register__DOT__register_8
									 : 
									((7U 
									  == 
									  (0x1fU 
									   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									      >> 0x14U)))
									  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_7
									  : 
									 ((6U 
									   == 
									   (0x1fU 
									    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									       >> 0x14U)))
									   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_6
									   : 
									  ((5U 
									    == 
									    (0x1fU 
									     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0x14U)))
									    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_5
									    : 
									   ((4U 
									     == 
									     (0x1fU 
									      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0x14U)))
									     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_4
									     : 
									    ((3U 
									      == 
									      (0x1fU 
									       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0x14U)))
									      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_3
									      : 
									     ((2U 
									       == 
									       (0x1fU 
										& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0x14U)))
									       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_2
									       : 
									      ((1U 
										== 
										(0x1fU 
										& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0x14U)))
									        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_1
									        : vlTOPp->TopPipeline__DOT__Register__DOT__register_0)))))))))))))))))))))))))))))));
    vlTOPp->TopPipeline__DOT__Register_io_rs1 = ((0x1fU 
						  == 
						  (0x1fU 
						   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						      >> 0xfU)))
						  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_31
						  : 
						 ((0x1eU 
						   == 
						   (0x1fU 
						    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						       >> 0xfU)))
						   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_30
						   : 
						  ((0x1dU 
						    == 
						    (0x1fU 
						     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							>> 0xfU)))
						    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_29
						    : 
						   ((0x1cU 
						     == 
						     (0x1fU 
						      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							 >> 0xfU)))
						     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_28
						     : 
						    ((0x1bU 
						      == 
						      (0x1fU 
						       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							  >> 0xfU)))
						      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_27
						      : 
						     ((0x1aU 
						       == 
						       (0x1fU 
							& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							   >> 0xfU)))
						       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_26
						       : 
						      ((0x19U 
							== 
							(0x1fU 
							 & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							    >> 0xfU)))
						        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_25
						        : 
						       ((0x18U 
							 == 
							 (0x1fU 
							  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							     >> 0xfU)))
							 ? vlTOPp->TopPipeline__DOT__Register__DOT__register_24
							 : 
							((0x17U 
							  == 
							  (0x1fU 
							   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							      >> 0xfU)))
							  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_23
							  : 
							 ((0x16U 
							   == 
							   (0x1fU 
							    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							       >> 0xfU)))
							   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_22
							   : 
							  ((0x15U 
							    == 
							    (0x1fU 
							     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								>> 0xfU)))
							    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_21
							    : 
							   ((0x14U 
							     == 
							     (0x1fU 
							      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								 >> 0xfU)))
							     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_20
							     : 
							    ((0x13U 
							      == 
							      (0x1fU 
							       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								  >> 0xfU)))
							      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_19
							      : 
							     ((0x12U 
							       == 
							       (0x1fU 
								& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								   >> 0xfU)))
							       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_18
							       : 
							      ((0x11U 
								== 
								(0x1fU 
								 & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								    >> 0xfU)))
							        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_17
							        : 
							       ((0x10U 
								 == 
								 (0x1fU 
								  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								     >> 0xfU)))
								 ? vlTOPp->TopPipeline__DOT__Register__DOT__register_16
								 : 
								((0xfU 
								  == 
								  (0x1fU 
								   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								      >> 0xfU)))
								  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_15
								  : 
								 ((0xeU 
								   == 
								   (0x1fU 
								    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
								       >> 0xfU)))
								   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_14
								   : 
								  ((0xdU 
								    == 
								    (0x1fU 
								     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									>> 0xfU)))
								    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_13
								    : 
								   ((0xcU 
								     == 
								     (0x1fU 
								      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									 >> 0xfU)))
								     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_12
								     : 
								    ((0xbU 
								      == 
								      (0x1fU 
								       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									  >> 0xfU)))
								      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_11
								      : 
								     ((0xaU 
								       == 
								       (0x1fU 
									& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									   >> 0xfU)))
								       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_10
								       : 
								      ((9U 
									== 
									(0x1fU 
									 & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									    >> 0xfU)))
								        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_9
								        : 
								       ((8U 
									 == 
									 (0x1fU 
									  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									     >> 0xfU)))
									 ? vlTOPp->TopPipeline__DOT__Register__DOT__register_8
									 : 
									((7U 
									  == 
									  (0x1fU 
									   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									      >> 0xfU)))
									  ? vlTOPp->TopPipeline__DOT__Register__DOT__register_7
									  : 
									 ((6U 
									   == 
									   (0x1fU 
									    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
									       >> 0xfU)))
									   ? vlTOPp->TopPipeline__DOT__Register__DOT__register_6
									   : 
									  ((5U 
									    == 
									    (0x1fU 
									     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0xfU)))
									    ? vlTOPp->TopPipeline__DOT__Register__DOT__register_5
									    : 
									   ((4U 
									     == 
									     (0x1fU 
									      & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0xfU)))
									     ? vlTOPp->TopPipeline__DOT__Register__DOT__register_4
									     : 
									    ((3U 
									      == 
									      (0x1fU 
									       & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0xfU)))
									      ? vlTOPp->TopPipeline__DOT__Register__DOT__register_3
									      : 
									     ((2U 
									       == 
									       (0x1fU 
										& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0xfU)))
									       ? vlTOPp->TopPipeline__DOT__Register__DOT__register_2
									       : 
									      ((1U 
										== 
										(0x1fU 
										& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
										>> 0xfU)))
									        ? vlTOPp->TopPipeline__DOT__Register__DOT__register_1
									        : vlTOPp->TopPipeline__DOT__Register__DOT__register_0)))))))))))))))))))))))))))))));
    vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & (3U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)));
    vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & ((3U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	      & (0x23U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg))));
    vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & ((3U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	      & ((0x23U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
		 & (0x63U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)))));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_176 
	= ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg) 
	   == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
			>> 0xfU)));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_178 
	= ((IData)(vlTOPp->TopPipeline__DOT__MEM_WB__DOT__rdreg) 
	   == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
			>> 0x14U)));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_73 
	= ((IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg) 
	   == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
			>> 0x14U)));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_71 
	= ((IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg) 
	   == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
			>> 0xfU)));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_38 
	= ((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg) 
	   == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
			>> 0x14U)));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_36 
	= ((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg) 
	   == (0x1fU & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
			>> 0xfU)));
    vlTOPp->io_Reg_Out = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_30 
	= ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_28) 
	   & (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_29));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_51 
	= ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_27) 
	   & (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_28));
    vlTOPp->TopPipeline__DOT__Stalling_io_stall = ((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__MemReadreg) 
						   & (IData)(vlTOPp->TopPipeline__DOT__Stalling__DOT___T_33));
    vlTOPp->TopPipeline__DOT__Control__DOT__c2__DOT___GEN_14 
	= ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jal)) 
	   & ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jalr)) 
	      & (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Lui)));
    vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc 
	= ((0x33U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg))
	    ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load)
		     ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store)
			      ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch)
				       ? 1U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_I)
					        ? 0U
					        : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jal)
						    ? 2U
						    : 
						   ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jalr)
						     ? 3U
						     : 0U)))))));
    vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_Branch 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load)) 
	      & ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store)) 
		 & (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch))));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_196 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_73));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_171 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_71));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_85 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_38));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_37 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_35) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_36));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_66 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_36));
}

VL_INLINE_OPT void VTopPipeline::_sequent__TOP__4(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_sequent__TOP__4\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_Reg_Out = vlTOPp->TopPipeline__DOT__Register_io_WriteData;
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_30 
	= ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_28) 
	   & (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_29));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_51 
	= ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_27) 
	   & (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_28));
    vlTOPp->TopPipeline__DOT__Stalling_io_stall = ((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__MemReadreg) 
						   & (IData)(vlTOPp->TopPipeline__DOT__Stalling__DOT___T_33));
    vlTOPp->TopPipeline__DOT__Control__DOT__c2__DOT___GEN_14 
	= ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jal)) 
	   & ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jalr)) 
	      & (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Lui)));
    vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc 
	= ((0x33U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg))
	    ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load)
		     ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store)
			      ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch)
				       ? 1U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_I)
					        ? 0U
					        : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jal)
						    ? 2U
						    : 
						   ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Jalr)
						     ? 3U
						     : 0U)))))));
    vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_Branch 
	= ((0x33U != (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg)) 
	   & ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load)) 
	      & ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store)) 
		 & (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch))));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_196 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_73));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_171 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_71));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_85 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_38));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_37 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_35) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_36));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_66 
	= ((0U != (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__rdreg)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_36));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___GEN_5 
	= ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_27)
	    ? ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_30)
	        ? 2U : ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_28)
			 ? 2U : 0U)) : 0U);
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___GEN_6 
	= ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_27)
	    ? ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_30)
	        ? 2U : ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_28)
			 ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_29)
				  ? 2U : 0U))) : 0U);
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_67 
	= ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_42) 
	   & (~ (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_51)));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_55 
	= (((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_42) 
	    & (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_43)) 
	   & (~ ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_51) 
		 & (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_29))));
    vlTOPp->TopPipeline__DOT___GEN_0 = ((IData)(vlTOPp->TopPipeline__DOT__Stalling_io_stall)
					 ? (((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__MemReadreg) 
					     & (IData)(vlTOPp->TopPipeline__DOT__Stalling__DOT___T_33))
					     ? vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg
					     : 0U) : vlTOPp->TopPipeline__DOT__Memory__DOT__mem___05FT_11_data);
    vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_ExtSel 
	= ((0x33U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg))
	    ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load)
		     ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store)
			      ? 2U : ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch)) 
				      & ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_I)) 
					 & (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2__DOT___GEN_14))))));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_173 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_171) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_73));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_200 
	= ((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_159) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_85))) 
	    & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_196))) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_178));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_267 
	= ((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_226) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_85))) 
	    & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_196))) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_178));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_89 
	= (((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_62) 
	    & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_85))) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_73));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_136 
	= (((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_109) 
	    & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_85))) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_73));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_39 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_37) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_38));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_287 
	= ((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_226) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_66))) 
	    & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_171))) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_176));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_220 
	= ((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_159) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_66))) 
	    & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_171))) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_176));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_103 
	= (((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_62) 
	    & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_66))) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_71));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_68 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_66) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_38));
}

void VTopPipeline::_settle__TOP__5(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_settle__TOP__5\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___GEN_5 
	= ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_27)
	    ? ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_30)
	        ? 2U : ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_28)
			 ? 2U : 0U)) : 0U);
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___GEN_6 
	= ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_27)
	    ? ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_30)
	        ? 2U : ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_28)
			 ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_29)
				  ? 2U : 0U))) : 0U);
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_67 
	= ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_42) 
	   & (~ (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_51)));
    vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_55 
	= (((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_42) 
	    & (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_43)) 
	   & (~ ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_51) 
		 & (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_29))));
    vlTOPp->TopPipeline__DOT___GEN_0 = ((IData)(vlTOPp->TopPipeline__DOT__Stalling_io_stall)
					 ? (((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__MemReadreg) 
					     & (IData)(vlTOPp->TopPipeline__DOT__Stalling__DOT___T_33))
					     ? vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg
					     : 0U) : vlTOPp->TopPipeline__DOT__Memory__DOT__mem___05FT_11_data);
    vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_ExtSel 
	= ((0x33U == (0x7fU & vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg))
	    ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Load)
		     ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Store)
			      ? 2U : ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_Branch)) 
				      & ((~ (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c1_io_I)) 
					 & (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2__DOT___GEN_14))))));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_173 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_171) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_73));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_200 
	= ((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_159) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_85))) 
	    & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_196))) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_178));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_267 
	= ((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_226) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_85))) 
	    & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_196))) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_178));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_89 
	= (((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_62) 
	    & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_85))) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_73));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_136 
	= (((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_109) 
	    & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_85))) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_73));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_39 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_37) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_38));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_287 
	= ((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_226) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_66))) 
	    & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_171))) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_176));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_220 
	= ((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_159) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_66))) 
	    & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_171))) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_176));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_103 
	= (((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_62) 
	    & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_66))) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_71));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_68 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_66) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_38));
    vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardA 
	= ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_41)
	    ? ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_55)
	        ? 1U : ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_67)
			 ? 1U : (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___GEN_5)))
	    : (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___GEN_5));
    vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardB 
	= ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_41)
	    ? ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_55)
	        ? 1U : ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_67)
			 ? (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___GEN_6)
			 : (((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_43) 
			     & (~ ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_27) 
				   & (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_29))))
			     ? 1U : (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___GEN_6))))
	    : (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___GEN_6));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_4 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_39) 
	   | ((~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_37)) 
	      & ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_35) 
		 & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_38))));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_3 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_39) 
	   | (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_37));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_179 
	= (((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_159) 
	      & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_68))) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_173))) 
	    & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_176)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_178));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_246 
	= (((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_226) 
	      & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_68))) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_173))) 
	    & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_176)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_178));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_74 
	= ((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_62) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_68))) 
	    & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_71)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_73));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_121 
	= ((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_109) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_68))) 
	    & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_71)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_73));
}

VL_INLINE_OPT void VTopPipeline::_sequent__TOP__6(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_sequent__TOP__6\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardA 
	= ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_41)
	    ? ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_55)
	        ? 1U : ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_67)
			 ? 1U : (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___GEN_5)))
	    : (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___GEN_5));
    vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardB 
	= ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_41)
	    ? ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_55)
	        ? 1U : ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_67)
			 ? (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___GEN_6)
			 : (((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_43) 
			     & (~ ((IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_27) 
				   & (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___T_29))))
			     ? 1U : (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___GEN_6))))
	    : (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit__DOT___GEN_6));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_4 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_39) 
	   | ((~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_37)) 
	      & ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_35) 
		 & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_38))));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_3 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_39) 
	   | (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_37));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_179 
	= (((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_159) 
	      & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_68))) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_173))) 
	    & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_176)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_178));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_246 
	= (((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_226) 
	      & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_68))) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_173))) 
	    & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_176)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_178));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_74 
	= ((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_62) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_68))) 
	    & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_71)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_73));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_121 
	= ((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_109) 
	     & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_68))) 
	    & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_71)) 
	   & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_73));
    vlTOPp->TopPipeline__DOT__Alu_io_in1 = ((2U == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__OpAreg))
					     ? vlTOPp->TopPipeline__DOT__ID_EX__DOT__pc4reg
					     : ((1U 
						 == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__OpAreg))
						 ? vlTOPp->TopPipeline__DOT__ID_EX__DOT__pcreg
						 : 
						((2U 
						  == (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardA))
						  ? vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg
						  : 
						 ((1U 
						   == (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardA))
						   ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
						   : vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs1reg))));
    vlTOPp->TopPipeline__DOT___GEN_53 = ((2U == (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardB))
					  ? vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg
					  : ((1U == (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardB))
					      ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
					      : ((0U 
						  == (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardB))
						  ? vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs2reg
						  : 0U)));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_15 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_74)
	    ? 2U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_89)
		     ? 2U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_103)
			      ? (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_4)
			      : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_121)
				  ? 4U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_136)
					   ? 4U : (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_4))))));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_14 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_74)
	    ? 2U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_89)
		     ? (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_3)
		     : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_103)
			 ? 2U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_121)
				  ? 4U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_136)
					   ? (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_3)
					   : ((((((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_Branch) 
						  & (0U 
						     != (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg))) 
						 & (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__MemReadreg)) 
						& (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_66))) 
					       & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_71))
					       ? 4U
					       : (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_3)))))));
}

void VTopPipeline::_settle__TOP__7(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_settle__TOP__7\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopPipeline__DOT__Alu_io_in1 = ((2U == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__OpAreg))
					     ? vlTOPp->TopPipeline__DOT__ID_EX__DOT__pc4reg
					     : ((1U 
						 == (IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__OpAreg))
						 ? vlTOPp->TopPipeline__DOT__ID_EX__DOT__pcreg
						 : 
						((2U 
						  == (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardA))
						  ? vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg
						  : 
						 ((1U 
						   == (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardA))
						   ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
						   : vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs1reg))));
    vlTOPp->TopPipeline__DOT___GEN_53 = ((2U == (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardB))
					  ? vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg
					  : ((1U == (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardB))
					      ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
					      : ((0U 
						  == (IData)(vlTOPp->TopPipeline__DOT__ForwardingUnit_io_forwardB))
						  ? vlTOPp->TopPipeline__DOT__ID_EX__DOT__rs2reg
						  : 0U)));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_15 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_74)
	    ? 2U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_89)
		     ? 2U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_103)
			      ? (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_4)
			      : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_121)
				  ? 4U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_136)
					   ? 4U : (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_4))))));
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_14 
	= ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_74)
	    ? 2U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_89)
		     ? (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_3)
		     : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_103)
			 ? 2U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_121)
				  ? 4U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_136)
					   ? (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_3)
					   : ((((((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_Branch) 
						  & (0U 
						     != (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__rdreg))) 
						 & (IData)(vlTOPp->TopPipeline__DOT__EX_MEM__DOT__MemReadreg)) 
						& (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_66))) 
					       & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_71))
					       ? 4U
					       : (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_3)))))));
    vlTOPp->TopPipeline__DOT__Alu_io_in2 = ((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__OpBreg)
					     ? vlTOPp->TopPipeline__DOT__ID_EX__DOT__immreg
					     : vlTOPp->TopPipeline__DOT___GEN_53);
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_34 
	= ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_Branch)
	    ? ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_179)
	        ? 3U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_200)
			 ? 3U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_220)
				  ? (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_15)
				  : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_246)
				      ? 5U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_267)
					       ? 5U
					       : (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_15))))))
	    : 0U);
    vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA 
	= ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_Branch)
	    ? ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_179)
	        ? 3U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_200)
			 ? (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_14)
			 : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_220)
			     ? 3U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_246)
				      ? 5U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_267)
					       ? (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_14)
					       : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_287)
						   ? 5U
						   : (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_14)))))))
	    : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_Branch)
	        ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_220)
			 ? 8U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_287)
				  ? 0xaU : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_103)
					     ? 7U : 
					    ((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_109) 
					       & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_66))) 
					      & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_71))
					      ? 9U : 
					     ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_37)
					       ? 6U
					       : 0U)))))));
}

VL_INLINE_OPT void VTopPipeline::_sequent__TOP__8(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_sequent__TOP__8\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopPipeline__DOT__Alu_io_in2 = ((IData)(vlTOPp->TopPipeline__DOT__ID_EX__DOT__OpBreg)
					     ? vlTOPp->TopPipeline__DOT__ID_EX__DOT__immreg
					     : vlTOPp->TopPipeline__DOT___GEN_53);
    vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_34 
	= ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_Branch)
	    ? ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_179)
	        ? 3U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_200)
			 ? 3U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_220)
				  ? (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_15)
				  : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_246)
				      ? 5U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_267)
					       ? 5U
					       : (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_15))))))
	    : 0U);
    vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA 
	= ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_Branch)
	    ? ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_179)
	        ? 3U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_200)
			 ? (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_14)
			 : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_220)
			     ? 3U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_246)
				      ? 5U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_267)
					       ? (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_14)
					       : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_287)
						   ? 5U
						   : (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_14)))))))
	    : ((IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_Branch)
	        ? 0U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_220)
			 ? 8U : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_287)
				  ? 0xaU : ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_103)
					     ? 7U : 
					    ((((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_109) 
					       & (~ (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_66))) 
					      & (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_71))
					      ? 9U : 
					     ((IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___T_37)
					       ? 6U
					       : 0U)))))));
    vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_11 = (
						   (0x15U 
						    == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						    ? 
						   (VL_GTES_III(1,32,32, vlTOPp->TopPipeline__DOT__Alu_io_in1, vlTOPp->TopPipeline__DOT__Alu_io_in2)
						     ? 1U
						     : 0U)
						    : 
						   ((0x17U 
						     == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						     ? 
						    ((vlTOPp->TopPipeline__DOT__Alu_io_in1 
						      >= vlTOPp->TopPipeline__DOT__Alu_io_in2)
						      ? 1U
						      : 0U)
						     : 
						    (((3U 
						       == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out)) 
						      | (0x16U 
							 == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out)))
						      ? 
						     ((vlTOPp->TopPipeline__DOT__Alu_io_in1 
						       < vlTOPp->TopPipeline__DOT__Alu_io_in2)
						       ? 1U
						       : 0U)
						      : 
						     ((0x10U 
						       == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						       ? 
						      ((vlTOPp->TopPipeline__DOT__Alu_io_in1 
							== vlTOPp->TopPipeline__DOT__Alu_io_in2)
						        ? 1U
						        : 0U)
						       : 
						      (((2U 
							 == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out)) 
							| (0x14U 
							   == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out)))
						        ? 
						       (VL_LTS_III(1,32,32, vlTOPp->TopPipeline__DOT__Alu_io_in1, vlTOPp->TopPipeline__DOT__Alu_io_in2)
							 ? 1U
							 : 0U)
						        : 
						       ((vlTOPp->TopPipeline__DOT__Alu_io_in1 
							 != vlTOPp->TopPipeline__DOT__Alu_io_in2)
							 ? 1U
							 : 0U))))));
}

void VTopPipeline::_settle__TOP__9(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_settle__TOP__9\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_11 = (
						   (0x15U 
						    == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						    ? 
						   (VL_GTES_III(1,32,32, vlTOPp->TopPipeline__DOT__Alu_io_in1, vlTOPp->TopPipeline__DOT__Alu_io_in2)
						     ? 1U
						     : 0U)
						    : 
						   ((0x17U 
						     == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						     ? 
						    ((vlTOPp->TopPipeline__DOT__Alu_io_in1 
						      >= vlTOPp->TopPipeline__DOT__Alu_io_in2)
						      ? 1U
						      : 0U)
						     : 
						    (((3U 
						       == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out)) 
						      | (0x16U 
							 == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out)))
						      ? 
						     ((vlTOPp->TopPipeline__DOT__Alu_io_in1 
						       < vlTOPp->TopPipeline__DOT__Alu_io_in2)
						       ? 1U
						       : 0U)
						      : 
						     ((0x10U 
						       == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						       ? 
						      ((vlTOPp->TopPipeline__DOT__Alu_io_in1 
							== vlTOPp->TopPipeline__DOT__Alu_io_in2)
						        ? 1U
						        : 0U)
						       : 
						      (((2U 
							 == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out)) 
							| (0x14U 
							   == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out)))
						        ? 
						       (VL_LTS_III(1,32,32, vlTOPp->TopPipeline__DOT__Alu_io_in1, vlTOPp->TopPipeline__DOT__Alu_io_in2)
							 ? 1U
							 : 0U)
						        : 
						       ((vlTOPp->TopPipeline__DOT__Alu_io_in1 
							 != vlTOPp->TopPipeline__DOT__Alu_io_in2)
							 ? 1U
							 : 0U))))));
    vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_17 = (
						   (4U 
						    == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						    ? 
						   (vlTOPp->TopPipeline__DOT__Alu_io_in1 
						    ^ vlTOPp->TopPipeline__DOT__Alu_io_in2)
						    : 
						   (((5U 
						      == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out)) 
						     | (0xdU 
							== (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out)))
						     ? 
						    VL_SHIFTRS_III(32,32,5, vlTOPp->TopPipeline__DOT__Alu_io_in1, 
								   (0x1fU 
								    & vlTOPp->TopPipeline__DOT__Alu_io_in2))
						     : 
						    ((6U 
						      == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						      ? 
						     (vlTOPp->TopPipeline__DOT__Alu_io_in1 
						      | vlTOPp->TopPipeline__DOT__Alu_io_in2)
						      : 
						     ((7U 
						       == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						       ? 
						      (vlTOPp->TopPipeline__DOT__Alu_io_in1 
						       & vlTOPp->TopPipeline__DOT__Alu_io_in2)
						       : 
						      ((8U 
							== (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						        ? 
						       (vlTOPp->TopPipeline__DOT__Alu_io_in1 
							- vlTOPp->TopPipeline__DOT__Alu_io_in2)
						        : 
						       ((0x1fU 
							 == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
							 ? vlTOPp->TopPipeline__DOT__Alu_io_in1
							 : 
							((0xfffffffcU 
							  & (VL_NEGATE_I((IData)(
										(1U 
										& ((IData)(vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_11) 
										>> 1U)))) 
							     << 2U)) 
							 | (IData)(vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_11))))))));
}

VL_INLINE_OPT void VTopPipeline::_sequent__TOP__10(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_sequent__TOP__10\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_17 = (
						   (4U 
						    == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						    ? 
						   (vlTOPp->TopPipeline__DOT__Alu_io_in1 
						    ^ vlTOPp->TopPipeline__DOT__Alu_io_in2)
						    : 
						   (((5U 
						      == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out)) 
						     | (0xdU 
							== (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out)))
						     ? 
						    VL_SHIFTRS_III(32,32,5, vlTOPp->TopPipeline__DOT__Alu_io_in1, 
								   (0x1fU 
								    & vlTOPp->TopPipeline__DOT__Alu_io_in2))
						     : 
						    ((6U 
						      == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						      ? 
						     (vlTOPp->TopPipeline__DOT__Alu_io_in1 
						      | vlTOPp->TopPipeline__DOT__Alu_io_in2)
						      : 
						     ((7U 
						       == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						       ? 
						      (vlTOPp->TopPipeline__DOT__Alu_io_in1 
						       & vlTOPp->TopPipeline__DOT__Alu_io_in2)
						       : 
						      ((8U 
							== (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						        ? 
						       (vlTOPp->TopPipeline__DOT__Alu_io_in1 
							- vlTOPp->TopPipeline__DOT__Alu_io_in2)
						        : 
						       ((0x1fU 
							 == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
							 ? vlTOPp->TopPipeline__DOT__Alu_io_in1
							 : 
							((0xfffffffcU 
							  & (VL_NEGATE_I((IData)(
										(1U 
										& ((IData)(vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_11) 
										>> 1U)))) 
							     << 2U)) 
							 | (IData)(vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_11))))))));
    vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_19 = (VL_ULL(0x7fffffffffffffff) 
						   & ((0U 
						       == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						       ? 
						      (((QData)((IData)(
									(0x7fffffffU 
									 & VL_NEGATE_I((IData)(
										(1U 
										& ((vlTOPp->TopPipeline__DOT__Alu_io_in1 
										+ vlTOPp->TopPipeline__DOT__Alu_io_in2) 
										>> 0x1fU))))))) 
							<< 0x20U) 
						       | (QData)((IData)(
									 (vlTOPp->TopPipeline__DOT__Alu_io_in1 
									  + vlTOPp->TopPipeline__DOT__Alu_io_in2))))
						       : 
						      ((1U 
							== (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						        ? 
						       ((((QData)((IData)(
									  (0x7fffffffU 
									   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->TopPipeline__DOT__Alu_io_in1 
										>> 0x1fU))))))) 
							  << 0x20U) 
							 | (QData)((IData)(vlTOPp->TopPipeline__DOT__Alu_io_in1))) 
							<< 
							(0x1fU 
							 & vlTOPp->TopPipeline__DOT__Alu_io_in2))
						        : 
						       (((QData)((IData)(
									 (0x7fffffffU 
									  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_17 
										>> 0x1fU))))))) 
							 << 0x20U) 
							| (QData)((IData)(vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_17))))));
}

void VTopPipeline::_settle__TOP__11(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_settle__TOP__11\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_19 = (VL_ULL(0x7fffffffffffffff) 
						   & ((0U 
						       == (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						       ? 
						      (((QData)((IData)(
									(0x7fffffffU 
									 & VL_NEGATE_I((IData)(
										(1U 
										& ((vlTOPp->TopPipeline__DOT__Alu_io_in1 
										+ vlTOPp->TopPipeline__DOT__Alu_io_in2) 
										>> 0x1fU))))))) 
							<< 0x20U) 
						       | (QData)((IData)(
									 (vlTOPp->TopPipeline__DOT__Alu_io_in1 
									  + vlTOPp->TopPipeline__DOT__Alu_io_in2))))
						       : 
						      ((1U 
							== (IData)(vlTOPp->TopPipeline__DOT__AluControl_io_out))
						        ? 
						       ((((QData)((IData)(
									  (0x7fffffffU 
									   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->TopPipeline__DOT__Alu_io_in1 
										>> 0x1fU))))))) 
							  << 0x20U) 
							 | (QData)((IData)(vlTOPp->TopPipeline__DOT__Alu_io_in1))) 
							<< 
							(0x1fU 
							 & vlTOPp->TopPipeline__DOT__Alu_io_in2))
						        : 
						       (((QData)((IData)(
									 (0x7fffffffU 
									  & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_17 
										>> 0x1fU))))))) 
							 << 0x20U) 
							| (QData)((IData)(vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_17))))));
    vlTOPp->TopPipeline__DOT__Jalr_io_in1 = ((0U == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
					      ? vlTOPp->TopPipeline__DOT__Register_io_rs1
					      : ((1U 
						  == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						  ? vlTOPp->TopPipeline__DOT__Register_io_rs1
						  : 
						 ((2U 
						   == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						   ? vlTOPp->TopPipeline__DOT__Register_io_rs1
						   : 
						  ((3U 
						    == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						    ? vlTOPp->TopPipeline__DOT__Register_io_rs1
						    : 
						   ((4U 
						     == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						     ? vlTOPp->TopPipeline__DOT__Register_io_rs1
						     : 
						    ((5U 
						      == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						      ? vlTOPp->TopPipeline__DOT__Register_io_rs1
						      : 
						     ((6U 
						       == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						       ? (IData)(vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_19)
						       : 
						      ((7U 
							== (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						        ? vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg
						        : 
						       ((8U 
							 == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
							 ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
							 : 
							((9U 
							  == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
							  ? vlTOPp->TopPipeline__DOT__DataMemory__DOT__mem___05FT_22_data
							  : 
							 ((0xaU 
							   == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
							   ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
							   : vlTOPp->TopPipeline__DOT__Register_io_rs1)))))))))));
    vlTOPp->TopPipeline__DOT__Branch_io_rs1 = ((0U 
						== (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
					        ? vlTOPp->TopPipeline__DOT__Register_io_rs1
					        : (
						   (1U 
						    == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						    ? (IData)(vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_19)
						    : 
						   ((2U 
						     == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						     ? vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg
						     : 
						    ((3U 
						      == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						      ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
						      : 
						     ((4U 
						       == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						       ? vlTOPp->TopPipeline__DOT__DataMemory__DOT__mem___05FT_22_data
						       : 
						      ((5U 
							== (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						        ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
						        : vlTOPp->TopPipeline__DOT__Register_io_rs1))))));
    vlTOPp->TopPipeline__DOT__Branch_io_rs2 = ((0U 
						== (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_34))
					        ? vlTOPp->TopPipeline__DOT__Register_io_rs2
					        : (
						   (1U 
						    == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_34))
						    ? (IData)(vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_19)
						    : 
						   ((2U 
						     == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_34))
						     ? vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg
						     : 
						    ((3U 
						      == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_34))
						      ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
						      : 
						     ((4U 
						       == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_34))
						       ? vlTOPp->TopPipeline__DOT__DataMemory__DOT__mem___05FT_22_data
						       : 
						      ((5U 
							== (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_34))
						        ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
						        : vlTOPp->TopPipeline__DOT__Register_io_rs2))))));
}

VL_INLINE_OPT void VTopPipeline::_sequent__TOP__12(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_sequent__TOP__12\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopPipeline__DOT__Jalr_io_in1 = ((0U == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
					      ? vlTOPp->TopPipeline__DOT__Register_io_rs1
					      : ((1U 
						  == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						  ? vlTOPp->TopPipeline__DOT__Register_io_rs1
						  : 
						 ((2U 
						   == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						   ? vlTOPp->TopPipeline__DOT__Register_io_rs1
						   : 
						  ((3U 
						    == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						    ? vlTOPp->TopPipeline__DOT__Register_io_rs1
						    : 
						   ((4U 
						     == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						     ? vlTOPp->TopPipeline__DOT__Register_io_rs1
						     : 
						    ((5U 
						      == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						      ? vlTOPp->TopPipeline__DOT__Register_io_rs1
						      : 
						     ((6U 
						       == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						       ? (IData)(vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_19)
						       : 
						      ((7U 
							== (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						        ? vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg
						        : 
						       ((8U 
							 == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
							 ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
							 : 
							((9U 
							  == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
							  ? vlTOPp->TopPipeline__DOT__DataMemory__DOT__mem___05FT_22_data
							  : 
							 ((0xaU 
							   == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
							   ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
							   : vlTOPp->TopPipeline__DOT__Register_io_rs1)))))))))));
    vlTOPp->TopPipeline__DOT__Branch_io_rs1 = ((0U 
						== (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
					        ? vlTOPp->TopPipeline__DOT__Register_io_rs1
					        : (
						   (1U 
						    == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						    ? (IData)(vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_19)
						    : 
						   ((2U 
						     == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						     ? vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg
						     : 
						    ((3U 
						      == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						      ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
						      : 
						     ((4U 
						       == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						       ? vlTOPp->TopPipeline__DOT__DataMemory__DOT__mem___05FT_22_data
						       : 
						      ((5U 
							== (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding_io_forwardA))
						        ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
						        : vlTOPp->TopPipeline__DOT__Register_io_rs1))))));
    vlTOPp->TopPipeline__DOT__Branch_io_rs2 = ((0U 
						== (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_34))
					        ? vlTOPp->TopPipeline__DOT__Register_io_rs2
					        : (
						   (1U 
						    == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_34))
						    ? (IData)(vlTOPp->TopPipeline__DOT__Alu__DOT___GEN_19)
						    : 
						   ((2U 
						     == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_34))
						     ? vlTOPp->TopPipeline__DOT__EX_MEM__DOT__alureg
						     : 
						    ((3U 
						      == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_34))
						      ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
						      : 
						     ((4U 
						       == (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_34))
						       ? vlTOPp->TopPipeline__DOT__DataMemory__DOT__mem___05FT_22_data
						       : 
						      ((5U 
							== (IData)(vlTOPp->TopPipeline__DOT__BranchForwarding__DOT___GEN_34))
						        ? vlTOPp->TopPipeline__DOT__Register_io_WriteData
						        : vlTOPp->TopPipeline__DOT__Register_io_rs2))))));
    vlTOPp->TopPipeline__DOT___T_27 = (((0U == (7U 
						& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						   >> 0xcU)))
					 ? (vlTOPp->TopPipeline__DOT__Branch_io_rs1 
					    == vlTOPp->TopPipeline__DOT__Branch_io_rs2)
					 : ((1U == 
					     (7U & 
					      (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					       >> 0xcU)))
					     ? (vlTOPp->TopPipeline__DOT__Branch_io_rs1 
						!= vlTOPp->TopPipeline__DOT__Branch_io_rs2)
					     : ((4U 
						 == 
						 (7U 
						  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						     >> 0xcU)))
						 ? 
						VL_LTS_III(1,32,32, vlTOPp->TopPipeline__DOT__Branch_io_rs1, vlTOPp->TopPipeline__DOT__Branch_io_rs2)
						 : 
						((5U 
						  == 
						  (7U 
						   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						      >> 0xcU)))
						  ? 
						 VL_GTES_III(1,32,32, vlTOPp->TopPipeline__DOT__Branch_io_rs1, vlTOPp->TopPipeline__DOT__Branch_io_rs2)
						  : 
						 ((6U 
						   == 
						   (7U 
						    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						       >> 0xcU)))
						   ? 
						  (vlTOPp->TopPipeline__DOT__Branch_io_rs1 
						   < vlTOPp->TopPipeline__DOT__Branch_io_rs2)
						   : 
						  ((7U 
						    == 
						    (7U 
						     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							>> 0xcU))) 
						   & (vlTOPp->TopPipeline__DOT__Branch_io_rs1 
						      >= vlTOPp->TopPipeline__DOT__Branch_io_rs2))))))) 
				       & (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_Branch));
}

void VTopPipeline::_settle__TOP__13(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_settle__TOP__13\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopPipeline__DOT___T_27 = (((0U == (7U 
						& (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						   >> 0xcU)))
					 ? (vlTOPp->TopPipeline__DOT__Branch_io_rs1 
					    == vlTOPp->TopPipeline__DOT__Branch_io_rs2)
					 : ((1U == 
					     (7U & 
					      (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
					       >> 0xcU)))
					     ? (vlTOPp->TopPipeline__DOT__Branch_io_rs1 
						!= vlTOPp->TopPipeline__DOT__Branch_io_rs2)
					     : ((4U 
						 == 
						 (7U 
						  & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						     >> 0xcU)))
						 ? 
						VL_LTS_III(1,32,32, vlTOPp->TopPipeline__DOT__Branch_io_rs1, vlTOPp->TopPipeline__DOT__Branch_io_rs2)
						 : 
						((5U 
						  == 
						  (7U 
						   & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						      >> 0xcU)))
						  ? 
						 VL_GTES_III(1,32,32, vlTOPp->TopPipeline__DOT__Branch_io_rs1, vlTOPp->TopPipeline__DOT__Branch_io_rs2)
						  : 
						 ((6U 
						   == 
						   (7U 
						    & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
						       >> 0xcU)))
						   ? 
						  (vlTOPp->TopPipeline__DOT__Branch_io_rs1 
						   < vlTOPp->TopPipeline__DOT__Branch_io_rs2)
						   : 
						  ((7U 
						    == 
						    (7U 
						     & (vlTOPp->TopPipeline__DOT__IF_ID__DOT__instreg 
							>> 0xcU))) 
						   & (vlTOPp->TopPipeline__DOT__Branch_io_rs1 
						      >= vlTOPp->TopPipeline__DOT__Branch_io_rs2))))))) 
				       & (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_Branch));
    vlTOPp->TopPipeline__DOT__Pc_io_input = ((1U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
					      ? ((IData)(vlTOPp->TopPipeline__DOT___T_27)
						  ? 
						 (vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_41 
						  + vlTOPp->TopPipeline__DOT__IF_ID__DOT__pcreg)
						  : 
						 ((IData)(4U) 
						  + vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024))
					      : ((2U 
						  == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
						  ? 
						 ((IData)(vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_58) 
						  + vlTOPp->TopPipeline__DOT__IF_ID__DOT__pcreg)
						  : 
						 ((3U 
						   == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
						   ? 
						  (0xfffffffeU 
						   & (vlTOPp->TopPipeline__DOT__Jalr_io_in1 
						      + vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_77))
						   : 
						  ((IData)(4U) 
						   + vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024))));
}

VL_INLINE_OPT void VTopPipeline::_sequent__TOP__14(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_sequent__TOP__14\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TopPipeline__DOT__Pc_io_input = ((1U == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
					      ? ((IData)(vlTOPp->TopPipeline__DOT___T_27)
						  ? 
						 (vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_41 
						  + vlTOPp->TopPipeline__DOT__IF_ID__DOT__pcreg)
						  : 
						 ((IData)(4U) 
						  + vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024))
					      : ((2U 
						  == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
						  ? 
						 ((IData)(vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_58) 
						  + vlTOPp->TopPipeline__DOT__IF_ID__DOT__pcreg)
						  : 
						 ((3U 
						   == (IData)(vlTOPp->TopPipeline__DOT__Control__DOT__c2_io_NextPc))
						   ? 
						  (0xfffffffeU 
						   & (vlTOPp->TopPipeline__DOT__Jalr_io_in1 
						      + vlTOPp->TopPipeline__DOT__ImmediateGeneration__DOT___T_77))
						   : 
						  ((IData)(4U) 
						   + vlTOPp->TopPipeline__DOT__Pc__DOT__reg__024))));
}

void VTopPipeline::_eval(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_eval\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->_sequent__TOP__10(vlSymsp);
	vlTOPp->_sequent__TOP__12(vlSymsp);
	vlTOPp->_sequent__TOP__14(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTopPipeline::_eval_initial(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_eval_initial\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VTopPipeline::final() {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::final\n"); );
    // Variables
    VTopPipeline__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTopPipeline::_eval_settle(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_eval_settle\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlTOPp->_settle__TOP__13(vlSymsp);
}

VL_INLINE_OPT QData VTopPipeline::_change_request(VTopPipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_change_request\n"); );
    VTopPipeline* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VTopPipeline::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_Reg_Out = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Alu_io_in1 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Alu_io_in2 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__AluControl_io_out = VL_RAND_RESET_I(5);
    TopPipeline__DOT__Register_io_WriteData = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register_io_rs1 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register_io_rs2 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Pc_io_input = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Jalr_io_in1 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Stalling_io_stall = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ForwardingUnit_io_forwardA = VL_RAND_RESET_I(2);
    TopPipeline__DOT__ForwardingUnit_io_forwardB = VL_RAND_RESET_I(2);
    TopPipeline__DOT__Branch_io_rs1 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Branch_io_rs2 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__BranchForwarding_io_forwardA = VL_RAND_RESET_I(4);
    TopPipeline__DOT___GEN_0 = VL_RAND_RESET_I(32);
    TopPipeline__DOT___T_27 = VL_RAND_RESET_I(1);
    TopPipeline__DOT___GEN_53 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Alu__DOT___GEN_11 = VL_RAND_RESET_I(2);
    TopPipeline__DOT__Alu__DOT___GEN_17 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Alu__DOT___GEN_19 = VL_RAND_RESET_Q(63);
    TopPipeline__DOT__Control__DOT__c1_io_Load = VL_RAND_RESET_I(1);
    TopPipeline__DOT__Control__DOT__c1_io_Store = VL_RAND_RESET_I(1);
    TopPipeline__DOT__Control__DOT__c1_io_Branch = VL_RAND_RESET_I(1);
    TopPipeline__DOT__Control__DOT__c1_io_I = VL_RAND_RESET_I(1);
    TopPipeline__DOT__Control__DOT__c1_io_Jal = VL_RAND_RESET_I(1);
    TopPipeline__DOT__Control__DOT__c1_io_Jalr = VL_RAND_RESET_I(1);
    TopPipeline__DOT__Control__DOT__c1_io_Lui = VL_RAND_RESET_I(1);
    TopPipeline__DOT__Control__DOT__c2_io_Branch = VL_RAND_RESET_I(1);
    TopPipeline__DOT__Control__DOT__c2_io_ExtSel = VL_RAND_RESET_I(2);
    TopPipeline__DOT__Control__DOT__c2_io_NextPc = VL_RAND_RESET_I(2);
    TopPipeline__DOT__Control__DOT__c2__DOT___GEN_14 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ImmediateGeneration__DOT___T_41 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__ImmediateGeneration__DOT___T_58 = VL_RAND_RESET_Q(33);
    TopPipeline__DOT__ImmediateGeneration__DOT___T_77 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_0 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_1 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_2 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_3 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_4 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_5 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_6 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_7 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_8 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_9 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_10 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_11 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_12 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_13 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_14 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_15 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_16 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_17 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_18 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_19 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_20 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_21 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_22 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_23 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_24 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_25 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_26 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_27 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_28 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_29 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_30 = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Register__DOT__register_31 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    TopPipeline__DOT__Memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    TopPipeline__DOT__Memory__DOT__mem___05FT_11_data = VL_RAND_RESET_I(32);
    TopPipeline__DOT__Pc__DOT__reg__024 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    TopPipeline__DOT__DataMemory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    TopPipeline__DOT__DataMemory__DOT__mem___05FT_22_data = VL_RAND_RESET_I(32);
    TopPipeline__DOT__IF_ID__DOT__pcreg = VL_RAND_RESET_I(32);
    TopPipeline__DOT__IF_ID__DOT__pc4reg = VL_RAND_RESET_I(32);
    TopPipeline__DOT__IF_ID__DOT__instreg = VL_RAND_RESET_I(32);
    TopPipeline__DOT__ID_EX__DOT__pcreg = VL_RAND_RESET_I(32);
    TopPipeline__DOT__ID_EX__DOT__pc4reg = VL_RAND_RESET_I(32);
    TopPipeline__DOT__ID_EX__DOT__immreg = VL_RAND_RESET_I(32);
    TopPipeline__DOT__ID_EX__DOT__func3reg = VL_RAND_RESET_I(3);
    TopPipeline__DOT__ID_EX__DOT__func7reg = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ID_EX__DOT__rs1reg = VL_RAND_RESET_I(32);
    TopPipeline__DOT__ID_EX__DOT__rs2reg = VL_RAND_RESET_I(32);
    TopPipeline__DOT__ID_EX__DOT__rs1sreg = VL_RAND_RESET_I(5);
    TopPipeline__DOT__ID_EX__DOT__rs2sreg = VL_RAND_RESET_I(5);
    TopPipeline__DOT__ID_EX__DOT__rdreg = VL_RAND_RESET_I(5);
    TopPipeline__DOT__ID_EX__DOT__MemWritereg = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ID_EX__DOT__MemReadreg = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ID_EX__DOT__RegWritereg = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ID_EX__DOT__AluOpreg = VL_RAND_RESET_I(3);
    TopPipeline__DOT__ID_EX__DOT__OpAreg = VL_RAND_RESET_I(2);
    TopPipeline__DOT__ID_EX__DOT__OpBreg = VL_RAND_RESET_I(1);
    TopPipeline__DOT__EX_MEM__DOT__rs2reg = VL_RAND_RESET_I(32);
    TopPipeline__DOT__EX_MEM__DOT__alureg = VL_RAND_RESET_I(32);
    TopPipeline__DOT__EX_MEM__DOT__rdreg = VL_RAND_RESET_I(5);
    TopPipeline__DOT__EX_MEM__DOT__MemWritereg = VL_RAND_RESET_I(1);
    TopPipeline__DOT__EX_MEM__DOT__MemReadreg = VL_RAND_RESET_I(1);
    TopPipeline__DOT__EX_MEM__DOT__RegWritereg = VL_RAND_RESET_I(1);
    TopPipeline__DOT__MEM_WB__DOT__memreg = VL_RAND_RESET_I(32);
    TopPipeline__DOT__MEM_WB__DOT__alureg = VL_RAND_RESET_I(32);
    TopPipeline__DOT__MEM_WB__DOT__rdreg = VL_RAND_RESET_I(5);
    TopPipeline__DOT__MEM_WB__DOT__RegWritereg = VL_RAND_RESET_I(1);
    TopPipeline__DOT__MEM_WB__DOT__MemtoRegreg = VL_RAND_RESET_I(1);
    TopPipeline__DOT__Stalling__DOT___T_33 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ForwardingUnit__DOT___T_27 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ForwardingUnit__DOT___T_28 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ForwardingUnit__DOT___T_29 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ForwardingUnit__DOT___T_30 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ForwardingUnit__DOT___GEN_5 = VL_RAND_RESET_I(2);
    TopPipeline__DOT__ForwardingUnit__DOT___GEN_6 = VL_RAND_RESET_I(2);
    TopPipeline__DOT__ForwardingUnit__DOT___T_41 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ForwardingUnit__DOT___T_42 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ForwardingUnit__DOT___T_43 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ForwardingUnit__DOT___T_51 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ForwardingUnit__DOT___T_55 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__ForwardingUnit__DOT___T_67 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_35 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_36 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_37 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_38 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_39 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___GEN_3 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___GEN_4 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_62 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_66 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_68 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_71 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_73 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_74 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_85 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_89 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_103 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_109 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_121 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_136 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___GEN_14 = VL_RAND_RESET_I(3);
    TopPipeline__DOT__BranchForwarding__DOT___GEN_15 = VL_RAND_RESET_I(3);
    TopPipeline__DOT__BranchForwarding__DOT___T_159 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_171 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_173 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_176 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_178 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_179 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_196 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_200 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_220 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_226 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_246 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_267 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___T_287 = VL_RAND_RESET_I(1);
    TopPipeline__DOT__BranchForwarding__DOT___GEN_34 = VL_RAND_RESET_I(3);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VTopPipeline::_configure_coverage(VTopPipeline__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VTopPipeline::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
