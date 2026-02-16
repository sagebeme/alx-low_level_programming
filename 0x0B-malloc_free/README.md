0x0B. malloc, free
==================

This project practices **dynamic memory allocation** in C: using `malloc`, `free`, and related patterns. You allocate memory on the heap, use it, and free it to avoid leaks.

Tasks
-----

**Task numbers:** 0, 1, 2, 3, 4, 100, 101

### 0. create_array

mandatory

Write a function that creates an array of chars and initializes it with a specific char. Return NULL if size is 0 or if malloc fails.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0B-malloc_free`
-   File: `0-create_array.c`

### 1. strdup

mandatory

Write a function that returns a pointer to a newly allocated space in memory containing a copy of the string given as parameter.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0B-malloc_free`
-   File: `1-strdup.c`

### 2. str_concat

mandatory

Write a function that concatenates two strings. The returned pointer should point to a newly allocated space containing the concatenated string.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0B-malloc_free`
-   File: `2-str_concat.c`

### 3. alloc_grid

mandatory

Write a function that returns a pointer to a 2D array of integers. Each element should be initialized to 0. Return NULL on failure or if width/height is 0 or negative.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0B-malloc_free`
-   File: `3-alloc_grid.c`

### 4. free_grid

mandatory

Write a function that frees a 2D grid previously created by alloc_grid.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0B-malloc_free`
-   File: `4-free_grid.c`

### 100. argstostr

mandatory

Write a function that concatenates all the arguments of your program. Return a pointer to the new string, or NULL on failure.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0B-malloc_free`
-   File: `100-argstostr.c`

### 101. strtow

mandatory

Write a function that splits a string into words. Return a pointer to an array of strings (words), or NULL on failure.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0B-malloc_free`
-   File: `101-strtow.c`

---

**How to run / test**

1. Compile and run; check for leaks with `valgrind ./output` if available.
2. Ensure every `malloc` has a matching `free` where required.

**Resources**

- [malloc, free, calloc (cppreference)](https://en.cppreference.com/w/c/memory/calloc)
- [Valgrind user manual (memory debugging)](https://valgrind.org/docs/manual/manual.html)
