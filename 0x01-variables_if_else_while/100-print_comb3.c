#include <stdio.h>

/**
 * main - all combination of digit
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = i + 1 ; j < 58 ; j++)
		{
			if (i != 58 && i != j)
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
