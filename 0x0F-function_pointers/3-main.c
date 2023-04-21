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
	int (*get_op_func(char *s))(int, int);
	int (*op_func)(int, int);
	int a, b, r;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	s = argv[2];
	b = atoi(argv[3]);
	op_func = get_op_func(s);
	if (op_func == NULL && (*s != '+' || *s != '-' ||
				*s != '/' || *s != '*'))
	{
		printf("Error\n");
		printf("99\n");
		return (0);
	}
	if (a < 0 || b < 0)
	{
		printf("Error\n");
		printf("98\n");
		return (0);
	}
	r = op_func(a, b);
	printf("%d\n", r);

	return (0);
}
