#include "lists.h"
#include <stdio.h>
/**
 * print_list -> print all element of a list
 * @h: element to print
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0 ; h != NULL ; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
