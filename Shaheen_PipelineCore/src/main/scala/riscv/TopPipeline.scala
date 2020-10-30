package riscv

import chisel3._
import chisel3.util._
import chisel3.core
import chisel3.core.SInt
import chisel3.core.UInt

class TopPipeline extends Module {
  val io = IO (new Bundle {
	val Reg_Out = Output(SInt(32.W))
  })
	val Alu = Module(new Alu())
	val Control = Module(new Control())
	val ImmediateGeneration = Module(new ImmGen())
	val AluControl = Module(new AluCntrl())
	val Register = Module(new Register())
	val Memory = Module(new Memory())
	val Pc = Module(new Pc())
	val Jalr = Module(new Jalr())
	val DataMemory = Module(new MemoryD())

	val IF_ID = Module(new IF_ID_Reg())
	val ID_EX = Module(new ID_EX_Reg())
	val EX_MEM = Module(new EX_MEM_Reg())
	val MEM_WB = Module(new MEM_WB_Reg())

	val Stalling = Module(new StallingUnit())
	val ForwardingUnit = Module(new ForwardingUnit())
	ForwardingUnit.io.RegWrite := EX_MEM.io.RegWrite_out
	ForwardingUnit.io.RegWrite1 := MEM_WB.io.RegWrite_out
	ForwardingUnit.io.EX_MEM_rd := EX_MEM.io.rd_out
	ForwardingUnit.io.MEM_WB_rd := MEM_WB.io.rd_out
	ForwardingUnit.io.ID_EX_rs1_s := ID_EX.io.rs1_s_out
	ForwardingUnit.io.ID_EX_rs2_s := ID_EX.io.rs2_s_out

	val Branch = Module (new BranchUnit())
	val BranchForwarding = Module (new BranchForwardUnit())
	BranchForwarding.io.ID_EX_rd := ID_EX.io.rd_out
    	BranchForwarding.io.ID_EX_MemRead := ID_EX.io.MemRead_out
    	BranchForwarding.io.EX_MEM_rd := EX_MEM.io.rd_out
    	BranchForwarding.io.EX_MEM_MemRead := EX_MEM.io.MemRead_out
    	BranchForwarding.io.MEM_WB_rd := MEM_WB.io.rd_out
    	BranchForwarding.io.MEM_WB_MemtoReg := MEM_WB.io.MemtoReg_out
    	BranchForwarding.io.rs1_s := IF_ID.io.inst_out(19,15)
    	BranchForwarding.io.rs2_s := IF_ID.io.inst_out(24,20)
    	BranchForwarding.io.branch := Control.io.Branch

///////////////////////////////////////////////////////////////////////////Fetch////////////////////////////////////////////////////////
	Memory.io.wrAddr := Pc.io.pc(11,2)
	Alu.io.in2 := 0.S
	EX_MEM.io.rs2_in := 0.S
	IF_ID.io.pc_in := Pc.io.pc
	IF_ID.io.pc4_in := Pc.io.pc4
///////////////////////////////////////////////////////////////////////////Decode//////////////////////////////////////////////////////////
	Control.io.opcode := IF_ID.io.inst_out(6,0)
	ImmediateGeneration.io.instruction := IF_ID.io.inst_out
	ImmediateGeneration.io.pc := IF_ID.io.pc_out

	Register.io.rs1_s := IF_ID.io.inst_out(19,15)
	Register.io.rs2_s := IF_ID.io.inst_out(24,20)

///////////////////////////////////////////////////////////////Stalling Hazard Detection////////////////////////////////////////////////////
	Stalling.io.MemRead := ID_EX.io.MemRead_out
	Stalling.io.rd := ID_EX.io.rd_out
	Stalling.io.rs1_s := IF_ID.io.inst_out(19,15)
	Stalling.io.rs2_s := IF_ID.io.inst_out(24,20)
	Stalling.io.inst_in := IF_ID.io.inst_out
	Stalling.io.pc_in := IF_ID.io.pc_out
	Stalling.io.pc4_in := IF_ID.io.pc4_out

