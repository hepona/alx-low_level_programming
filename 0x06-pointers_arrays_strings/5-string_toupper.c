#include "main.h"

/**
 * string_toupper -> change lowercase to uppercase
 * @c: character
 * Return: s
 */
char *string_toupper(char *s)
{
	for (i = 0 ; i < strlen(s) ; i++)
	{
		if (islower(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
