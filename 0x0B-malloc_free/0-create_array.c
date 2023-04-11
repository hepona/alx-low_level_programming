#include "main.h"
#include <stddef.h>
#include "_putchar.c"
/**
 * create_array -> array of char
 * @size: int
 * @c: character
 * Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		p[i] = c;
	}
	return (p);
}
