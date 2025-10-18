// IEEE-754 Single Precision Floating Point Multiplier - Combinational Logic
// Based on the implementation by Sheetal Swaroop Burada
// Pure combinational floating-point multiplication
// Dependencies: multiplier_nbit.v
//             : adder_nbit.v
//             : adder_1bit.v
//             : maj3.v
// hosein, 10/18/2025

/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off WIDTHEXPAND */

module fp32_multiplier_comb (
    input wire [31:0] a,      // First operand (IEEE-754 format)
    input wire [31:0] b,      // Second operand (IEEE-754 format)
    
    output wire [31:0] result  // Final result
);

    // Internal wires matching the original implementation
    wire sign, product_round, normalised, zero;
    wire [8:0] exponent, sum_exponent;
    wire [22:0] product_mantissa;
    wire [23:0] operand_a, operand_b;
    wire [47:0] product, product_normalised;
    wire exception, overflow, underflow;
    
    // Sign calculation
    assign sign = a[31] ^ b[31];
    
    // Exception flag sets 1 if either one of the exponent is 255
    assign exception = (&a[30:23]) | (&b[30:23]);
    
    // Assigning significand values according to Hidden Bit
    // If exponent is equal to zero then hidden bit will be 0 for that respective significand else it will be 1
    assign operand_a = (|a[30:23]) ? {1'b1, a[22:0]} : {1'b0, a[22:0]};
    assign operand_b = (|b[30:23]) ? {1'b1, b[22:0]} : {1'b0, b[22:0]};
    
    // Parameters
    parameter IMPL_TYPE = 0;
    
    // Calculate product (24x24 -> 48-bit) using custom multiplier
    multiplier_nbit #(.WIDTH(24), .IMPL_TYPE(IMPL_TYPE)) u_multiplier (
        .A(operand_a),
        .B(operand_b),
        .P(product)
    );
    
    // Product round: ending 22 bits are OR'ed for rounding operation
    assign product_round = |product_normalised[22:0];
    
    // Normalization check
    assign normalised = product[47] ? 1'b1 : 1'b0;
    
    // Assign normalized value based on 48th bit
    assign product_normalised = normalised ? product : product << 1;
    
    // Final Mantissa
    assign product_mantissa = product_normalised[46:24] + (product_normalised[23] & product_round);
    
    // Zero detection
    assign zero = exception ? 1'b0 : (product_mantissa == 23'd0) ? 1'b1 : 1'b0;
    
    // Sum of exponents
    assign sum_exponent = a[30:23] + b[30:23];
    
    // Final exponent calculation
    assign exponent = sum_exponent - 8'd127 + normalised;
    
    // Overflow detection: If overall exponent is greater than 255 then Overflow condition
    assign overflow = ((exponent[8] & !exponent[7]) & !zero);
    
    // Underflow detection: If sum of both exponents is less than 127 then Underflow condition
    assign underflow = ((exponent[8] & exponent[7]) & !zero) ? 1'b1 : 1'b0;
    
    // Final result
    assign result = exception ? 32'd0 : zero ? {sign, 31'd0} : overflow ? {sign, 8'hFF, 23'd0} : underflow ? {sign, 31'd0} : {sign, exponent[7:0], product_mantissa};

endmodule
