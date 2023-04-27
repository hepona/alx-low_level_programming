#include "lists.h"

/**
 * list_len -> return num of elemnt in a list
 * @h: list
 * Return: num of element in h
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while(h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
