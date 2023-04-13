#include "main.h"

/**
 * malloc_checked -> allocat memory
 * @b: integer
 * Return: if malloc fail return 98
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(EXIT_FAILURE);
	return (m);
}
