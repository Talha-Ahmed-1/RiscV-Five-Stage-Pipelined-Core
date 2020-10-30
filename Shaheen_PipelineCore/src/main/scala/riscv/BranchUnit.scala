package riscv

import chisel3._
import chisel3.util._
import chisel3.core

class BranchUnit extends Module {
  val io = IO (new Bundle {
	val func3 = Input(UInt(3.W))
	val rs1 = Input(SInt(32.W))
	val rs2 = Input(SInt(32.W))
	val branch = Output(UInt(1.W))
  })
	//io.branch := 0.U
	when (io.func3 === "b000".U){//BEQ
		when (io.rs1 === io.rs2){io.branch := 1.U}
		.otherwise {io.branch := 0.U}
		}//BNE
	.elsewhen (io.func3 === "b001".U){
		when (io.rs1 =/= io.rs2){io.branch := 1.U}
		.otherwise {io.branch := 0.U}
		}//BLT
	.elsewhen (io.func3 === "b100".U){
		when (io.rs1 < io.rs2){io.branch := 1.U}
		.otherwise {io.branch := 0.U}
		}//BGE
	.elsewhen (io.func3 === "b101".U){
		when (io.rs1 >= io.rs2){io.branch := 1.U}
		.otherwise {io.branch := 0.U}
		}//BLTU
	.elsewhen (io.func3 === "b110".U){
		when (io.rs1.asUInt < io.rs2.asUInt){io.branch := 1.U}
		.otherwise {io.branch := 0.U}
		}//BGEU
	.elsewhen (io.func3 === "b111".U){
		when (io.rs1.asUInt >= io.rs2.asUInt){io.branch := 1.U}
		.otherwise {io.branch := 0.U}
		}
	.otherwise {io.branch := 0.U}
}
