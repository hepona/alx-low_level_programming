#include "main.h"

/**
 * print_rev -> print a gnirts
 * @s: a character
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(str) ; i >= 0 ; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
