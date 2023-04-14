#include "main.h"

/**
 * _calloc -> allocate memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer to the allocated memory, NULL otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *m;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	m = malloc(sizeof(unsigned int) * (size * nmemb));
	if (m == NULL)
		return (NULL);
	for (i = 0 ; i < (nmemb * size) ; i++)
		m[i] = 0;
	return (m);
}
