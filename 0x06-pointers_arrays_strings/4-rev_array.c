#include "main.h"

/**
 * reverse_array -> reverse the content of an array
 * @a: an integer
 * @n: an integer
 */
void reverse_array(int *a, int n)
{
	int i = n - 1;
	int tmp[1000];
	int f = 0;

	for (; i>= 0 && f <= i ; i--)
	{
		tmp[f] = a[i];
		a[i] = a[f];
		a[f] = tmp[f];
	       f++;	
	}
}
