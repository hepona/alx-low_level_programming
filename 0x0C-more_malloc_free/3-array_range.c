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
	l = 0;
	for (i = min ; i <= max ; i++)
		l++;
	m = malloc(sizeof(int) * l);
	if (m == NULL)
		return (NULL);
	for (i = min ; i <= max ; i++)
	{
		m[i] = i;
		_putchar(m[i]);
	}
	return (m);
}
