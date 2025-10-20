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
    wire [8:0] exponent;
    wire [8:0] sum_exponent;
    wire [23:0] product_mantissa;
    wire [23:0] product_mantissa_renormalized;
    wire [23:0] operand_a, operand_b;
    wire [47:0] product, product_normalised;
    wire exception, overflow, underflow, nan;
    wire a_mantissa_not_zero, b_mantissa_not_zero;

    // Sign calculation
    assign sign = a[31] ^ b[31];
    
    // Exception flag sets 1 if either one of the exponent is 255
    wire a_is_exception = (&a[30:23]);
    wire b_is_exception = (&b[30:23]);
    assign exception = a_is_exception | b_is_exception;
    
    wire a_is_zero = ~|a[30:23] & ~|a[22:0];
    wire b_is_zero = ~|b[30:23] & ~|b[22:0];

    // nan detection: NaN occurs when either operand is NaN (exp=255 with non-zero mantissa)
    wire a_is_nan, b_is_nan;
    assign a_is_nan = (&a[30:23]) & (|a[22:0]);
    assign b_is_nan = (&b[30:23]) & (|b[22:0]);

    assign nan = a_is_nan | b_is_nan | (a_is_zero & b_is_exception) | (b_is_zero & a_is_exception);


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
    assign normalised = product[47];
    assign product_normalised = normalised ? product : product << 1;

    // Final Mantissa
    assign product_mantissa = product_normalised[46:24] + (product_normalised[23] & product_round);
    wire renormalized = product_mantissa[23] ? 1'b1 : 1'b0;

    // Zero detection
    assign zero = exception ? 1'b0 : (product_normalised[47:24] == 24'd0) ? 1'b1 : 1'b0;
    
    // Sum of exponents
    // Use adder_nbit for summing exponents
    adder_nbit #(.WIDTH(9)) u_exponent_adder (
        .A({1'b0, a[30:23]}),
        .B({1'b0, b[30:23]}),
        .Sum(sum_exponent)
    );
    
    // Final exponent calculation
    assign exponent = sum_exponent - 8'd127 + normalised + renormalized;
    
    // Overflow detection: If overall exponent is greater (or equal) to 255 then Overflow condition
    wire exp_gt_255 = exponent[8];                   // >255 ⇒ bit8=1
    wire exp_eq_255 = ~exponent[8] & (&exponent[7:0]); // 255 ⇒ bit8=0, rest=all 1
    assign overflow = !zero & (exp_gt_255 | exp_eq_255);
    
    // Underflow detection: If sum of both exponents is less than 127 then Underflow condition
    assign underflow = ((exponent[8] & exponent[7]) & !zero) ? 1'b1 : 1'b0;
    
    // Final result - IEEE-754 priority order
    assign result = 
                    nan        ? {sign, 8'hFF, 23'h400000} :                    // NaN
                    overflow   ? {sign, 8'hFF, 23'd0} :                // Infinity
                    underflow  ? {sign, 31'd0} :                        // Zero (underflow)
                    zero       ? {sign, 31'd0} :                        // Zero (normal)
                    exception  ? {sign, 8'hFF, 23'd0} :                  // Infinity (inf × inf, inf × normal)
                    {sign, exponent[7:0], product_mantissa[22:0]};      // Normal result

endmodule
