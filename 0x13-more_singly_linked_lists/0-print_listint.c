#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the linking list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	listint_t *ptr = NULL;

	ptr = h;
	if (h != NULL)
	{
		while (ptr)
		{
			n++;
			printf("%d\n", ptr->n);
			ptr = ptr->next;
		}
	}
	return (n);
}
