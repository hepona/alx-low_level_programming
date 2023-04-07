#include <stdio.h>

/**
 * main -> print number of argument
 * @argc: integer
 * @argv: character
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
