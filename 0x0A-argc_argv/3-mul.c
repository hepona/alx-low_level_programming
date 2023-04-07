#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -> print multiplication of 2 number
 * @argc: integer
 * @argv: character
 * Return:0 if the numbers are valide, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int r, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);

	b = atoi(argv[2]);

	r = a * b;
	printf("%d\n", r);
	return (0);
}
