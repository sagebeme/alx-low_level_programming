#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * struct listint_s - Singly linked list
 * @n: integer stored at the node
 * @index: index of node in list
 * @next: pointer to next node
 *
 * Description: singly linked list node sturcture
 */

typedef struct listint_s
{
	/* integer stored at the node*/
	int n;
	/* index of the node in the list*/
	size_t index;
	/* pointer to next node*/
	struct listint_s *next;
} listint_s;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif /*SEARCH_ALGOS_H*/
