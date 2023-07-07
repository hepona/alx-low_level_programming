#include "hash_tables.h"

/**
 * hash_table_set -> add element to table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *nw = malloc(sizeof(hash_node_t));
	hash_node_t *tmp = ht->array[index];
	char *keycp, *valuecp;

	if (nw == NULL || key == NULL || strcmp(key, "") == 0 || strcmp(key, "\0"))
		return (0);
	valuecp = strdup(value);
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			tmp->value = valuecp;
			return (1);
		}
		tmp = tmp->next;
	}
	keycp = strdup(key);
	nw->value = valuecp;
	nw->key = keycp;
	nw->next = ht->array[index];
	ht->array[index] = nw;
	return (1);
}
