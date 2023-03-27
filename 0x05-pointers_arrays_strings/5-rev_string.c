#include "main.h"

/**
 * rev_string -> reverse a string
 * @s: a character
 */

void rev_string(char *s)
{
	int i;
	int l = strlen(s);
	int f = 0;
	int tmp[50];

	for (i = (l - 1) ; i >= 0 && f <= i ; i--)
	{
		tmp[f] = s[i];
		s[i] = s[f];
		s[f] = tmp[f];
		f++;
	}
}
