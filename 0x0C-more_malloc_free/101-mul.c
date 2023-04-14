#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <limits.h>
/**
 * error -> handling errors
 */
void error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}
/**
 * main ->  multiplies two positive numbers
 * Return: 0
 * @argc: integer
 * @argv: character
 */
int main(int argc, char *argv[])
{
	long int num1, num2, mul, i;

	if (argc != 3)
	{
		error();
		return (98);
	}
	 num1 = atol(argv[1]);
	 num2 = atol(argv[2]);
	for (i = 0 ; argv[1][i] != '\0' ; i++)
	{
		if (!isdigit(argv[1][i]))
		{
			error();
			return (98);
		}
	}
	for (i = 0 ; argv[2][i] != '\0' ; i++)
	{
		if (!isdigit(argv[2][i]))
		{
			error();
			return (98);
		}
	}
	if (num1 > INT_MAX / num2)
		return (0);
	mul = num1 * num2;
	printf("%ld\n", mul);
	return (mul);
}
