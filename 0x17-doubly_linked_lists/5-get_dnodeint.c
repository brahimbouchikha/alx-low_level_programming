#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: the head of the double linked list
 * @index: the index of the node
 * Return: the node in the index, NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		if (count == index)
		{
			return ptr;
		}
		ptr = ptr->next;
		count++;
	}
	return (NULL);
}
