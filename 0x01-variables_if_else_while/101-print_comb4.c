#include <stdio.h>
/**
 * main - all numbers
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = i + 1 ; j < 58 ; j++)
		{
			for (k = j + 1 ; k < 58 ; k++)
			{
				if (i != 58 && i != j && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

