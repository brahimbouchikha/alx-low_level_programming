#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the list
 * @n: data int
 *
 * Retunr: pointer to the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint *ptr;

	ptr = malloc(sizeof(listint_t));
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (head);
}
