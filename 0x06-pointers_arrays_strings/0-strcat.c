#include "main.h"

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

	for (i = 0 ; i < l ; i++)
	{
		dest[ld + i] = src[i];
	}
	return (dest);
}
