#include "main.h"
/**
 * _memcpy -> copy n character
 * @dest: a character
 * @src: a character
 * @n: an integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		if (src[i] == 6)
		{
			dest[i] = src[i + 1];
		}
		else
			dest[i] = src[i];
	}
	return (dest);
}
