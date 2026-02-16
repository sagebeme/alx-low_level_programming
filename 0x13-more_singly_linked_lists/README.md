0x13. More singly linked lists
==============================

This project continues **singly linked lists** with more operations: delete node at index, get node at index, sum list, insert at index, reverse list, or similar. You reinforce pointer manipulation and edge cases (empty list, single node, head).

Tasks
-----

**Task numbers:** 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 101, 102, 103

### 0. print_listint

mandatory

Write a function that prints all elements of a listint_t list. Return the number of nodes.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x13-more_singly_linked_lists`
-   File: `0-print_listint.c`

### 1. listint_len

mandatory

Write a function that returns the number of elements in a linked listint_t list.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x13-more_singly_linked_lists`
-   File: `1-listint_len.c`

### 2. add_nodeint

mandatory

Write a function that adds a new node at the beginning of a listint_t list. Return the address of the new element, or NULL on failure.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x13-more_singly_linked_lists`
-   File: `2-add_nodeint.c`

### 3. add_nodeint_end

mandatory

Write a function that adds a new node at the end of a listint_t list. Return the address of the new element, or NULL on failure.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x13-more_singly_linked_lists`
-   File: `3-add_nodeint_end.c`

### 4. free_listint

mandatory

Write a function that frees a listint_t list.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x13-more_singly_linked_lists`
-   File: `4-free_listint.c`

### 5. free_listint2

mandatory

Write a function that frees a listint_t list and sets the head to NULL.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x13-more_singly_linked_lists`
-   File: `5-free_listint2.c`

### 6. pop_listint

mandatory

Write a function that deletes the head node of a listint_t list and returns the head node's data (n). Return 0 if the list is empty.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x13-more_singly_linked_lists`
-   File: `6-pop_listint.c`

### 7. get_nodeint

mandatory

Write a function that returns the nth node of a listint_t list. Index 0 is the first node. Return NULL if the node does not exist.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x13-more_singly_linked_lists`
-   File: `7-get_nodeint.c`

### 8. sum_listint

mandatory

Write a function that returns the sum of all the data (n) of a listint_t list. Return 0 if the list is empty.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x13-more_singly_linked_lists`
-   File: `8-sum_listint.c`

### 9. insert_nodeint

mandatory

Write a function that inserts a new node at a given position. Return the address of the new node, or NULL on failure. Index 0 = add at beginning.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x13-more_singly_linked_lists`
-   File: `9-insert_nodeint.c`

### 10. delete_nodeint

mandatory

Write a function that deletes the node at index index of a listint_t list. Return 1 on success, -1 on failure.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x13-more_singly_linked_lists`
-   File: `10-delete_nodeint.c`

### 100. reverse_listint

mandatory

Write a function that reverses a listint_t list. Use at most one loop and two variables. Return a pointer to the first node of the reversed list.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x13-more_singly_linked_lists`
-   File: `100-reverse_listint.c`

### 101. print_listint_safe

mandatory

Write a function that prints a listint_t linked list safely (handles loops). Return the number of nodes in the list.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x13-more_singly_linked_lists`
-   File: `101-print_listint_safe.c`

### 102. free_listint_safe

mandatory

Write a function that frees a listint_t list safely (handles loops). Return the size of the list that was freed.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x13-more_singly_linked_lists`
-   File: `102-free_listint_safe.c`

### 103. find_loop

mandatory

Write a function that finds the loop in a linked list. Return the address of the node where the loop starts, or NULL if there is no loop.

**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x13-more_singly_linked_lists`
-   File: `103-find_loop.c`

---

**How to run / test**

1. Compile and run; test edge cases (index 0, last index, out of range).
2. Use valgrind to check for leaks after free.

**Resources**

- [Singly linked list operations (traversal, insert, delete)](https://en.wikipedia.org/wiki/Linked_list#Singly_linked_list)
- [Pointer manipulation in C](https://en.cppreference.com/w/c/language/pointer)
