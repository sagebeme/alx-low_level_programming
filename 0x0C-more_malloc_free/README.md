0x0C. More malloc, free
=======================

This project continues **dynamic memory**: `calloc`, `realloc`, and more complex allocation patterns (e.g. allocate and fill array, realloc to resize). You practice safe allocation and reallocation.

Tasks
-----

**Task numbers:** 0, 1, 2, 3, 100, 101

### 0. malloc_checked

mandatory

Write a function that allocates memory using malloc. If malloc fails, the function should cause normal process termination with status value of 98.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0C-more_malloc_free`
-   File: `0-malloc_checked.c`

### 1. string_nconcat

mandatory

Write a function that concatenates two strings. The returned pointer shall point to a newly allocated space containing s1 followed by the first n bytes of s2, null terminated.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0C-more_malloc_free`
-   File: `1-string_nconcat.c`

### 2. calloc

mandatory

Write a function that allocates memory for an array using malloc. The memory is set to zero.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0C-more_malloc_free`
-   File: `2-calloc.c`

### 3. array_range

mandatory

Write a function that creates an array of integers from min to max (inclusive). Return pointer to the new array, or NULL on failure.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0C-more_malloc_free`
-   File: `3-array_range.c`

### 100. realloc

mandatory

Write a function that reallocates a memory block using malloc and free. Copy contents to the new block; if new_size > old_size the rest is not initialized.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0C-more_malloc_free`
-   File: `100-realloc.c`

### 101. mul

mandatory

Write a program that multiplies two positive numbers passed as command-line arguments. Print the result, or Error on failure. Use only malloc (no arrays of fixed size for the result).

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0C-more_malloc_free`
-   File: `101-mul.c`

---

**How to run / test**

1. Compile and run; use `valgrind` to check for leaks.
2. Handle `NULL` returns from `malloc`/`realloc` and edge cases.

**Resources**

- [realloc (cppreference)](https://en.cppreference.com/w/c/memory/realloc)
- [calloc (cppreference)](https://en.cppreference.com/w/c/memory/calloc)
