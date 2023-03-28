#include "main.h"

/**
 * print_array -> print element from array
 * @a: an integer
 * @n: an integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i< n ; i++)
	{
		printf("%d", a[i]);
		if (i != n-1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
