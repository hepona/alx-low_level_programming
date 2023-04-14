#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * error -> handling errors
 */
void error()
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
 */
int main (int argc, char *argv[])
{
	int num1, num2, mul, i;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	 if (argc < 3)
	 {
		 error();
		 return (98);
	 }
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
	mul = num1 * num2;
	printf("%d\n", mul);
	return (mul);
}
