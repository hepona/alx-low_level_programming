#include "main.h"
#include <string.h>
/**
 * print_binary -> print print binary representation of a number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1;
	unsigned long int b = 0;

	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		if ((n & 1) != 0)
			b = b | m;
		n = n >> 1;
		m = m << 1;
	}
	while (m > 1)
	{
		m = m >> 1;
		if ((b & m) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}
