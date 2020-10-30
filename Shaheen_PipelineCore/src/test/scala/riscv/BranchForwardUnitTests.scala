package riscv

import chisel3.iotesters.PeekPokeTester

class BranchForwardUnitTests(c: BranchForwardUnit) extends PeekPokeTester(c) {
        step(1)
}
