#include "main.h"

/**
 * swap_int -> swap value
 * @a: an integer
 * @b: an integer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
