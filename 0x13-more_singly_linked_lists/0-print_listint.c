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

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}