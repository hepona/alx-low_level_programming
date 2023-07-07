#include "hash_tables.h"

/**
 * hash_table_print -> print hash table
 * @ht: hash table
 * Return: hash table, NULL otherwise
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t n,
	int f = 1;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	n = ht->array[i];
	printf("{");
	for (i = 0; i < ht->size ; i++)
	{
		if (n != NULL)
		{
			while (n)
			{
				if (!f)
					printf(", ");
				printf("'%s': '%s'", n->key, n->value);
				if (f == 1)
					f = 0;
				n = n->next;
			}
		}
	}
	printf("}\n");
}
