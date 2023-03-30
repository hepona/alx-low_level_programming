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
	int l = strlen(c);

	for (i = 0 ; i < l ; i++)
	{
		if (c[i] == 'a' || c[i] == 'A')
		{
			c[i]  = '4';
		}
		else if (c[i] == 'e' || c[i] == 'E')
		{
			c[i]  = '3';
		}
		else if (c[i] == 'o' || c[i] == 'O')
		{
			c[i]  = '0';
		}
		else if (c[i] == 't' || c[i] == 'T')
		{
			c[i]  = '7';
		}
		else if (c[i] == 'l' || c[i] == 'L')
		{
			c[i]  = '1';
		}
	}
	return c;
}
