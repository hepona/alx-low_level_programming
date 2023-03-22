#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -> print to 98
 * @n: integer
 */
void print_to_98(int n)
{
	int max = 98;

	if (n < max)
	{
	for (; n <= max ; n++)
	{
		printf("%d", n);
		if (n != max)
		{
		_putchar(' ');
		_putchar(',');
		}
	}
	}
	if (n >= max)
	{
		printf("%d", n);
		if (n != max)
		{
			_putchar(' ');
			_putchar(',');
		}
	}
	_putchar('\n');
}
