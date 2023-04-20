#include "variadic_functions.h"

/**
 * sum_them_all -> sum all paramteres
 * @n: an integer
 * @...: others argument
 * Return: s
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int r;
	int s = 0;
	va_list args;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
	{
		r = va_arg(args, int);
		s = s + r;
	}
	return (s);
}
