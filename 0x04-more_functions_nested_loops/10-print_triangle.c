#include "main.h"
/**
 * print_triangle -> triangle of #
 * @size: integer
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size ; i++)
		{
			for (j = 0 ; j <= size ; j++)
			{
				_putchar(' ');
			}
			for (j = 0 ; j <= i ; j++)
			{
				_putchar('#');
			}
		}
	}
}
