#include "main.h"

/**
 * rev_string -> reverse a string
 * @s: a character
 */

void rev_string(char *s)
{
	int i;
	char tmp[strlen(s)];
	int f = 0;

	for (i = (strlen(s) - 1) ; i >= 0 ; i--)
	{
		tmp[f] = s[i];
		s[i] = s[f];
		s[f] = tmp[f];
		f++;
	}
}
