#include "main.h"
/**
 * print_to_98 -> print to 98
 * @n: integer
 */
void print_to_98(int n)
{
	int max = 98;

	for (; n <= max ; n++)
	{
		_putchar(n);
		_putchar(' ');
		_putchar(',');
	}
	_putchar('\n');
}
