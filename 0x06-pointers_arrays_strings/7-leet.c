#include "main.h"
#include <string.h>
/**
 * leet -> encode a string to 1337
 * @c: character
 * Return: c
 */
char *leet(char *c)
{
	int i;
	int j;
	char *p = "aAeEoOtTlL";
	char *n = "4433007711";

	for (i = 0 ; c[i] != '\0' ; i++)
	{
		for (j = 0 ; p[j] != '\0' ; j++)
		{
			if (c[i] == p[j])
			{
				c[i] = n[j];
			}
		}
	}

	return c;
}
