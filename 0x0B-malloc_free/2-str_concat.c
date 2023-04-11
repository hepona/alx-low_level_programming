#include "main.h"
#include "string.h"
/**
 * str_concat -> concatenate two string
 * @s1: character
 * @s2: character
 * Return: NULL on failure, otherwise m
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int ls;
	int lss;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ls = strlen(s1);
	lss = strlen(s2);
	m = malloc(sizeof(char) * (ls + lss + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		m[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0' ; j++)
	{
		m[ls + j] = s2[j];
	}
	m[ls + lss] = '\0';
	return (m);
}
