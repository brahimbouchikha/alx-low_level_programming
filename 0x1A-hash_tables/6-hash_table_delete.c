#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *current;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				tmp = current;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				current = current->next;
			}
		}
		free(ht->array[i]);
	}
	free(ht);
}
