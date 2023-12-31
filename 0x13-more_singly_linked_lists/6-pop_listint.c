#include "lists.h"

/**
 * pop_listint -  deletes the head node of a linked list and
 *	returns the head's node data
 * @head: pointer to the linked list
 *
 * Return: data of head node
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (*head == NULL)
		return (0);
	ptr = *head;
	data = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (data);
}
