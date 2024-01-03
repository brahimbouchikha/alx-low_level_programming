#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *entry, *current;

	if (key == NULL)
		return (0);
	entry = malloc(sizeof(hash_node_t));
	if (entry == NULL)
		return (0);
	entry->key = malloc(strlen(key) + 1);
	entry->value = malloc(strlen(value) + 1);
	entry->next = NULL;
	entry->key = strdup(key);
	entry->value = strdup(value);
	index = hash_djb2((const unsigned char *)key);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = entry;
		return (1);
	}
	else
	{
		current = ht->array[index];
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = entry;
		return (1);
	}
	return (0);
}
