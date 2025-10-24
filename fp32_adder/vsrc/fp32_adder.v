module fp32_adder(
    input [31:0] a,
    input [31:0] b,
    output [31:0] result
);
    // Step 0: Special cases
    
    // Infinity flag sets 1 if either one of the exponent is 255
    wire a_is_infinity = (&a[30:23]);
    wire b_is_infinity = (&b[30:23]);
    wire is_infinity = a_is_infinity | b_is_infinity;

    wire a_is_zero = ~|a[30:23] & ~|a[22:0];
    wire b_is_zero = ~|b[30:23] & ~|b[22:0];
    wire is_zero = a_is_zero & b_is_zero;

    // nan detection: NaN occurs when either operand is NaN (exp=255 with non-zero mantissa)
    wire a_is_nan = (&a[30:23]) & (|a[22:0]);
    wire b_is_nan = (&b[30:23]) & (|b[22:0]);
    wire is_nan = a_is_nan | b_is_nan | (a_is_infinity & b_is_infinity & (a_sign ^ b_sign));

    // Step 1: Extract sign, exponent, and mantissa from inputs
    wire a_sign = a[31];
    wire b_sign = b[31];
    wire [7:0] a_exp = a[30:23];
    wire [7:0] b_exp = b[30:23];
    wire [22:0] a_mantissa = a[22:0];
    wire [22:0] b_mantissa = b[22:0];
    
    // Add hidden bit for normalized numbers
    wire [23:0] a_mantissa_24 = (a_is_zero) ? {1'b0, a_mantissa} : {1'b1, a_mantissa};
    wire [23:0] b_mantissa_24 = (b_is_zero) ? {1'b0, b_mantissa} : {1'b1, b_mantissa};
    
    
    // Step 2: Compute the difference in exponents  
    wire [7:0] exp_diff; 
    adder_nbit #(.WIDTH(8)) u_exp_diff_adder (
        .A(a_exp),
        .B(~b_exp),
        .Cin(1'b1),
        .Sum(exp_diff)
    );
    wire swap_exp = exp_diff[7];
    wire [7:0] larger_exp = swap_exp ? b_exp : a_exp;
    wire [23:0] larger_mantissa = swap_exp ? b_mantissa_24 : a_mantissa_24;
    wire [23:0] smaller_mantissa = swap_exp ? a_mantissa_24 : b_mantissa_24;
    wire larger_sign = swap_exp ? b_sign : a_sign;

    wire [7:0] exp_diff_abs = exp_diff[7] ? ~exp_diff + 1 : exp_diff;

    // Step 3: Shift the smaller mantissa by the difference in exponents
    wire [23:0] smaller_mantissa_shifted;
    right_shifter right_shifter_inst (
        .in(smaller_mantissa),
        .shift_amt(exp_diff_abs[4:0]),
        .upper_exp_bits(exp_diff_abs[7:5]),
        .out(smaller_mantissa_shifted)
    );


    // Step 4: Determine the effective operation
    wire operation_add = a_sign == b_sign;

    // Step 5: Perform the addition/subtraction
    wire [24:0] smaller_mantissa_shifted_and_extended = operation_add ? ({1'b0, smaller_mantissa_shifted}) : ({smaller_mantissa_shifted[23], smaller_mantissa_shifted});
    wire [24:0] mantissa_sub_add_result;
    adder_nbit #(.WIDTH(25)) u_M_result_adder (
        .A({1'b0, larger_mantissa}),
        .B((~operation_add) ? (~smaller_mantissa_shifted_and_extended) : smaller_mantissa_shifted_and_extended),
        .Cin(~operation_add),
        .Sum(mantissa_sub_add_result)
    );

    // Step 6: Normalize the result
    // find the position of the leading 1 in the M_sub_add_result[23:0] and shift the result left by the position
    wire [4:0] leading_1_position;
    // instantiate the priority encoder
    priority_encoder priority_encoder_inst (
        .input_significand(mantissa_sub_add_result[23:0]),
        .leading_1_position(leading_1_position)
    );


    wire [22:0] mantissa_sub_normalized_shifted;
    left_shifter left_shifter_inst (
        .in(mantissa_sub_add_result[22:0]),
        .shift_amt(leading_1_position),
        .out(mantissa_sub_normalized_shifted)
    );

    wire do_right_shift = mantissa_sub_add_result[24] ? 1'b1 : 1'b0;    
    wire [22:0] mantissa_add_normalized = do_right_shift ? mantissa_sub_add_result[23:1] : mantissa_sub_add_result[22:0];
    wire [22:0] result_mantissa = operation_add ? mantissa_add_normalized : mantissa_sub_normalized_shifted[22:0];


    // Step 7: Calculate the exponent
    // TODO: impleent using adder_nbit
    wire [7:0] result_exp = (operation_add) ? (larger_exp + {7'b0, do_right_shift}) : (larger_exp - {3'b0, leading_1_position});

    // Step 8: Compute the sign
    wire result_sign = operation_add ? a_sign : (larger_sign ^ mantissa_sub_add_result[24]);

    // Step 9: Handle overflow and underflow
    wire overflow = (result_exp == 8'd255);
    wire underflow = (result_exp == 8'd0 | (mantissa_sub_add_result[24] & ~operation_add));

    assign result = 
                    is_nan        ? {1'b0, 8'hFF, 23'h400000} :                    // NaN
                    is_infinity   ? {(a_is_infinity ? a_sign : b_sign), 8'hFF, 23'h000000} :                  // Infinity
                    is_zero       ? {result_sign, 8'h00, 23'h000000} :                  // Zero
                    overflow   ? {result_sign, 8'hFF, 23'h000000} :                  // Infinity
                    underflow  ? {result_sign, 8'h00, 23'h000000} :                  // gradual underflow
                    {result_sign, result_exp, result_mantissa[22:0]};                  // Normal result
  
endmodule
