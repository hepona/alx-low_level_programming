#include "hash_tables.h"

/**
 * hash_table_print -> print hash table
 * @ht: hash table
 * Return: hash table, NULL otherwise
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int f = 1;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size ; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node)
			{
				if (!f)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				if (f == 1)
					f = 0;
				node = node->next;
			}
		}
	}
	printf("}\n");
}
