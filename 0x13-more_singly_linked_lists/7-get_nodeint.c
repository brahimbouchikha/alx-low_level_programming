#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the linked list
 * @index: index of the node
 *
 * Return: pointer to the head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;
	for (i = 0; i < index && ptr; i++)
	{
		ptr = ptr->next;
	}

	return (ptr ? ptr : NULL);
}
