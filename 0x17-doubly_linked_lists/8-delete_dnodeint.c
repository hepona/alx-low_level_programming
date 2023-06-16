#include "lists.h"
#include "1-dlistint_len.c"
/**
 * delete_dnodeint_at_index -> delete at a position
 * @head: list
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	if (*head == NULL)
		return (-1);
	if (index > dlistint_len(*head))
		return (-1);
	tmp = *head;
	for (i = 0; i < index - 1 && tmp != NULL; i++)
		tmp = tmp->next;
	if (tmp->next->next == NULL)
	{
		tmp->next = NULL;
		(tmp->next->next)->prev = NULL;
		return (1);
	}
	(tmp->next)->prev = NULL;
	tmp->next = tmp->next->next;
	(tmp->next->next)->prev = tmp;

	return (1);
}
