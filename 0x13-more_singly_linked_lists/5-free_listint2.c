#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *tmp;

	ptr = *head;
	if (!head)
		return;
	while (ptr != NULL)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
	*head = NULL;
}
