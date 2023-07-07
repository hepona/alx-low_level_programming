#include "hash_tables.h"

/**
 * hash_table_print -> print hash table
 * @ht: hash table
 * Return: hash table, NULL otherwise
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

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
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (ht->array[i]->next != NULL)
				printf(", ");
		}
	}
	printf("}\n");
}