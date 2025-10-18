// IEEE-754 Single Precision Floating Point Multiplier (FP32)
// Dependencies: fp32_multiplier_comb.v
//              : multiplier_nbit.v
//              : adder_nbit.v
//              : adder_1bit.v
//              : maj3.v
// hosein, 10/18/2025

/* verilator lint_off UNUSEDSIGNAL */

module fp32_multiplier (
    input wire clk,
    input wire reset,
    input wire [31:0] a,      // First operand (IEEE-754 format)
    input wire [31:0] b,      // Second operand (IEEE-754 format)
    input wire start,         // Start computation
    output reg [31:0] result, // Result (IEEE-754 format)
    output reg done,          // Computation complete
    output reg valid          // Result is valid
);

    // State machine
    reg [2:0] state;
    parameter IDLE = 3'd0;
    parameter COMPUTE = 3'd1;
    parameter FINISH = 3'd2;
    
    // Combinational logic outputs
    wire [31:0] comb_result;
    
    // Instantiate combinational logic module
    fp32_multiplier_comb comb_logic (
        .a(a),
        .b(b),
        .result(comb_result)
    );
    
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= IDLE;
            result <= 32'd0;
            done <= 1'b0;
            valid <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    done <= 1'b0;
                    valid <= 1'b0;
                    if (start) begin
                        state <= COMPUTE;
                    end
                end
                
                COMPUTE: begin
                    // Use combinational result
                    result <= comb_result;
                    state <= FINISH;
                end
                
                FINISH: begin
                    done <= 1'b1;
                    valid <= 1'b1;
                    state <= IDLE;
                end
                
                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule
