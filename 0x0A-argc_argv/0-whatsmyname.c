#include "main.h"
#include <stdio.h>
#include "_putchar.c"
/**
 * main -> print my name
 * @argc: integer
 * @argv: charater
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		char *p = argv[i];
		while (*p != '\0')
		{
			_putchar(*p);
			p++;
		}
	}
	_putchar('\n');

	return (0);
}
