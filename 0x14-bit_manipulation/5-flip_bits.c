#include "main.h"

/**
 * flip_bits -> return num of bits needed to flip to get from one nm to another
 * @n: number
 * @m: number
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;

	if (n & m)
		return (0);
	for (i = 1 ; n & m ; i++)
	{
		n = n << i;
		c++;
	}
	return (c);
}
