#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	char flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
