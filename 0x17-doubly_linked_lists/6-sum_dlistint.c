#include "lists.h"

/**
 * sum_dlistint - get the sum of elements in a linked list
 * @head: the head of the linked list
 * Return: the sum of the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
