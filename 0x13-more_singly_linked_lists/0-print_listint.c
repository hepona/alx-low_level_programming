#include "lists.h"

/**
 * print_listint -> print element of list
 * @h: list
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	int c;

	for (c = 0 ; h != NULL ; c++)
	{
		if (h->n == NULL)
			return (NULL);
		printf("%d\n", h->n);
		h = h->next;
	}
	return (h);
}
