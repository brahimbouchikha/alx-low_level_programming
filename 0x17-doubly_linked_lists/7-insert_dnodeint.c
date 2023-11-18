#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: Pointer to the head of the linked list
 * @idx: the index of the list where the new node should be added
 * @n: the data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp = (*h);
	unsigned int i;

	if ((*h) == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->n = n;
	node->prev = NULL;
	if ((*h) == NULL && idx == 0)
	{
		*h = node;
		return (node);
	}
	for (i = 0; i < idx - 1 && tmp != NULL; i++)
		tmp = tmp->next;
	if (tmp == NULL && i < idx - 1)
	{
		free(node);
		return (NULL);
	}
	if (idx == 0)
	{
		node->next = *h;
		(*h)->prev = node;
		*h = node;
	}
	else
	{
		node->prev = tmp;
		node->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = node;
		tmp->next = node;
	}
	
	return (*h);
}
