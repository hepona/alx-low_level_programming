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
	int l = strlen(src) - 1;

	for (i = 0 ; i < l ; i++)
	{
		return (dest[i] + src[i]);
	}
}
