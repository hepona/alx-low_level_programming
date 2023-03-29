#include "main.h"

/**
 * _strncpy -> copy a string
 * @dest: a character
 * @src: a character
 * @n: integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n ; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
