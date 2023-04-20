#include "3-calc.h"
#include <stdlib.h>
/**
 * main -> main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *s;
	int (*op_func)(int, int);
	int (*get_op_func(char *s))(int, int);
	int r;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	a = atoi(argv[1]);
	s = argv[2];
	b = atoi(argv[3]);
	op_func = get_op_func(s);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	if (a < 0 || b < 0)
	{
		printf("Error\n");
		exit(98);
	}
	r = op_func(a,b);
	printf("%d\n", r);

	return (0);
}
