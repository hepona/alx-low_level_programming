#include "main.h"
/**
 * _strncat -> concatenates , no null terminated
 * @src: a character
 * @dest: a character
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int ld = _strlen(dest);

	for (i = 0 ; i < n  && src[i] != '\0'; i++)
	{
		dest[ld + i] = src[i];
	}

	return (dest);
}
