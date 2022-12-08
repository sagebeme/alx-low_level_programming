#include "lists.h"

/**
 * dlistint_len - print all the elements in a d list
 * @h: the head node
 * Return: the number of elements in the linked lists
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
