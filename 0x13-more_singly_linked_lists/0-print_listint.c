#include "lists.h"

/**
 * print_listint -  prints all the elements of a list
 * @h: head of list
 *
 * Return: Number of node in list
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		n++;
		ptr = ptr->next;
	}
	return (n);
}
