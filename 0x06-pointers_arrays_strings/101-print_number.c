#include "main.h"
#include <ctype.h>
/**
 * print_number -> print integer
 * @n: integer
 */
void print_number(int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
	{
		if(isdigit(n[i]))
		{
			_putchar(n[i]
