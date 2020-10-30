package riscv

import chisel3.iotesters.PeekPokeTester

class BranchUnitTests(c: BranchUnit) extends PeekPokeTester(c) {
	//poke(c.io.func3, 0)
	//poke(c.io.rs1, 2)
	//poke(c.io.rs2, 0)
        step(1)
	//expect (c.io.branch, 1)
}
