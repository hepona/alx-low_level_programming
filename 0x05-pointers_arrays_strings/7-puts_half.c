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
		for (i = 0 ; str[i] >= (str[l] - 1) / 2 && str[i] != '\0' ; i++)
		{
			if (i >= l / 2)
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = 0 ; str[i] != '\0' ; i++)
		{
			if (i >= l / 2)
				_putchar(str[i]);
		}
	}
	_putchar('\n');
}
