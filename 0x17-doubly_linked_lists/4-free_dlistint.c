#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: the head of the lists of free
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
