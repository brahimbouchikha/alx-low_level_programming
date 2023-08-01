#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	ptr = *head;
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(temp);
		ptr = temp;
	}
	*head = NULL;
}
