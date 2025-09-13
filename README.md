IS2101 – Arithmetic Operations (NNM24IS196)
Inside this repo you will find C programs that simulate signed integer multiplication and division using hardware algorithms that output steps.

📌 Purpose
Implement Shift-Add Multiplication (signed integers).
Implement Restoring and Non-Restoring Division.
Familiarize yourself with hardware-type arithmetic operations.

📂 Files
multiplication.c – Shift-Add multiplication
restoring_division.c – Restoring division
non_restoring_division.c – Non-restoring division


🖥️ Notes
Inputs:
Multiplication → multiplicand & multiplier
Division → dividend & divisor

Outputs:
Trace ( A , Q, R, ) - step by step
Final Product / Quotient / Remainder → binary / decimal

▶️ Compile & Run
gcc shift_add_multiplication.c -o multiply
./multiply
gcc restoring_division.c -o restoring
./restoring
gcc non_restoring_division.c -o nonrestoring
./nonrestoring


📊 Summary
Restoring Division → easy but slow
Non-Restoring Division → fast, efficient


Shift-Add Multiplication → shows hardware-style multiplication
