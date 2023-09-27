#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to linked list
 *
 * Return: Null
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head, tmp;

	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
}