	when (Stalling.io.stall === "b1".U){
		IF_ID.io.inst_in := Stalling.io.inst_out
		Pc.io.input := Stalling.io.pc_out
		ID_EX.io.MemWrite_in := 0.U
		ID_EX.io.RegWrite_in := 0.U
		}
	.otherwise {
		IF_ID.io.inst_in := Memory.io.rdData
		ID_EX.io.MemWrite_in := Control.io.MemWrite
		ID_EX.io.RegWrite_in := Control.io.RegWrite
		Pc.io.input := Pc.io.pc4}
	when (Control.io.NextPc === "b01".U){
		when(Branch.io.branch === "b1".U && Control.io.Branch === "b1".U){
			Pc.io.input := ImmediateGeneration.io.sb_imm.asUInt
			IF_ID.io.pc_in := 0.U
			IF_ID.io.pc4_in := 0.U
			IF_ID.io.inst_in := 0.U}
		.otherwise{Pc.io.input:=Pc.io.pc4}
		}
	.elsewhen (Control.io.NextPc === "b10".U){
		Pc.io.input := ImmediateGeneration.io.uj_imm.asUInt
		IF_ID.io.pc_in := 0.U
		IF_ID.io.pc4_in := 0.U
		IF_ID.io.inst_in := 0.U}
	.elsewhen (Control.io.NextPc === "b11".U){
		Pc.io.input := Jalr.io.out.asUInt
		IF_ID.io.pc_in := 0.U
		IF_ID.io.pc4_in := 0.U
		IF_ID.io.inst_in := 0.U}
	.otherwise {
		//Pc.io.input := Pc.io.pc4}
		when (ID_EX.io.MemRead_out === 1.U){Pc.io.input := IF_ID.io.pc4_out}
		.otherwise {Pc.io.input := Pc.io.pc4}}
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////Execute//////////////////////////////////////////////////////////
	ID_EX.io.pc_in := IF_ID.io.pc_out
	ID_EX.io.pc4_in := IF_ID.io.pc4_out
//

