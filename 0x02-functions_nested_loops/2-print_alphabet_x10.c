#include "main.h"
/**
 * main - 10xAll alphabet
 * Return: 0
 */
int main(void)
{
	char i;
	int c;

	for (c = 0 ; c <= 10 ; c++)
	{
	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
	}
	return (0);
}
