#include "lists.h"

/**
 * add_dnodeint -> add new node at the beginning of list
 * @head: list
 * @n: element to add
 * Return: address of new element or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
	}
	*head = new;
	return (new);
}

