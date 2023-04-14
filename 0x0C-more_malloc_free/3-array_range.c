#include "main.h"
#include "_putchar.c"
/**
 * array_range -> create array of integers
 * @min: integer
 * @max: integer
 * Return: pointer to the new array, NULL otherwise
 */
int *array_range(int min, int max)
{
	int i;
	int *m;
	int l;

	if (min >= max)
		return (NULL);
	l = max - min + 1;
	m = malloc(sizeof(int) * l);
	if (m == NULL)
		return (NULL);
	m[0] = min;
	for (i = 1 ; i < l ; i++)
	{
		m[i] = i + min;
	}
	return (m);
}
