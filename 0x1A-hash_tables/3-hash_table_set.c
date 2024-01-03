#include "hash_tables.h"

/**
 * make_node - create a new hash node
 * @key: the key of the hash node
 * @value: the value of the hash node
 * Return: the new hash node, or NULL on failure
 */
hash_node_t *make_node(const char *key, const char *value)
{
        hash_node_t *node = (hash_node_t *) malloc(sizeof(hash_node_t));

        if (!node)
                return (NULL);
        node->value = strdup(value);
        node->key = strdup(key);
        if (!node->key || !node->value)
        {
                free(node->key);
                free(node->value);
                free(node);
                return (NULL);
        }
 	 node->next = NULL;
        return (node);
}

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
  * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
        unsigned long int index;
        hash_node_t *entry ;

        if (!key || !value || !ht)
                return (0);
        entry = (hash_node_t *) malloc(sizeof(hash_node_t));
        if (!entry)
                return (0);
        index = key_index((const unsigned char *)key, ht->size);
	entry = make_node(key, value);
	if (entry == NULL)
		return (0);
	entry->next = ht->array[index];
	ht->array[index] = entry;
        return (1);
}

