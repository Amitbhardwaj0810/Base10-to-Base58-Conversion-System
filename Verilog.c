module dsd055(
    input clk,
    input reset,
    input [5:0] base10, // 6-bit input to represent numbers from 0 to 60
    output reg [15:0] data // 16-bit output to send one base58 character at a time to LCD // Control signal to enable LCD
);

    reg [7:0] base58_chars [0:57];
    integer quotient, remainder;
    reg [5:0] base10_reg; // Register to hold the value of base10
    
    initial begin
        // Initialize base58 character set
        base58_chars[0]  = "1";
        base58_chars[1]  = "2";
        base58_chars[2]  = "3";
        base58_chars[3]  = "4";
        base58_chars[4]  = "5";
        base58_chars[5]  = "6";
        base58_chars[6]  = "7";
        base58_chars[7]  = "8";
        base58_chars[8]  = "9";
        base58_chars[9]  = "A";
        base58_chars[10] = "B";
        base58_chars[11] = "C";
        base58_chars[12] = "D";
        base58_chars[13] = "E";
        base58_chars[14] = "F";
        base58_chars[15] = "G";
        base58_chars[16] = "H";
        base58_chars[17] = "J";
        base58_chars[18] = "K";
        base58_chars[19] = "L";
        base58_chars[20] = "M";
        base58_chars[21] = "N";
        base58_chars[22] = "P";
        base58_chars[23] = "Q";
        base58_chars[24] = "R";
        base58_chars[25] = "S";
        base58_chars[26] = "T";
        base58_chars[27] = "U";
        base58_chars[28] = "V";
        base58_chars[29] = "W";
        base58_chars[30] = "X";
        base58_chars[31] = "Y";
        base58_chars[32] = "Z";
        base58_chars[33] = "a";
        base58_chars[34] = "b";
        base58_chars[35] = "c";
        base58_chars[36] = "d";
        base58_chars[37] = "e";
        base58_chars[38] = "f";
        base58_chars[39] = "g";
        base58_chars[40] = "h";
        base58_chars[41] = "i";
        base58_chars[42] = "j";
        base58_chars[43] = "k";
        base58_chars[44] = "m";
        base58_chars[45] = "n";
        base58_chars[46] = "o";
        base58_chars[47] = "p";
        base58_chars[48] = "q";
        base58_chars[49] = "r";
        base58_chars[50] = "s";
        base58_chars[51] = "t";
        base58_chars[52] = "u";
        base58_chars[53] = "v";
        base58_chars[54] = "w";
        base58_chars[55] = "x";
        base58_chars[56] = "y";
        base58_chars[57] = "z";
        // Add remaining base58 characters here...
        
        // Initiali
    end
    
    always @(*) begin
        quotient = base10 / 58;
        remainder = base10 % 58;
        data[15:8] = base58_chars[quotient];
        data[7:0] = base58_chars[remainder];
    end
endmodule



//  ********************  TEST BENCH:  **********************
module dsdtbb;

    // Parameters
    parameter CLK_PERIOD = 10; // Clock period in ns

    // Inputs
    reg clk;
    reg reset;
    reg [5:0] base10;

    // Outputs
    wire [15:0]data;

    // Instantiate the module to be tested
    dsd055 dut (
        .clk(clk),
        .reset(reset),
        .base10(base10),
        .data(data)
    );

    // Clock generation
    always #((CLK_PERIOD)/2) clk = ~clk;

    // Test stimulus
    initial begin
        // Initialize inputs
        clk = 0;
        reset = 1;
        base10 = 0;

        // Wait for a few clock cycles after reset
        #10;

        // De-assert reset
        reset = 0;

        // Test case 1: Enable signal inactive
        base10 = 30;
        #20;
		  
        base10 = 40;
        #20;

        // Test case 3: Another input
     
        base10 = 5;
        #20;

        // Test case 4: Another input

 end 
endmodule

