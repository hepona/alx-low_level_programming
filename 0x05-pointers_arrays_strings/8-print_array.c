#include "main.h"

/**
 * print_array -> print element from array
 * @a: an integer
 * @n: an integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[n]);
		if (i != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
