#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: the head of the list that we want to add a node
 * @n: data if the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	if (*head ==  NULL)
	{
		(*head) = newnode;
		return ((*head));
	}

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = newnode;
	newnode->prev = ptr;
	return ((*head));
}
