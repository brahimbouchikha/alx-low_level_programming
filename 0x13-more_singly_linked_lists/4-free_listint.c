#include "list.h"

/**
 * free_listint - frees linikd list
 * @head: pointer to the linked list
 */

void free_listint(listint_t *head)
{
	listint *temp, *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}
}
