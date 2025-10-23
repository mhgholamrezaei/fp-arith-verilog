/* verilator lint_off CASEX */
/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off UNUSEDSIGNAL */

module priority_encoder(
    input wire [23:0] input_significand,
    output wire [4:0] leading_1_position
);

    // Priority encoder for 24-bit input - find exact position of leading 1
    // Using a more direct approach to find the exact bit position
    
    // Find the exact position of the leading 1
    assign leading_1_position = 
        input_significand[23] ? 5'd0 :
        input_significand[22] ? 5'd1 :
        input_significand[21] ? 5'd2 :
        input_significand[20] ? 5'd3 :
        input_significand[19] ? 5'd4 :
        input_significand[18] ? 5'd5 :
        input_significand[17] ? 5'd6 :
        input_significand[16] ? 5'd7 :
        input_significand[15] ? 5'd8 :
        input_significand[14] ? 5'd9 :
        input_significand[13] ? 5'd10 :
        input_significand[12] ? 5'd11 :
        input_significand[11] ? 5'd12 :
        input_significand[10] ? 5'd13 :
        input_significand[9]  ? 5'd14 :
        input_significand[8]  ? 5'd15 :
        input_significand[7]  ? 5'd16 :
        input_significand[6]  ? 5'd17 :
        input_significand[5]  ? 5'd18 :
        input_significand[4]  ? 5'd19 :
        input_significand[3]  ? 5'd20 :
        input_significand[2]  ? 5'd21 :
        input_significand[1]  ? 5'd22 :
        input_significand[0]  ? 5'd23 :
        5'd23;  // Default to 0 if no 1s found
    
    // Assertions for priority encoder verification
    always @(*) begin
        if (input_significand == 24'h0c00000) begin
            assert (leading_1_position == 5'h0) else $error("Priority encoder: 0x0c00000 should give position 0x0 (leading 1 at pos 23), got %h", leading_1_position);
        end
    end
    
endmodule
