#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data
 *	(n) of a listint_t linked list
 * @head: pointer to the linked list
 *
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
