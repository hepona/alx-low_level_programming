#include "main.h"
#include <stdio.h>
/**
 * print_last_digit -> last digit of a num
 * @c: integer
 * Return: r
 */
int print_last_digit(int c)
{
	int r;

	r = c % 10;
	if (r < 0)
	{
		r = r * -1;
	}
	_putchar(r + '0');

	return (r);
}
