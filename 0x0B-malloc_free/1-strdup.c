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

	int l = strlen(str);

	char *p = malloc(sizeof(char) * l + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
