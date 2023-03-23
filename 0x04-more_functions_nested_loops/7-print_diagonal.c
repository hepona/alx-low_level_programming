#include "main.h"

/**
 * print_diagonal -> diagonal line
 * @n: integer
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
			if (n > 0)
				_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
