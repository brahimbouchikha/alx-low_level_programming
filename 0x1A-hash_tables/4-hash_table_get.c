#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value assicieted with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element,
 *	or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr, *current;

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	if (ptr != NULL)
	{
		current = ptr;
		while(current != NULL)
		{
			if (strcmp(current->key, key) == 0)
			{
				return (current->value);
			}
			current = current->next;
		}
	}
	return (NULL);
}
