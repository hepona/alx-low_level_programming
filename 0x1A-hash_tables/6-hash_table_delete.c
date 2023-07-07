#include "hash_tables.h"

/**
 * hash_table_delete -> delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size ; i++)
	{
		if (ht->array[i] != NULL)
		{
			free(ht->array[i]->value);
			free(ht->array[i]->key);
			free(ht->array[i]);
		}
		ht->array[i] = ht->array[i]->next;
	}
	free(ht->array[i]);
	free(ht);
}
