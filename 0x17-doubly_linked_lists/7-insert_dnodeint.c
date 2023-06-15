#include "lists.h"

/**
 * insert_dnodeint_at_index -> insert new node at index
 * @h: list
 * @idx: index
 * @n: element to add
 * Return: adress of new node, NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	 unsigned int i;
	 dlistint_t *new = malloc(sizeof(dlistint_t));
	 dlistint_t *tmp;

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	tmp = *h;
	for (i = 0; i < idx && tmp != NULL; i++)
		tmp = tmp->next;
	new->prev = tmp;
	new->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
