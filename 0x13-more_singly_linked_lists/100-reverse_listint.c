#include "main.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointerto  the linked list
 *
 * Return: pointer to node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
