# Binary to Decimal Converter in C

## Overview
This C program converts a **binary number** (e.g., `1010`) into its **decimal equivalent**.

## How It Works
1. The user inputs a binary number as a string.
2. The program validates that the input contains only `0`s and `1`s.
3. It computes the decimal equivalent using the **positional value of binary digits**.
4. The result is displayed.

## Compilation & Usage

### Requirements
- A C compiler (e.g., GCC, Clang, MSVC)

### Compiling the Program
```sh
gcc binary_to_decimal.c -o binary_to_decimal -lm
```

### Running the Program
```sh
./binary_to_decimal
```

### Expected Output
```
Enter a binary number: 1010
Decimal equivalent: 10
```