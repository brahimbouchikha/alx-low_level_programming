#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 *	linked list.
 * @head: pointer to the linked list
 * @index: index to the node that should be deleted
 *
 * Return: 1 if succeeded, -1 otherwise
 */





int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = head;
	listint *current;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!ptr || !(ptr->next))
			return (-1);
		ptr = ptr->next;
	}
	current = ptr->next;
	ptr->next = current->next;
	free(current);
	return (1);
}
