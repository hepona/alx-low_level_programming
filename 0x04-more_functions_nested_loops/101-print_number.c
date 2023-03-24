#include "main.h"

/**
 * print_number -> print an integer
 * @n: integer
 */
void print_number(int n)
{
	if (n >= 0 && n < 10)
	{
		_putchar(n);
	}
	else
	{
		if (n > 10)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar('-');
			_putchar((-1 * n / 10) + '0');
			_putchar((-1 * n % 10) + '0');
		}
	}
	_putchar('\n');
}
