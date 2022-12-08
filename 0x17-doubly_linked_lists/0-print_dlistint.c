#include "lists.h"

/**
 * print_dlistint - print all the elements in a d list
 * @h: the head node
 * Return: the number of elements in the linked lists
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
