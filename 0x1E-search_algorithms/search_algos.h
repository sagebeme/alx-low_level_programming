#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct singly_list - Singly linked list
 * @node_int: integer stored at the node
 * @index: index of node in list
 * @next: pointer to next node
 *
 * Description: singly linked list node sturcture
 */

typedef struct singly_list
{
	/* integer stored at the node*/
	int node_int;
	/* index of the node in the list*/
	size_t index;
	/* pointer to next node*/
	struct singly_list *next;
}singly_list;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif /*SEARCH_ALGOS_H*/
