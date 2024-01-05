#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;	
	unsigned long int i;
	
	printf("{");
	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
		}
	}
	printf("}\n");
}
