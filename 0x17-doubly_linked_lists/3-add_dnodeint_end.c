#include "lists.h"

/**
 * add_dnodeint_end -> add at the end of list
 * @head: list
 * @n: element to add
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int i;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (new == NULL)
		return NULL;
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		tmp = *head;
		for (i = 0; tmp->next != NULL; i++)
			tmp = tmp->next;
		tmp->next = new;
		new->next = NULL;
		new->prev = tmp;
	}
	return (new);
}
