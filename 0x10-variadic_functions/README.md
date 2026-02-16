0x10. Variadic functions
=========================

This project practices **variadic functions** in C: functions that take a variable number of arguments using `va_list`, `va_start`, `va_arg`, and `va_end`. You implement functions like `sum_them_all` or `print_numbers` that accept a count and then variadic args.

Tasks
-----

**Task numbers:** 0, 1, 2, 3

### 0. sum_them_all

mandatory

Write a function that returns the sum of all its variadic parameters. If n is 0, return 0.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x10-variadic_functions`
-   File: `0-sum_them_all.c`

### 1. print_numbers

mandatory

Write a function that prints numbers, followed by a new line. The separator string is printed between numbers. If separator is NULL, do not print it.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x10-variadic_functions`
-   File: `1-print_numbers.c`

### 2. print_strings

mandatory

Write a function that prints strings, followed by a new line. If separator is NULL, do not print it. If a string is NULL, print (nil) instead.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x10-variadic_functions`
-   File: `2-print_strings.c`

### 3. print_all

mandatory

Write a function that prints anything, based on a format string (c, i, f, s for char, int, float, string). Handle NULL for strings.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x10-variadic_functions`
-   File: `3-print_all.c`

---

**How to run / test**

1. Compile and run with different numbers of arguments.
2. Ensure you use `va_start` and `va_end` correctly to avoid undefined behavior.

**Resources**

- [Variadic functions – stdarg.h (cppreference)](https://en.cppreference.com/w/c/variadic)
- [va_start, va_arg, va_end (cppreference)](https://en.cppreference.com/w/c/variadic/va_start)
