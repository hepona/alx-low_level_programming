#include "main.h"
#include <stdio.h>
/**
 * print_sign -> sign of num
 * @n: variable type entiger
 * Return: 1 and + if positive ,0 and 0 if =0 and -1 and - if negatif
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return(0);
	}
	else
	{
		_putchar('-');
		return(-1);
	}
}
