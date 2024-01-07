#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *head = ht;
	hash_node_t *tmp, *current = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			tmp = current;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
			current = current->next;
		}
		free(current);
	}
	free(head->array);
	free(head);
}
