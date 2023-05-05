#include "main.h"

/**
 * clear_bit -> set 0 at an index
 * @n: number
 * @index: index
 * Return: 1 if it work, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n = *n & ~(1L << index);
	return (1);
}
