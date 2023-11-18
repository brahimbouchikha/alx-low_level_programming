#include "lists.h"


/**
 * calc_element - calculate number of node in list
 * @h: pointer to the head of the linked list
 * Return: number of node
 */

unsigned int calc_element(dlistint_t *h)
{
	unsigned int count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

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
	unsigned int d = 1;

	if ((*h) == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->next = NULL;
	node->n = n;
	node->prev = NULL;
	while (idx > d)
	{
		tmp = tmp->next;
		idx--;
	}
	node->next = tmp->next;
	tmp->next = node;
	node->prev = tmp;
	if (node->next != NULL)
		node->next->prev = node;
	return ((*h));
}
