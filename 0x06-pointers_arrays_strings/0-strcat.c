#include "main.h"
#include <string.h>

/**
 * _strcat -> concatenate two string
 * @dest: a character
 * @src: a character
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int ls = strlen(src);
	int ld = strlen(dest);

	for (i = 0 ; i <= ls ; i++)
	{
		dest[ld + i] = src[i];
	}
	return (dest);
}
