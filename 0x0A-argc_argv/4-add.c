#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -> adds positive numbers
 * Return: result ,0 if no number passed, 1 otherwise
 * @argc: integer
 * @argv: character
 */
int main(int argc, char *argv[])
{
	int i, j;

	int r = 0;

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0; argv[i][j] != '\0' ; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		r = r + atoi(argv[i]);
	}
	printf("%d\n", r);
	return (0);
}
