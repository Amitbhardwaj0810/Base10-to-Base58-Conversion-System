# Base10 to Base58 Conversion System

## **Team Members**: <br> Amit Kumar<br> Sohail Nagaralli<br>Venkatesh Maraddi 

## Problem Statement
- Design and Implement a System to Convert the Base 10 Number System to the Base 58 Number System.

## Project Description
-  The project involves designing a Verilog module dsd055 that converts a 6-bit decimal (Base 10) input, representing numbers from 0 to 60, into a pair of Base 58 characters. These characters are then output one at a time to an LCD display. The module effectively handles clock synchronization and reset logic to ensure accurate conversion.

## Logic for the Conversion
- Initialization Block:
   - Initializes an array base58_chars with characters used in Base 58 encoding.
- Clock and Reset Handling:
   - It is triggered on the positive edge of the clock signal or the positive edge of the reset signal.
   - Clears the output if reset is high, otherwise loads the Base 10 input into base10_reg.
- Conversion Logic:
   - Calculates the quotient and remainder based on the value of base10_reg.
   - Assign two Base 58 characters corresponding to the quotient and the remainder to the data output.
   - Handles out-of-range quotients by defaulting to 8'h00.

## Module Description
- The dsd055 module converts a 6-bit Base 10 input into a pair of Base 58 characters, outputting a 16-bit value representing these characters. The Base 58 character set includes digits, uppercase, and lowercase letters, excluding easily confused characters (0, O, I, l).

## Conclusion
The project successfully implemented a Verilog module to convert a 6-bit Base 10 input into Base 58 characters. The module can be used in applications requiring Base 58 encoding for better readability or compact data representation.

##
Attached a PDF including a full overview of the project, simulation, and implementation insights.
The Verilog code and test case are also attached in Verilog.c file.
