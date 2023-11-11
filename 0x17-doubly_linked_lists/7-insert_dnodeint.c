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
	dlistint_t *node, *tmp = (*h), *tmp2;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->n = n;
	node->prev = NULL;
	while (n != 1)
	{
		tmp = tmp->next;
		n--;
	}
	tmp2 = tmp->next;
	tmp->next = node;
	tmp2->prev = node;
	node->prev = tmp;
	node->next = tmp2;
	return((*h));
}