	ID_EX.io.Branch_in := Control.io.Branch
	ID_EX.io.MemRead_in := Control.io.MemRead
	ID_EX.io.MemtoReg_in := Control.io.MemtoReg
	ID_EX.io.AluOp_in := Control.io.AluOp
	ID_EX.io.OpA_in := Control.io.OpA
	ID_EX.io.OpB_in := Control.io.OpB
	ID_EX.io.NextPc_in := Control.io.NextPc

//
	ID_EX.io.rs1_in := Register.io.rs1
	ID_EX.io.rs2_in := Register.io.rs2
	ID_EX.io.rs1_s_in := IF_ID.io.inst_out(19,15)
	ID_EX.io.rs2_s_in := IF_ID.io.inst_out(24,20)
	ID_EX.io.rd_in := IF_ID.io.inst_out(11,7)
///////////////////////////////////////////////////////////////////Control HAzard//////////////////////////////////////////////////////////
	Branch.io.func3 := IF_ID.io.inst_out(14,12)
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
	when (BranchForwarding.io.forwardA === "b0000".U){
		Branch.io.rs1 := Register.io.rs1
		Jalr.io.in1 := Register.io.rs1
		}
	.elsewhen (BranchForwarding.io.forwardA === "b0001".U){
		Branch.io.rs1 := Alu.io.out
		Jalr.io.in1 := Register.io.rs1
		}
	.elsewhen (BranchForwarding.io.forwardA === "b0010".U){
		Branch.io.rs1 := EX_MEM.io.alu_out
		Jalr.io.in1 := Register.io.rs1
		}
	.elsewhen (BranchForwarding.io.forwardA === "b0011".U){
		Branch.io.rs1 := Register.io.WriteData
		Jalr.io.in1 := Register.io.rs1
		}
	.elsewhen (BranchForwarding.io.forwardA === "b0100".U){
		Branch.io.rs1 := DataMemory.io.out
		Jalr.io.in1 := Register.io.rs1
		}
	.elsewhen (BranchForwarding.io.forwardA === "b0101".U){
		Branch.io.rs1 := Register.io.WriteData
		Jalr.io.in1 := Register.io.rs1
		}
	.elsewhen (BranchForwarding.io.forwardA === "b0110".U){
		Branch.io.rs1 := Register.io.rs1
		Jalr.io.in1 := Alu.io.out
		}
	.elsewhen (BranchForwarding.io.forwardA === "b0111".U){
		Branch.io.rs1 := Register.io.rs1
		Jalr.io.in1 := EX_MEM.io.alu_out
		}
	.elsewhen (BranchForwarding.io.forwardA === "b1000".U){
		Branch.io.rs1 := Register.io.rs1
		Jalr.io.in1 := Register.io.WriteData
		}
	.elsewhen (BranchForwarding.io.forwardA === "b1001".U){
		Branch.io.rs1 := Register.io.rs1
		Jalr.io.in1 := DataMemory.io.out
		}
	.elsewhen (BranchForwarding.io.forwardA === "b1010".U){
		Branch.io.rs1 := Register.io.rs1
		Jalr.io.in1 := Register.io.WriteData
		}
	.otherwise {
		Branch.io.rs1 := Register.io.rs1
		Jalr.io.in1 := Register.io.rs1
		}
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
	when (BranchForwarding.io.forwardB === "b0000".U){
		Branch.io.rs2 := Register.io.rs2}
	.elsewhen (BranchForwarding.io.forwardB === "b0001".U){
		Branch.io.rs2 := Alu.io.out}
	.elsewhen (BranchForwarding.io.forwardB === "b0010".U){
		Branch.io.rs2 := EX_MEM.io.alu_out}
	.elsewhen (BranchForwarding.io.forwardB === "b0011".U){
		Branch.io.rs2 := Register.io.WriteData}
	.elsewhen (BranchForwarding.io.forwardB === "b0100".U){
		Branch.io.rs2 := DataMemory.io.out}
	.elsewhen (BranchForwarding.io.forwardB === "b0101".U){
		Branch.io.rs2 := Register.io.WriteData}
	.otherwise {Branch.io.rs2 := Register.io.rs2}
	Jalr.io.in2 := ImmediateGeneration.io.i_imm
//////////////////////////////////////////////////////////////////////
	ID_EX.io.func3_in := IF_ID.io.inst_out(14,12)
	ID_EX.io.func7_in := IF_ID.io.inst_out(30)
	AluControl.io.funct3 := ID_EX.io.func3_out
	AluControl.io.funct7 := ID_EX.io.func7_out
	AluControl.io.aluOp := ID_EX.io.AluOp_out

