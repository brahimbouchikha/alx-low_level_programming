#include "lists.h"

/**
 * find_list_loop - finds a loop in a linked list
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns. NULL if no loop
 */

listint_t *find_list_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}
	return (NULL);
}
/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the lists
 *
 * Return: number of nodes freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *ptr;
	size_t count;
	int l = 1;

	if (h == NULL || *h == NULL)
		return (0);
	ptr = find_list_loop(*h);
	for (count = 0; (*h != ptr || l) && *h != NULL; *h = next)
	{
		count++;
		next = (*h)->next;
		if (*h == ptr && l)
		{
			if (ptr == ptr->next)
			{
				free(*h);
				break;
			}

			count++;
			next = next->next;
			free((*h)->next);
			l = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (count);
}
