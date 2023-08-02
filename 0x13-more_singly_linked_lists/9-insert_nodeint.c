#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the linked list
 * @idx: index of where the node should be added
 * @n: data of node
 *
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	 unsigned int i;
	 listint_t *new;
	 listint_t *ptr = *head;

	 new = malloc(sizeof(listin_t));
	 if (!new || !head)
		 return (NULL);
	 new->n = n;
	 new->next = NULL;
	 if (idx == 0)
	 {
		 new->next = *head;
		 *head = new;
		 return (new);
	 }
	 for (i = 0; ptr && i < idx; i++)
	 {
		 if (i == idx - 1)
		 {
			 new->next = ptr->next;
			 ptr->next = new;
			 return (new);
		 }
		 else
			 ptr = ptr->next;
	 }
	 return (NULL);
}
