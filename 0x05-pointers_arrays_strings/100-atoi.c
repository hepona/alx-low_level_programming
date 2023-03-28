#include "main.h"
#include <ctype.h>
/**
 * _atoi -> convert string to integer
 * @s: a character
 * Return: the integer , if not 0
 */
int _atoi(char *s)
{
	int l =strlen(s)-1;
	int i;

	for (i = 0 ; i <= l ; i++)
	{
		if (isdigit(s[i]) || (s[i] == '+' || s[i] == '-'))
		{
			return (s[i] * 10 + '0');
		}
		else
			return (0);
	}
}
