0x18. Dynamic libraries
======================

This project practices **dynamic (shared) libraries** in C: creating `.so` files with `gcc -shared -fPIC`, installing them (e.g. with `LD_LIBRARY_PATH` or system paths), and linking programs with `-lname` so they load the library at runtime.

Tasks
-----

**Task numbers:** 0, 1, 2, 3, 4, 5, 6, 9, 100, 101

### 0. Create dynamic library (sources)

mandatory

Compile the provided C sources with -fPIC and create a shared library (e.g. libdynamic.so). Run: `gcc -c -fPIC *.c && gcc -shared -o libdynamic.so *.o`.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x18-dynamic_libraries`
-   File: `0-isupper.c`, `0-memset.c`, `0-strcat.c`, and other .c sources

### 1. create_dynamic_lib.sh

mandatory

Write a script that creates a dynamic library from all .c files in the current directory. Use -fPIC and -shared.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x18-dynamic_libraries`
-   File: `1-create_dynamic_lib.sh`

### 2. Dynamic library (part 2)

mandatory

Add or ensure all required symbols are in the shared library (e.g. 2-strchr.c, 2-strlen.c, 2-strncpy.c). Link a program and run with LD_LIBRARY_PATH.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x18-dynamic_libraries`
-   File: `2-strchr.c`, `2-strlen.c`, `2-strncpy.c`

### 3. Dynamic library (part 3)

mandatory

Include 3-*.c sources in the library. Build and test.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x18-dynamic_libraries`
-   File: `3-islower.c`, `3-puts.c`, `3-strcmp.c`, `3-strspn.c`

### 4. Dynamic library (part 4)

mandatory

Include 4-*.c sources in the library.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x18-dynamic_libraries`
-   File: `4-isalpha.c`, `4-strpbrk.c`

### 5. Dynamic library (part 5)

mandatory

Include 5-strstr.c in the library.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x18-dynamic_libraries`
-   File: `5-strstr.c`

### 6. Dynamic library (part 6)

mandatory

Include 6-abs.c in the library.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x18-dynamic_libraries`
-   File: `6-abs.c`

### 9. Dynamic library (part 9)

mandatory

Include 9-strcpy.c in the library.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x18-dynamic_libraries`
-   File: `9-strcpy.c`

### 100. Dynamic library (full)

mandatory

Create the complete shared library (e.g. 100-operations.so or libdynamic.so) with all required symbols. Link and run a program that uses it.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x18-dynamic_libraries`
-   File: `100-atoi.c`, and the created .so

### 101. make_me_win (optional)

optional

Script or program that makes a given program "win" (e.g. inject or replace a function). See project spec.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x18-dynamic_libraries`
-   File: `101-make_me_win.sh`

---

**How to run / test**

1. Build the shared library: `gcc -c -fPIC *.c && gcc -shared -o lib<name>.so *.o`
2. Link: `gcc main.c -L. -l<name> -o program`
3. Run: `LD_LIBRARY_PATH=. ./program` (or export LD_LIBRARY_PATH)

**Resources**

- [Program Library HOWTO (shared libraries)](https://tldp.org/HOWTO/Program-Library-HOWTO/)
- [ld.so(8) – dynamic linker/loader (man page)](https://man7.org/linux/man-pages/man8/ld.so.8.html)
- [GCC options: -fPIC, -shared](https://gcc.gnu.org/onlinedocs/gcc/Code-Gen-Options.html)
