#include "hash_tables.h"

/**
 * hash_table_create -> create a hash table
 * @size: size of array
 * Return: pointer of nw hash table, NULL otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nw = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (nw == NULL)
		return (NULL);
	nw->size = size;
	nw->array = malloc(sizeof(hash_table_t) * size);
	if (nw->array == NULL)
		return (NULL);
	while (i < size)
	{
		nw->array[0] = NULL;
		i++;
	};
	return (nw);
}
