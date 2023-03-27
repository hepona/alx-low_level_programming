#include "main.h"

/**
 * print_rev -> print a gnirts
 * @s: a character
 */
void print_rev(char *s)
{
	int i;

	for (i = s[i] ; i != -1 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
