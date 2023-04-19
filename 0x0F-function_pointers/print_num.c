#include "function_pointers.h"

/**
 * print_num -> print a num with _putchar
 * @n: a number
 */
void print_num(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		print_num(n / 10);
	_putchar(n % 10 + '0');
}
