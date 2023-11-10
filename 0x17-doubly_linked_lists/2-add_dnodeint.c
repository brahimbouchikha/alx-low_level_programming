#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of list
 * @head: list to add node
 * @n: the data of the new node
 *
 * Return:The address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (*(head));
	}
	node->next = *head;
	(*head)->prev = node;
	*head = node;
	return (*(head));
}
