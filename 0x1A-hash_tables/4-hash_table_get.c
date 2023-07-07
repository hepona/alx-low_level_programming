#include "hash_tables.h"

/**
 * hash_table_get-> retrieve a value associated with key
 * @ht: hash table
 * @key: key
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	int indx = key_index((const unsigned char *)key, ht->size);

	for (i = 0; ht->array[indx] != NULL; i++)
	{
		if (strcmp(key, ht->array[indx]->key) == 0)
			return (ht->array[indx]->value);
		ht->array[indx] = ht->array[indx]->next;
	}
	return (NULL);
}
