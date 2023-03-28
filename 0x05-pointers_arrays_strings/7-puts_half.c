#include "main.h"

/**
 * puts_half -> print half of a string
 * @str: character
 */
void puts_half(char *str)
{
	int i;
	int l = strlen(str);

	if (l % 2 != 0)
	{
		for (i = (l + 1) / 2 ; i < l ; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = l / 2 ; i < l ; i++)
		{
				_putchar(str[i]);
		}
	}
	_putchar('\n');
}
