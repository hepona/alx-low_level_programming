#include <stddef.h>
/**
 * _strchr -> locate a character in a string
 * @s: a character
 * @c: a character
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; *s != '\0' ; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

}
