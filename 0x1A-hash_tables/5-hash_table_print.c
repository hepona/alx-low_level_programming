#include "hash_tables.h"

/**
 * hash_table_print -> print hash table
 * @ht: hash table
 * Return: hash table, NULL otherwise
 */
void hash_table_print(const hash_table_t *ht)
{
	int i;

	if (ht == NULL)
	{
		printf("{}");
		return;
	}
	print("{");
	for (i = 0; ht->array[i]->next != NULL, i++)
	{
		printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
		if (ht->array[i]->next->next != NULL)
			printf(", ");
	}
	printf("}");
}
