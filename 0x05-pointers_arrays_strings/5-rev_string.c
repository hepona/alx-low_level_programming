#include "main.h"

/**
 * rev_string -> reverse a string
 * @s: a character
 */

void rev_string(char *s)
{
	int i;

	for (i = (strlen(s) - 1) ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
