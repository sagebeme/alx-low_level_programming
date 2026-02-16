0x1A. Hash tables
=================

This project practices **hash tables** in C: implementing a simple hash table with array of buckets, hash function, set (insert/update), get, and delete. You handle collisions (e.g. chaining with linked lists) and key-value storage.

Tasks
-----

**Task numbers:** 0, 1, 2, 3, 4, 5, 6, 100

### 0. hash_table_create

mandatory

Write a function that creates a hash table. Return a pointer to the newly created hash table, or NULL on failure.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1A-hash_tables`
-   File: `0-hash_table_create.c`

### 1. djb2

mandatory

Write a hash function implementing the djb2 algorithm. Takes a string and returns an unsigned long hash value.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1A-hash_tables`
-   File: `1-djb2.c`

### 2. key_index

mandatory

Write a function that gives you the index of a key in the hash table array. Use the hash value and the table size.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1A-hash_tables`
-   File: `2-key_index.c`

### 3. hash_table_set

mandatory

Write a function that adds an element to the hash table. Handle collisions (e.g. chaining). If key already exists, update the value. Return 1 on success, 0 on failure.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1A-hash_tables`
-   File: `3-hash_table_set.c`

### 4. hash_table_get

mandatory

Write a function that retrieves a value associated with a key from the hash table. Return the value, or NULL if key not found.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1A-hash_tables`
-   File: `4-hash_table_get.c`

### 5. hash_table_print

mandatory

Write a function that prints a hash table. Print in the format {key : value, ...}, in the order they appear in the array.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1A-hash_tables`
-   File: `5-hash_table_print.c`

### 6. hash_table_delete

mandatory

Write a function that deletes a hash table. Free all nodes and the array.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1A-hash_tables`
-   File: `6-hash_table_delete.c`

### 100. sorted_hash_table

mandatory

Create a sorted hash table (or implement a variant that maintains sorted order). See project spec for requirements.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x1A-hash_tables`
-   File: `100-sorted_hash_table.c`

---

**How to run / test**

1. Compile and run; test set, get, delete, and collision handling.
2. Free all allocated memory (nodes and table).

**Resources**

- [Hash table (Wikipedia – structure and collision handling)](https://en.wikipedia.org/wiki/Hash_table)
- [Hash function (djb2 and similar)](https://en.wikipedia.org/wiki/Hash_function)
