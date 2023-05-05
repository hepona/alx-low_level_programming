#include "main.h"

/**
 * get_bit ->  returns the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value of bit at index, -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int s = 0;
	if (index >= sizeof(n * 8))
		return (-1);
	s = n >> index & 1;
	return (s);
}
