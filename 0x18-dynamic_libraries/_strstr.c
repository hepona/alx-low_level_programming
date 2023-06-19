#include "main.h"
/**
 * _strstr -> locate a substring
 * @haystack: character
 * @needle: character
 * Return: pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (haystack[i] == needle[i])
				return (haystack);
			haystack++;
		}
	}
	return (0);
}
