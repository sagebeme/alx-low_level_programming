0x12. Singly linked lists
=========================

This project practices **singly linked lists** in C: defining a list node structure, creating nodes, traversing the list, and implementing operations like print, length, add node at beginning/end, and free list.

Tasks
-----

**Task numbers:** 0, 1, 2, 3, 4, 100

### 0. print_list

mandatory

Write a function that prints all the elements of a list_t list. Return the number of nodes. If str is NULL, print [0] (nil).

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x12-singly_linked_lists`
-   File: `0-print_list.c`

### 1. list_len

mandatory

Write a function that returns the number of elements in a linked list_t list.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x12-singly_linked_lists`
-   File: `1-list_len.c`

### 2. add_node

mandatory

Write a function that adds a new node at the beginning of a list_t list. Return the address of the new element, or NULL on failure.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x12-singly_linked_lists`
-   File: `2-add_node.c`

### 3. add_node_end

mandatory

Write a function that adds a new node at the end of a list_t list. Return the address of the new element, or NULL on failure.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x12-singly_linked_lists`
-   File: `3-add_node_end.c`

### 4. free_list

mandatory

Write a function that frees a list_t list.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x12-singly_linked_lists`
-   File: `4-free_list.c`

### 100. first (advanced)

mandatory

Write a function that runs before main. Use the constructor attribute (or similar) so it is executed when the shared library is loaded.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x12-singly_linked_lists`
-   File: `100-first.c`

---

**How to run / test**

1. Compile and run; verify list traversal and node insertion.
2. Ensure you free all nodes to avoid memory leaks.

**Resources**

- [Linked list (Wikipedia – concept and C-style pseudocode)](https://en.wikipedia.org/wiki/Linked_list)
- [Dynamic memory (malloc/free) for list nodes](https://en.cppreference.com/w/c/memory/calloc)
