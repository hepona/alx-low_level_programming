#include "main.h"

/**
 * factorial -> factorial of n
 * @n: integer
 * Return: 1 if n=0/n=1, -1 if n<0, else the result
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
