#include "lists.h"

/**
 * listint_len -> return the number
 * @h: a list
 * Return: number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
	int l = 0;

	while (h != NULL)
	{
		l++;
		h = h->next;
	}
	return (l);
}
