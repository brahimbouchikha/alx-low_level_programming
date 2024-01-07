#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *current = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			free(current->value);
			free(current->key);
			tmp = current;
			current = current->next;
			free(tmp);
		}
		free(current);
	}
	free(ht->array);
	free(ht);
}
