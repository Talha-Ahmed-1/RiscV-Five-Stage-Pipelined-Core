package riscv

import chisel3._

class ID_EX_Reg extends Module {
  val io = IO (new Bundle {

	val pc_in = Input(UInt(32.W))
	val pc_out = Output(UInt(32.W))
	val pc4_in = Input(UInt(32.W))
	val pc4_out = Output(UInt(32.W))
//
	val MemWrite_in = Input(UInt(1.W))
	val Branch_in = Input(UInt(1.W))
	val MemRead_in = Input(UInt(1.W))
	val RegWrite_in = Input(UInt(1.W))
	val MemtoReg_in = Input(UInt(1.W))
	val AluOp_in = Input(UInt(3.W))
	val OpA_in = Input(UInt(2.W))
	val OpB_in = Input(UInt(1.W))
	val NextPc_in = Input(UInt(2.W))

	val MemWrite_out = Output(UInt(1.W))
	val Branch_out = Output(UInt(1.W))
	val MemRead_out = Output(UInt(1.W))
	val RegWrite_out = Output(UInt(1.W))
	val MemtoReg_out = Output(UInt(1.W))
	val AluOp_out = Output(UInt(3.W))
	val OpA_out = Output(UInt(2.W))
	val OpB_out = Output(UInt(1.W))
	val NextPc_out = Output(UInt(2.W))
//
	val imm_in = Input(SInt(32.W))
	val imm_out = Output(SInt(32.W))
//
	val func3_in = Input(UInt(3.W))
	val func7_in = Input(UInt(1.W))
	val func3_out = Output(UInt(3.W))
	val func7_out = Output(UInt(1.W))
//
	val rs1_in = Input(SInt(32.W))
	val rs2_in = Input(SInt(32.W))
	val rs1_out = Output(SInt(32.W))
	val rs2_out = Output(SInt(32.W))
	val rs1_s_in = Input(UInt(5.W))
	val rs2_s_in = Input(UInt(5.W))
	val rs1_s_out = Output(UInt(5.W))
	val rs2_s_out = Output(UInt(5.W))
	val rd_in = Input(UInt(5.W))
	val rd_out = Output(UInt(5.W))

  })

	val pcreg = RegInit(0.U(32.W))
	val pc4reg = RegInit(0.U(32.W))
	val instreg = RegInit(0.U(32.W))
	pcreg := io.pc_in
	io.pc_out := pcreg
	pc4reg := io.pc4_in
	io.pc4_out := pc4reg

	val immreg = RegInit(0.S(32.W))
	immreg := io.imm_in
	io.imm_out := immreg

	val func3reg = RegInit(0.U(3.W))
	func3reg := io.func3_in
	io.func3_out := func3reg
	val func7reg = RegInit(0.U(1.W))
	func7reg := io.func7_in
	io.func7_out := func7reg

	val rs1reg = RegInit(0.S(32.W))
	rs1reg := io.rs1_in
	io.rs1_out := rs1reg
	val rs2reg = RegInit(0.S(32.W))
	rs2reg := io.rs2_in
	io.rs2_out := rs2reg
	val rs1sreg = RegInit(0.U(5.W))
	rs1sreg := io.rs1_s_in
	io.rs1_s_out := rs1sreg
	val rs2sreg = RegInit(0.U(5.W))
	rs2sreg := io.rs2_s_in
	io.rs2_s_out := rs2sreg
	val rdreg = RegInit(0.U(5.W))
	rdreg := io.rd_in
	io.rd_out := rdreg

	val MemWritereg = RegInit(0.U(1.W))
	val Branchreg = RegInit(0.U(1.W))
	val MemReadreg = RegInit(0.U(1.W))
	val RegWritereg = RegInit(0.U(1.W))
	val MemtoRegreg = RegInit(0.U(1.W))
	val AluOpreg = RegInit(0.U(3.W))
	val OpAreg = RegInit(0.U(2.W))
	val OpBreg = RegInit(0.U(1.W))
	val NextPcreg = RegInit(0.U(2.W))

	MemWritereg := io.MemWrite_in
	io.MemWrite_out := MemWritereg
	Branchreg := io.Branch_in
	io.Branch_out := Branchreg
	MemReadreg := io.MemRead_in
	io.MemRead_out := MemReadreg
	RegWritereg := io.RegWrite_in
	io.RegWrite_out := RegWritereg
	MemtoRegreg := io.MemtoReg_in
	io.MemtoReg_out := MemtoRegreg
	AluOpreg := io.AluOp_in
	io.AluOp_out := AluOpreg
	OpAreg := io.OpA_in
	io.OpA_out := OpAreg
	OpBreg := io.OpB_in
	io.OpB_out := OpBreg
	NextPcreg := io.NextPc_in
	io.NextPc_out := NextPcreg

}
