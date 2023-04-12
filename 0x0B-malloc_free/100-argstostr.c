#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * argstostr -> concactenate all arguments
 * @ac: integer
 * @av: character
 * Return: NULL if ac=0 or av=NULL, or pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i;
	char ** m;

	if (ac == 0 || av == NULL)
		return (NULL);
	m = malloc(sizeof(char) * ac);
	if (m == NULL)
		return (NULL);
	for (i = 0 ; i < ac ; i++)
	{
		m[i] = av[i];
		_putchar('\n');
	}
	return (m);
}
