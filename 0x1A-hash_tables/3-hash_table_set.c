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
	hash_node_t *nw = malloc(sizeof(hash_node_t));
	int index = key_index((const unsigned char *)key, ht->size);
	char *valuecp = "";
	char *keycp = "";

	if (nw == NULL || key == NULL)
		return (0);
	while(ht->array[index] != NULL)
	{
		if(strcmp(ht->array[index]->key, key) == 0)
		{
			ht->array[index]->value = valuecp;
			return (1);
		}
		ht->array[index] = ht->array[index]->next;
	}
	strcpy(valuecp, value);
	strcpy(keycp, key);
	nw->value = valuecp;
	nw->key = keycp;
	nw->next = ht->array[index];
	ht->array[index] = nw;
	return (1);
}
