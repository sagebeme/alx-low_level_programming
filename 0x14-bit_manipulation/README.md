0x14. Bit manipulation
=====================

This project practices **bit manipulation** in C: using bitwise operators (`&`, `|`, `^`, `~`, `<<`, `>>`) to get/set/clear bits, convert binary strings to unsigned int, print binary representation, or check endianness.

Tasks
-----

**Task numbers:** 0, 1, 2, 3, 4, 5, 100

### 0. binary_to_uint

mandatory

Write a function that converts a binary number string to an unsigned int. Return 0 if the string contains any character that is not 0 or 1, or if the string is NULL.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x14-bit_manipulation`
-   File: `0-binary_to_uint.c`

### 1. print_binary

mandatory

Write a function that prints the binary representation of a number. Use only _putchar; no printf %b or arrays.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x14-bit_manipulation`
-   File: `1-print_binary.c`

### 2. get_bit

mandatory

Write a function that returns the value of a bit at a given index. Index 0 is the least significant bit. Return -1 on error.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x14-bit_manipulation`
-   File: `2-get_bit.c`

### 3. set_bit

mandatory

Write a function that sets the value of a bit to 1 at a given index. Return 1 on success, -1 on failure.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x14-bit_manipulation`
-   File: `3-set_bit.c`

### 4. clear_bit

mandatory

Write a function that sets the value of a bit to 0 at a given index. Return 1 on success, -1 on failure.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x14-bit_manipulation`
-   File: `4-clear_bit.c`

### 5. flip_bits

mandatory

Write a function that returns the number of bits you would need to flip to get from one number to another.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x14-bit_manipulation`
-   File: `5-flip_bits.c`

### 100. get_endianness

mandatory

Write a function that checks the endianness of the machine. Return 0 for big endian, 1 for little endian.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x14-bit_manipulation`
-   File: `100-get_endianness.c`

---

**How to run / test**

1. Compile and run; verify output for different bit positions and values.
2. Check edge cases (NULL input, invalid binary string).

**Resources**

- [Bitwise operators in C (cppreference)](https://en.cppreference.com/w/c/language/operator_arithmetic#Bitwise_logic_operators)
- [Integer types and bit representation](https://en.cppreference.com/w/c/language/arithmetic_types)
- [Endianness (Wikipedia)](https://en.wikipedia.org/wiki/Endianness)
