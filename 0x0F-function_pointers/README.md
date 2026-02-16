0x0F. Function pointers
=======================

This project practices **function pointers** in C: declaring pointers to functions, passing them as arguments, and using them to call different functions (e.g. for calculators or array iteration). You use the syntax `return_type (*name)(params)`.

Tasks
-----

**Task numbers:** 0, 1, 2, 3, 100

### 0. print_name

mandatory

Write a function that prints a name. The function takes a name and a function pointer; it calls the function pointer to do the actual printing.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0F-function_pointers`
-   File: `0-print_name.c`

### 1. array_iterator

mandatory

Write a function that executes a function given as a parameter on each element of an array.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0F-function_pointers`
-   File: `1-array_iterator.c`

### 2. int_index

mandatory

Write a function that searches for an integer in an array using a comparison function. Return the index of the first element for which the comparison function does not return 0; return -1 if no element matches or if size <= 0.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0F-function_pointers`
-   File: `2-int_index.c`

### 3. get_op_func / calculator

mandatory

Write a program that performs simple operations (add, sub, mul, div, mod). Use an array of function pointers to select the operation. Usage: `calc num1 operator num2`.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0F-function_pointers`
-   File: `3-get_op_func.c`, `3-main.c`, `3-op_functions.c`

### 100. main opcodes

mandatory

Write a program that prints the opcodes of its own main function. Usage: `./main number_of_bytes`. Use atoi and print the opcodes in hex, two hex chars per byte.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0F-function_pointers`
-   File: `100-main_opcodes.c`

---

**How to run / test**

1. Compile and run; verify that the correct function is called via the pointer.
2. Match the function pointer type to the functions you assign to it.

**Resources**

- [Function pointers (cppreference)](https://en.cppreference.com/w/c/language/pointer#Function_pointers)
- [Pointers to functions (C FAQ)](https://c-faq.com/decl/fnptr.html)
