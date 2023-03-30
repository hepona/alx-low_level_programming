#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string -> capitalize all words
 * @s: a character
 * Return: s
 */
char *cap_string(char *s)
{
	int i;
	int l = strlen(s);

	for (i = 0 ; i < l ; i++)
	{
	if (islower(s[i]) || s[i] == '\t')
	{
		if (s[i] == '\t')
		{
			s[i] = ' ';
		}

		else if (isspace(s[i - 1]) || s[i - 1] == '.' || s[i - 1] == '\t'
				|| s[i - 1] == ';' || s[i - 1] == ','
				|| s[i - 1] == '\n' || s[i - 1] == '('
				|| s[i - 1] == ')' || s[i - 1] == '{'
				|| s[i - 1] == '}' || s[i - 1] == '"'
				|| s[i - 1] == '!' || s[i - 1] == '?')
		{
			s[i] = s[i] - 32;
		}
	}
	}

	return (s);
}
