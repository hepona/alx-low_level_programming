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
	void *m;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	m = malloc(size * nmemb);
	if (m == NULL)
		return (NULL);
	for (i = 0 ; i < (nmemb * size) ; i++)
		*((char *)m + i) = 0;
	return (m);
}
