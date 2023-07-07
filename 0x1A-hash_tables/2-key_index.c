#include "hash_tables.h"

/**
 * key_index -> give the index of a key
 * @key: key
 * @size: size of array
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int indx;

	indx = hash_djb2(key) % size;
	return (indx);
}
