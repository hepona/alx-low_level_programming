#include "main.h"
#include <stdio.h>
/**
 * main -> print my name
 * @argc: integer
 * @argv: charater
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s", argv[i]);
	}

	printf("\n");

	return (0);
}
