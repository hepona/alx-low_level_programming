#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strdup -> pointer to a nw allocated space
 * @str: character
 * Return: pointer to the duplicated string, null otherwise
 */
char *_strdup(char *str)
{
	int i;

	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * (strlen(str) + 1));

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
	free(p);
}
