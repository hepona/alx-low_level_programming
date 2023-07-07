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
	hash_node_t *tmp = ht->array[indx];

	for (i = 0; tmp != NULL i < ht->size; i++)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
