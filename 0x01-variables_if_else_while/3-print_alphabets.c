#include <stdio.h>

/**
 * main - lowercase uppercase alphabet
 * Return: 0
 */
int main(void)
{
	char i;
	char M;

	for (i = 'a'; i <= 'z' ; i++)
	{putchar(i);
	}
	for (M = 'A'; M <= 'Z' ; M++)
	{putchar(M);
	}
	putchar('\n');

	return (0);
}
