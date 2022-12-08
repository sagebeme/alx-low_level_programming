#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of a d list
 * @head: the head of the linked list
 * @n: the value to be added in the linked list
 * Return: new_node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
