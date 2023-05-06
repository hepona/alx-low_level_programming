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

	if ((n ^ m) == 0)
		return (0);
	for (i = 0 ; n & m ; i++)
	{
		n = n << 1;
		c++;
	}
	return (c);
}
