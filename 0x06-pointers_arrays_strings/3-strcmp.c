#include "main.h"

/**
 * _strcmp -> compare two string
 * @s1: a character
 * @s2: a character
 * Return: if s1 & s2 are the same = 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int l = strlen(s1);

	for (i = 0; i < l ; i++)
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else 
		{
			return (s1[i] - s2[i]);
		}
	}
}
