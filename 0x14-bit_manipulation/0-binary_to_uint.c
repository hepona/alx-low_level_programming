#include "main.h"
#include <stddef.h>
#include <string.h>
#include "pow.c"
/**
 * binary_to_uint -> convert binary to an unsigned int
 * @b: pointing to "0" and "1"
 * Return: the converted num, 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int r = 0;
	int l = strlen(b) - 1;

	if (b == NULL)
		return (0);

	for (i = 0 ; b[i] != '\0' ; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			r = r + (1 << (l - i));
	}
	return (r);
}
