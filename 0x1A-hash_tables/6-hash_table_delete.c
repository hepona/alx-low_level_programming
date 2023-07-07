#include "hash_tables.h"

/**
 * hash_table_delete -> delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *nx;

	for (i = 0; i < ht->size ; i++)
	{
		curr = ht->array[i];
		while (curr != NULL)
		{
			nx = curr->next;
			free(curr->value);
			free(curr->key);
			free(curr);
			curr = nx;
		}
	}
	free(ht->array);
	free(ht);
}
