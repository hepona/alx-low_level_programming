#include "main.h"

/**
 * print_rev -> print a gnirts
 * @s: a character
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) ; i != -1 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
