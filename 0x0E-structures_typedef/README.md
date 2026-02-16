0x0E. Structures, typedef
==========================

This project practices **structures** and **typedef** in C: defining `struct` types, using `typedef` to create type aliases, and passing/returning structures. You model real-world data (e.g. dog, student) with structs.

Tasks
-----

**Task numbers:** 1, 2, 4, 5

### 1. init_dog

mandatory

Write a function that initialize a variable of type struct dog. Pass the dog struct by pointer and set its members.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0E-structures_typedef`
-   File: `1-init_dog.c`

### 2. print_dog

mandatory

Write a function that prints a struct dog. Print (nil) if an element is NULL; print nothing if the struct pointer is NULL.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0E-structures_typedef`
-   File: `2-print_dog.c`

### 4. new_dog

mandatory

Write a function that creates a new dog. Store copies of name and owner. Return NULL if the function fails.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0E-structures_typedef`
-   File: `4-new_dog.c`

### 5. free_dog

mandatory

Write a function that frees memory allocated for a struct dog (and the copies of name and owner).

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x0E-structures_typedef`
-   File: `5-free_dog.c`

---

**How to run / test**

1. Compile and run; verify that struct members are set and printed correctly.
2. Use Betty for style on .c and .h files.

**Resources**

- [struct (cppreference)](https://en.cppreference.com/w/c/language/struct)
- [typedef (cppreference)](https://en.cppreference.com/w/c/language/typedef)