	when (Control.io.ExtSel === "b00".U){
		ID_EX.io.imm_in :=ImmediateGeneration.io.i_imm}
	.elsewhen (Control.io.ExtSel === "b01".U){
		ID_EX.io.imm_in :=ImmediateGeneration.io.u_imm}
	.elsewhen (Control.io.ExtSel === "b10".U){
		ID_EX.io.imm_in :=ImmediateGeneration.io.s_imm}
	.otherwise {ID_EX.io.imm_in := 0.S}
	Alu.io.AluControl := AluControl.io.out
	io.Reg_Out := Register.io.WriteData
//////////////////////////////////////////////////
	when (ID_EX.io.OpB_out === "b1".U){
		Alu.io.in2 := ID_EX.io.imm_out
		when (ForwardingUnit.io.forwardB === "b10".U){EX_MEM.io.rs2_in := EX_MEM.io.alu_out}
		.elsewhen (ForwardingUnit.io.forwardB === "b01".U){EX_MEM.io.rs2_in := Register.io.WriteData}
		.elsewhen (ForwardingUnit.io.forwardB === "b00".U){EX_MEM.io.rs2_in := ID_EX.io.rs2_out}
		}
	.otherwise {
		when (ForwardingUnit.io.forwardB === "b10".U){
			Alu.io.in2 := EX_MEM.io.alu_out
			EX_MEM.io.rs2_in := EX_MEM.io.alu_out}
		.elsewhen (ForwardingUnit.io.forwardB === "b01".U){
			Alu.io.in2 := Register.io.WriteData
			EX_MEM.io.rs2_in := Register.io.WriteData}
		.elsewhen (ForwardingUnit.io.forwardB === "b00".U){
			Alu.io.in2 := ID_EX.io.rs2_out
			EX_MEM.io.rs2_in := ID_EX.io.rs2_out}
		}
///////////////////////////////////////////////////////////////Forwarding Hazard Detection with structural////////////////////////////////////////////////////
	when (ID_EX.io.OpA_out === "b10".U){
		Alu.io.in1 := ID_EX.io.pc4_out.asSInt
		}
	.elsewhen (ID_EX.io.OpA_out === "b01".U){
		Alu.io.in1 := ID_EX.io.pc_out.asSInt
		}
	.otherwise {
		when (ForwardingUnit.io.forwardA === "b10".U){Alu.io.in1 := EX_MEM.io.alu_out}
		.elsewhen (ForwardingUnit.io.forwardA === "b01".U){Alu.io.in1 := Register.io.WriteData}
		.elsewhen (ForwardingUnit.io.forwardA === "b00".U){Alu.io.in1 := ID_EX.io.rs1_out}
		.otherwise {Alu.io.in1 := ID_EX.io.rs1_out}
		}
/*--------------------------------------------------*/
	when (MEM_WB.io.RegWrite_out === 1.U && MEM_WB.io.rd_out === IF_ID.io.inst_out(19,15)){
		ID_EX.io.rs1_in := Register.io.WriteData
		}
	.otherwise {ID_EX.io.rs1_in := Register.io.rs1}
	when (MEM_WB.io.RegWrite_out === 1.U && MEM_WB.io.rd_out === IF_ID.io.inst_out(24,20)){
		ID_EX.io.rs2_in := Register.io.WriteData
		}
	.otherwise {ID_EX.io.rs2_in := Register.io.rs2}
////////////////////////////////////////////////////////////
//////////////////////////////////////////////////
///////////////////////////////////////////////////////////////Memory////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
	EX_MEM.io.rd_in := ID_EX.io.rd_out
	EX_MEM.io.alu_in := Alu.io.out
	EX_MEM.io.MemWrite_in := ID_EX.io.MemWrite_out
	EX_MEM.io.MemRead_in := ID_EX.io.MemRead_out
	EX_MEM.io.RegWrite_in := ID_EX.io.RegWrite_out
	EX_MEM.io.MemtoReg_in := ID_EX.io.MemtoReg_out
////////////////////////////////////////////////////////////
	DataMemory.io.Addr := (EX_MEM.io.alu_out(9,2)).asUInt
	DataMemory.io.Data := EX_MEM.io.rs2_out
	DataMemory.io.MemWrite := EX_MEM.io.MemWrite_out
	DataMemory.io.MemRead := EX_MEM.io.MemtoReg_out
///////////////////////////////////////////////////////////////Write Back////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
	MEM_WB.io.rd_in := EX_MEM.io.rd_out
	MEM_WB.io.alu_in := EX_MEM.io.alu_out
	MEM_WB.io.mem_in := DataMemory.io.out
	MEM_WB.io.RegWrite_in := EX_MEM.io.RegWrite_out
	MEM_WB.io.MemtoReg_in := EX_MEM.io.MemtoReg_out
////////////////////////////////////////////////////////////
	when (MEM_WB.io.MemtoReg_out === 1.U){Register.io.WriteData := MEM_WB.io.mem_out}
	.otherwise {Register.io.WriteData := MEM_WB.io.alu_out}

	Register.io.RegWrite := MEM_WB.io.RegWrite_out
	Register.io.rd := MEM_WB.io.rd_out

}

