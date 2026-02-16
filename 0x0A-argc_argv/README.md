0x0A. argc, argv
===============

This project practices **command-line arguments** in C: using `argc` and `argv` in `main(int argc, char *argv[])`. You write programs that read and use the arguments passed when the program is run.

Tasks
-----

**Task numbers:** 0, 1, 2, 3, 4, 100

### 0. whatsmyname

mandatory

Write a program that prints its name (the name of the executable), followed by a new line. If you rename the program, it will print the new name.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0A-argc_argv`
-   File: `0-whatsmyname.c`

### 1. args

mandatory

Write a program that prints the number of arguments passed to it, followed by a new line.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0A-argc_argv`
-   File: `1-args.c`

### 2. args

mandatory

Write a program that prints all arguments it receives, one argument per line.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0A-argc_argv`
-   File: `2-args.c`

### 3. mul

mandatory

Write a program that multiplies two numbers passed as command-line arguments. Print the result, or Error if not exactly two arguments.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0A-argc_argv`
-   File: `3-mul.c`

### 4. add

mandatory

Write a program that adds positive numbers passed as command-line arguments. Print the result, or 0 if no numbers are passed. If any argument is not a digit, print Error.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0A-argc_argv`
-   File: `4-add.c`

### 100. change

mandatory

Write a program that prints the minimum number of coins to make change for an amount of money (cents). Usage: `./change cents`. Coins: 25, 10, 5, 2, 1.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0A-argc_argv`
-   File: `100-change.c`

---

**How to run / test**

1. Compile and run with different command-line arguments.
2. Verify output for valid and invalid arguments (e.g. non-numeric).

**Resources**

- [main function and argc/argv (cppreference)](https://en.cppreference.com/w/c/language/main_function)
- [Command-line arguments (C)](https://en.cppreference.com/w/c/program/env)
