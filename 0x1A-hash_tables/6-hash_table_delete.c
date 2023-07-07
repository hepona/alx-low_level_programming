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
		free(ht->array[i]);
	}
	free(ht);
}
