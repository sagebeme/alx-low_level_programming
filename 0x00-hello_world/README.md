0x00. Hello World (C)
=====================

This project introduces **C** and the **Betty** style: writing a minimal C program, compiling it with `gcc`, and running the executable. You also run a pre-written script that executes a C file.

Tasks
-----

**Task numbers:** 4, 5, 6, 101

### 4. puts

mandatory

Write a C program that prints a message using `puts`. Compile with `gcc` and run the resulting binary.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x00-hello_world`
-   File: `4-puts.c`

### 5. printf

mandatory

Write a C program that prints a message using `printf`. Compile with `gcc` and run the resulting binary.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x00-hello_world`
-   File: `5-printf.c`

### 6. size

mandatory

Write a C program that prints the size of various types on the machine. Use `printf` and `sizeof`.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x00-hello_world`
-   File: `6-size.c`

### 101. quote

mandatory

Write a C program that prints a quote to standard error. Use the `write` function or similar.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x00-hello_world`
-   File: `101-quote.c`

---

**How to run / test**

1. Compile: `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -o output source.c`
2. Run: `./output`
3. Check Betty style if required: `betty-style.pl file.c` and `betty-doc.pl file.c`

**Resources**

- [C language reference (cppreference)](https://en.cppreference.com/w/c)
- [GCC documentation (compiling C)](https://gcc.gnu.org/onlinedocs/)
