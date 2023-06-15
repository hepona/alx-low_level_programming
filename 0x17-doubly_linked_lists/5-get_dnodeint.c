#include "lists.h"

/**
 * get_dnodeint_at_index -> return node at index
 * @head: list
 * @index: position
 * Return: index of at a position or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i != index ; i++)
		head = head->next;
	return (head);
}
