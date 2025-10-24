module fp32_adder(
    input [31:0] a,
    input [31:0] b,
    output [31:0] result
);
    // Step 0: Special cases
    
    // Infinity flag sets 1 if either one of the exponent is 255
    wire a_is_infinity = (&a[30:23]);
    wire b_is_infinity = (&b[30:23]);
    wire infinity = a_is_infinity | b_is_infinity;

    wire a_is_zero = ~|a[30:23] & ~|a[22:0];
    wire b_is_zero = ~|b[30:23] & ~|b[22:0];
    wire zero = a_is_zero & b_is_zero;

    // nan detection: NaN occurs when either operand is NaN (exp=255 with non-zero mantissa)
    wire a_is_nan = (&a[30:23]) & (|a[22:0]);
    wire b_is_nan = (&b[30:23]) & (|b[22:0]);
    wire nan = a_is_nan | b_is_nan | (a_is_infinity & b_is_infinity & (sign_a ^ sign_b));

    // Step 1: Extract sign, exponent, and mantissa from inputs
    wire sign_a = a[31];
    wire sign_b = b[31];
    wire [7:0] exp_a = a[30:23];
    wire [7:0] exp_b = b[30:23];
    wire [22:0] mant_a = a[22:0];
    wire [22:0] mant_b = b[22:0];
    
    // Add hidden bit for normalized numbers
    wire [23:0] M_a = (a_is_zero) ? {1'b0, mant_a} : {1'b1, mant_a};
    wire [23:0] M_b = (b_is_zero) ? {1'b0, mant_b} : {1'b1, mant_b};
    
    
    // Step 2: Compute the difference in exponents  
    wire [7:0] exp_diff; 
    adder_nbit #(.WIDTH(8)) u_exp_diff_adder (
        .A(exp_a),
        .B(~exp_b),
        .Cin(1'b1),
        .Sum(exp_diff)
    );
    wire swap = exp_diff[7];
    wire [7:0] exp_larger = swap ? exp_b : exp_a;
    wire [23:0] M_larger = swap ? M_b : M_a;
    wire [23:0] M_smaller = swap ? M_a : M_b;
    wire sign_larger = swap ? sign_b : sign_a;

    wire [7:0] exp_diff_abs = exp_diff[7] ? ~exp_diff + 1 : exp_diff;

    // Step 3: Shift the smaller mantissa by the difference in exponents
    wire [23:0] M_smaller_shifted;
    right_shifter right_shifter_inst (
        .in(M_smaller),
        .shift_amt(exp_diff_abs[4:0]),
        .upper_exp_bits(exp_diff_abs[7:5]),
        .out(M_smaller_shifted)
    );


    // Step 4: Determine the effective operation
    wire operation_add = sign_a == sign_b;

    // Step 5: Perform the addition/subtraction
    wire [24:0] M_smaller_shift_and_extended = operation_add ? ({1'b0, M_smaller_shifted}) : ({M_smaller_shifted[23], M_smaller_shifted});
    wire [24:0] M_sub_add_result;
    adder_nbit #(.WIDTH(25)) u_M_result_adder (
        .A({1'b0, M_larger}),
        .B((~operation_add) ? (~M_smaller_shift_and_extended) : M_smaller_shift_and_extended),
        .Cin(~operation_add),
        .Sum(M_sub_add_result)
    );

    // Step 6: Normalize the result
    // find the position of the leading 1 in the M_sub_add_result[23:0] and shift the result left by the position
    wire [4:0] leading_1_position;
    // instantiate the priority encoder
    priority_encoder priority_encoder_inst (
        .input_significand(M_sub_add_result[23:0]),
        .leading_1_position(leading_1_position)
    );


    wire [22:0] M_sub_normalized_shifted;
    left_shifter left_shifter_inst (
        .in(M_sub_add_result[22:0]),
        .shift_amt(leading_1_position),
        .out(M_sub_normalized_shifted)
    );

    wire do_right_shift = M_sub_add_result[24] ? 1'b1 : 1'b0;    
    wire [22:0] M_add_normalized = do_right_shift ? M_sub_add_result[23:1] : M_sub_add_result[22:0];
    wire [22:0] M_result = operation_add ? M_add_normalized : M_sub_normalized_shifted[22:0];


    // Step 7: Calculate the exponent
    // TODO: impleent using adder_nbit
    wire [7:0] exp_result = (operation_add) ? (exp_larger + {7'b0, do_right_shift}) : (exp_larger - {3'b0, leading_1_position});

    // Step 8: Compute the sign
    wire sign_result = operation_add ? sign_a : (sign_larger ^ M_sub_add_result[24]);

    // Step 9: Handle overflow and underflow
    wire overflow = (exp_result == 8'd255);
    wire underflow = (exp_result == 8'd0 | (M_sub_add_result[24] & ~operation_add));

    assign result = 
                    nan        ? {1'b0, 8'hFF, 23'h400000} :                    // NaN
                    infinity   ? {(a_is_infinity ? sign_a : sign_b), 8'hFF, 23'h000000} :                  // Infinity
                    zero       ? {sign_result, 8'h00, 23'h000000} :                  // Zero
                    overflow   ? {sign_result, 8'hFF, 23'h000000} :                  // Infinity
                    underflow  ? {sign_result, 8'h00, 23'h000000} :                  // gradual underflow
                    {sign_result, exp_result, M_result[22:0]};                  // Normal result
  
endmodule
