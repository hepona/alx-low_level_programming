#include "hash_tables.h"

/**
 * hash_table_print -> print hash table
 * @ht: hash table
 * Return: hash table, NULL otherwise
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
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
			while (ht->array[i])
			{
				if (!f)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				if (f == 1)
					f = 0;
				ht->array[i] = ht->array[i]->next;
			}
		}
	}
	printf("}\n");
}
