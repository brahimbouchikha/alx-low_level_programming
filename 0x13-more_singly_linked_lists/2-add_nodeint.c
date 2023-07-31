#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the list
 * @n: data int
 *
 * Return: pointer to the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	ptr->n = n;
	ptr->next = *head;
	if(!ptr)
		return (NULL);
	*head = ptr;

	return (*head);
}
