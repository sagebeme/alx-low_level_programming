0x17. Doubly linked lists
=========================

This project practices **doubly linked lists** in C: nodes with both `next` and `prev` pointers. You implement print, length, add at beginning/end, get node at index, sum list, insert at index, delete at index, and free list.

Tasks
-----

**Task numbers:** 0, 1, 2, 3, 4, 5, 6, 7, 8, 100, 102, 103

### 0. print_dlistint

mandatory

Write a function that prints all the elements of a dlistint_t list. Return the number of nodes.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `0-print_dlistint.c`

### 1. dlistint_len

mandatory

Write a function that returns the number of elements in a linked dlistint_t list.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `1-dlistint_len.c`

### 2. add_dnodeint

mandatory

Write a function that adds a new node at the beginning of a dlistint_t list. Return the address of the new element, or NULL on failure.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `2-add_dnodeint.c`

### 3. add_dnodeint_end

mandatory

Write a function that adds a new node at the end of a dlistint_t list. Return the address of the new element, or NULL on failure.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `3-add_dnodeint_end.c`

### 4. free_dlistint

mandatory

Write a function that frees a dlistint_t list.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `4-free_dlistint.c`

### 5. get_dnodeint

mandatory

Write a function that returns the nth node of a dlistint_t list. Index 0 is the first node. Return NULL if the node does not exist.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `5-get_dnodeint.c`

### 6. sum_dlistint

mandatory

Write a function that returns the sum of all the data (n) of a dlistint_t list. Return 0 if the list is empty.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `6-sum_dlistint.c`

### 7. insert_dnodeint

mandatory

Write a function that inserts a new node at a given position. Return the address of the new node, or NULL on failure. Update both next and prev.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `7-insert_dnodeint.c`

### 8. delete_dnodeint

mandatory

Write a function that deletes the node at index index of a dlistint_t list. Return 1 on success, -1 on failure. Update both next and prev.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `8-delete_dnodeint.c`

### 100. password (optional)

optional

Crack the password for a program (e.g. 100-password). Reverse-engineer or use the keygen.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: (as per project)

### 102. result (optional)

optional

Produce the expected result for a given task. See project spec.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: (as per project)

### 103. keygen

mandatory

Write a keygen for a crackme. Use the doubly linked list or required algorithm as specified.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x17-doubly_linked_lists`
-   File: `103-keygen.c`

---

**How to run / test**

1. Compile and run; verify forward and backward traversal.
2. Ensure `prev` and `next` are updated correctly on insert/delete; check for leaks.

**Resources**

- [Doubly linked list (Wikipedia)](https://en.wikipedia.org/wiki/Doubly_linked_list)
- [Linked list operations (insert/delete with prev/next)](https://en.wikipedia.org/wiki/Doubly_linked_list#Basic_operations)
