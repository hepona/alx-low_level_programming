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
	if (c < 0)
	{
		c = c * -1;
	}
	_putchar(c + '0');

	return (r);
}
