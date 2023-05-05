#include "main.h"

/**
 * set_bit -> set value of a bit to 1
 * @n: number
 * @index: index
 * Return: 1 if it work, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s = 0;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	s = (!!(*n = *n | 1L << index));
	return (s);
}
