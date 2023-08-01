#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	ptr = *head;
	*head = NULL;
	while (ptr->next != NULL)
	{
		temp = ptr->next;
		free(temp);
		ptr = temp;
	}
}
