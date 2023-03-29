#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper -> change lowercase to uppercase
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;
	int l = strlen(s);

	for (i = 0 ; i < l ; i++)
	{
		if (islower(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
