#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the linked list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *tmp;

	ptr = *head;

	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
	*head = NULL;
}
