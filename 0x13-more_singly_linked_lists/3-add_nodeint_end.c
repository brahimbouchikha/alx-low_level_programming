#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a list
 * @head - pointer to linked list
 * @n: data integer
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = temp;
	return (ptr);
}
