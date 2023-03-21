#include "main.h"
/**
 * main - 10xAll alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char i;
	int c;

	for (c = 0 ; c < 11 ; c++)
	{
	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}
