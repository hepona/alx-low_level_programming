#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main -> print multiplication of 2 number
 * @argc: integer
 * @argv: character
 * Return:0 if number are correct -1 otherwise
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);

	int b = atoi(argv[2]);

	if (argc == 3 && (isdigit(*argv[1]) ||
				(*argv[1] == '-' && isdigit(*(argv[1] + 1)))) &&
			(isdigit(*argv[2]) ||
			 (*argv[2] == '-' && isdigit(*(argv[2] + 1)))))
	{
		int r = a * b;

		printf("%d\n", r);
	}
	else if (argc == 3 && (argv[1] == NULL || argv[2] == NULL))
	{
		printf("Error\n");
		return (-1);
	}

	else
	{
		printf("Error\n");
		return (-1);
	}
	return (0);
	
}
