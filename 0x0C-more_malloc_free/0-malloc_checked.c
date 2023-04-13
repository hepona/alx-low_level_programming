#include "main.h"

/**
 * malloc_checked -> allocat memory
 * @b: integer
 * Return: if malloc fail return 98
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(sizeof(unsigned int) * sizeof(b));
	if (m == NULL)
		exit(98);
	return (m);
}
