#include "main.h"
#include <ctype.h>

/**
 * _islower -> lowercase checker
 * @c: variable of type entiger
 * Return: 1 if it's lowercase 0 if not
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
