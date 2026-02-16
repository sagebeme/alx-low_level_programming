0x09. Static libraries
=====================

This project practices **static libraries** in C: creating a `.a` archive with `ar` and `ranlib` from object files. You compile your C sources to `.o` and add them to a library that other programs can link against.

Tasks
-----

**Task numbers:** 0, 1, 2, 3, 4, 5, 6, 9, 100

### 0. Create static library (lib part 0)

mandatory

Compile the provided source files (e.g. 0-isupper.c, 0-memset.c, 0-strcat.c) to object files and add them to a static library. Run: `gcc -c *.c && ar rcs libholberton.a *.o && ranlib libholberton.a`.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x09-static_libraries`
-   File: `0-isupper.c`, `0-memset.c`, `0-strcat.c`

### 1. Create static library (lib part 1)

mandatory

Add more object files to the library (e.g. 1-isdigit.c, 1-memcpy.c, 1-strncat.c).

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x09-static_libraries`
-   File: `1-isdigit.c`, `1-memcpy.c`, `1-strncat.c`

### 2. Create static library (lib part 2)

mandatory

Add object files (e.g. 2-strchr.c, 2-strlen.c, 2-strncpy.c).

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x09-static_libraries`
-   File: `2-strchr.c`, `2-strlen.c`, `2-strncpy.c`

### 3. Create static library (lib part 3)

mandatory

Add object files (e.g. 3-islower.c, 3-puts.c, 3-strcmp.c, 3-strspn.c).

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x09-static_libraries`
-   File: `3-islower.c`, `3-puts.c`, `3-strcmp.c`, `3-strspn.c`

### 4. Create static library (lib part 4)

mandatory

Add object files (e.g. 4-isalpha.c, 4-strpbrk.c).

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x09-static_libraries`
-   File: `4-isalpha.c`, `4-strpbrk.c`

### 5. Create static library (lib part 5)

mandatory

Add object files (e.g. 5-strstr.c).

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x09-static_libraries`
-   File: `5-strstr.c`

### 6. Create static library (lib part 6)

mandatory

Add object files (e.g. 6-abs.c).

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x09-static_libraries`
-   File: `6-abs.c`

### 9. Create static library (lib part 9)

mandatory

Add object files (e.g. 9-strcpy.c).

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x09-static_libraries`
-   File: `9-strcpy.c`

### 100. Create static library (lib part 100)

mandatory

Add object files (e.g. 100-atoi.c). Final library should contain all required symbols.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x09-static_libraries`
-   File: `100-atoi.c`

---

**How to run / test**

1. Compile all required sources: `gcc -c *.c`
2. Create the library: `ar rcs lib<name>.a *.o` and `ranlib lib<name>.a`
3. Link a test program: `gcc main.c -L. -l<name> -o test && ./test`

**Resources**

- [GNU ar (archiver) manual](https://www.gnu.org/software/binutils/manual/html_node/ar.html)
- [Static libraries (Creating and using)](https://www.gnu.org/software/binutils/manual/ld.html#Archive-Libraries)
