#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the linking list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
