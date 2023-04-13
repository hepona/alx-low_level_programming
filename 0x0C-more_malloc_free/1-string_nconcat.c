#include "main.h"

/**
 * string_nconcat -> concatenate 2 string
 * @s1: character
 * @s2: character
 * @n: unsigned integer
 * Return: s1 and s2 concactenated, otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int ls, lss;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ls = strlen(s1);
	lss = strlen(s2);
	if (n < lss)
	m = malloc(sizeof(char) * (ls + n + 1));
	else
		m = malloc(sizeof(char) * (ls + lss + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
		m[i] = s1[i];
	for (i = 0 ; i <= n && s2[i] != '\0' ; i++)
		m[ls + i] = s2[i];
	m[i + ls] = '\0';
	return (m);
}
