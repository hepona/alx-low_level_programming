#include "main.h"
#include <string.h>
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
	int ld = strlen(dest);
	int ls = strlen(src);

	for (i = 0 ; i <= n ; i++)
	{
		dest[ld + i] = src[i];
	}
	return (dest);
}
