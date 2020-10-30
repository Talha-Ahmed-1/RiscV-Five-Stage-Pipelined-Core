package riscv
import chisel3._

class BranchForwardUnit extends Module {
  val io = IO(new Bundle {
    val ID_EX_rd = Input(UInt(5.W))
    val ID_EX_MemRead = Input(UInt(1.W))
    val EX_MEM_rd = Input(UInt(5.W))
    val EX_MEM_MemRead = Input(UInt(1.W))
    val MEM_WB_rd = Input(UInt(5.W))
    val MEM_WB_MemtoReg = Input(UInt(1.W))
    val rs1_s = Input(UInt(5.W))
    val rs2_s = Input(UInt(5.W))
    val branch = Input(UInt(1.W))
    val forwardA = Output(UInt(4.W))
    val forwardB = Output(UInt(4.W))
  })

    io.forwardA := "b0000".U
    io.forwardB := "b0000".U

    when(io.branch === 1.U) {
      when(io.ID_EX_rd =/= "b00000".U && io.ID_EX_MemRead =/= 1.U && (io.ID_EX_rd === io.rs1_s) && (io.ID_EX_rd === io.rs2_s)) {
        io.forwardA := "b0001".U
        io.forwardB := "b0001".U
      } .elsewhen(io.ID_EX_rd =/= "b00000".U && io.ID_EX_MemRead =/= 1.U && (io.ID_EX_rd === io.rs1_s)) {
        io.forwardA := "b0001".U
      } .elsewhen(io.ID_EX_rd =/= "b00000".U && io.ID_EX_MemRead =/= 1.U && (io.ID_EX_rd === io.rs2_s)) {
        io.forwardB := "b0001".U
      }

      
      when(io.EX_MEM_rd =/= "b00000".U && io.EX_MEM_MemRead =/= 1.U &&
        ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs1_s) && (io.ID_EX_rd === io.rs2_s)) &&
        (io.EX_MEM_rd === io.rs1_s) && (io.EX_MEM_rd === io.rs2_s)) {

        io.forwardA := "b0010".U
        io.forwardB := "b0010".U

      } .elsewhen(io.EX_MEM_rd =/= "b00000".U && io.EX_MEM_MemRead =/= 1.U &&
        ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs2_s)) &&
        (io.EX_MEM_rd === io.rs2_s)) {

        io.forwardB := "b0010".U

      } .elsewhen(io.EX_MEM_rd =/= "b00000".U && io.EX_MEM_MemRead =/= 1.U &&
        ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs1_s)) &&
        (io.EX_MEM_rd === io.rs1_s)) {

        io.forwardA := "b0010".U

      } .elsewhen(io.EX_MEM_rd =/= "b00000".U && io.EX_MEM_MemRead === 1.U &&
        ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs1_s) && (io.ID_EX_rd === io.rs2_s)) &&
        (io.EX_MEM_rd === io.rs1_s) && (io.EX_MEM_rd === io.rs2_s)) {
        
        io.forwardA := "b0100".U
        io.forwardB := "b0100".U

      } .elsewhen(io.EX_MEM_rd =/= "b00000".U && io.EX_MEM_MemRead === 1.U &&
        ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs2_s)) &&
        (io.EX_MEM_rd === io.rs2_s)) {

        io.forwardB := "b0100".U

      } .elsewhen(io.branch === 1.U && io.EX_MEM_rd =/= "b00000".U && io.EX_MEM_MemRead === 1.U &&
        ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs1_s)) &&
        (io.EX_MEM_rd === io.rs1_s)) {

        io.forwardA := "b0100".U

      }

      
      when(io.MEM_WB_rd =/= "b00000".U && io.MEM_WB_MemtoReg =/= 1.U &&
        
        ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs1_s) && (io.ID_EX_rd === io.rs2_s)) &&
        
        ~((io.EX_MEM_rd =/= "b00000".U) && (io.EX_MEM_rd === io.rs1_s) && (io.EX_MEM_rd === io.rs2_s)) &&
        (io.MEM_WB_rd === io.rs1_s) && (io.MEM_WB_rd === io.rs2_s)) {

        io.forwardA := "b0011".U
        io.forwardB := "b0011".U

      }
        .elsewhen(io.MEM_WB_rd =/= "b00000".U && io.MEM_WB_MemtoReg =/= 1.U &&
          
          ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs2_s)) &&
          
          ~((io.EX_MEM_rd =/= "b00000".U) && (io.EX_MEM_rd === io.rs2_s)) &&
          (io.MEM_WB_rd === io.rs2_s)) {

          io.forwardB := "b0011".U

        }
        .elsewhen(io.MEM_WB_rd =/= "b00000".U && io.MEM_WB_MemtoReg =/= 1.U &&
          
          ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs1_s)) &&
          
          ~((io.EX_MEM_rd =/= "b00000".U) && (io.EX_MEM_rd === io.rs1_s)) &&
          (io.MEM_WB_rd === io.rs1_s)) {

          io.forwardA := "b0011".U

        } .elsewhen(io.MEM_WB_rd =/= "b00000".U && io.MEM_WB_MemtoReg === 1.U &&
        
        ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs1_s) && (io.ID_EX_rd === io.rs2_s)) &&
        
        ~((io.EX_MEM_rd =/= "b00000".U) && (io.EX_MEM_rd === io.rs1_s) && (io.EX_MEM_rd === io.rs2_s)) &&
        (io.MEM_WB_rd === io.rs1_s) && (io.MEM_WB_rd === io.rs2_s)) {
        
        io.forwardA := "b0101".U
        io.forwardB := "b0101".U

      }
        .elsewhen(io.MEM_WB_rd =/= "b00000".U && io.MEM_WB_MemtoReg === 1.U &&
          
          ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs2_s)) &&
          
          ~((io.EX_MEM_rd =/= "b00000".U) && (io.EX_MEM_rd === io.rs2_s)) &&
          (io.MEM_WB_rd === io.rs2_s)) {

          io.forwardB := "b0101".U

        }
        .elsewhen(io.MEM_WB_rd =/= "b00000".U && io.MEM_WB_MemtoReg === 1.U &&
          
          ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs1_s)) &&
          
          ~((io.EX_MEM_rd =/= "b00000".U) && (io.EX_MEM_rd === io.rs1_s))&&
          (io.MEM_WB_rd === io.rs1_s)) {

          io.forwardA := "b0101".U

        }

    }
      
      .elsewhen(io.branch === 0.U) {
        
        when(io.ID_EX_rd =/= "b00000".U && io.ID_EX_MemRead =/= 1.U && (io.ID_EX_rd === io.rs1_s)){
          io.forwardA := "b0110".U
        }

        
        when(io.EX_MEM_rd =/= "b00000".U && io.EX_MEM_MemRead =/= 1.U &&
          ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs1_s)) &&
          (io.EX_MEM_rd === io.rs1_s)) {

          io.forwardA := "b0111".U

        }
          .elsewhen(io.EX_MEM_rd =/= "b00000".U && io.EX_MEM_MemRead === 1.U &&
            ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs1_s)) &&
            (io.EX_MEM_rd === io.rs1_s)) {
            
            io.forwardA := "b1001".U

        }


        
        when(io.MEM_WB_rd =/= "b00000".U && io.MEM_WB_MemtoReg =/= 1.U &&
         
          ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs1_s)) &&
         
          ~((io.EX_MEM_rd =/= "b00000".U) && (io.EX_MEM_rd === io.rs1_s)) &&
          (io.MEM_WB_rd === io.rs1_s)) {

          io.forwardA := "b1000".U

        }
           .elsewhen(io.MEM_WB_rd =/= "b00000".U && io.MEM_WB_MemtoReg === 1.U &&
          
          ~((io.ID_EX_rd =/= "b00000".U) && (io.ID_EX_rd === io.rs1_s)) &&
         
          ~((io.EX_MEM_rd =/= "b00000".U) && (io.EX_MEM_rd === io.rs1_s)) &&
          (io.MEM_WB_rd === io.rs1_s)) {
          
          io.forwardA := "b1010".U

        }


      }
}
