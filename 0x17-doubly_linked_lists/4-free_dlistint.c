#include "lists.h"

/**
 * free_dlistint - free the double linked list
 * @head: the head of the linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
