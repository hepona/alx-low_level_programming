#include "lists.h"

/**
 * pop_listint -> delete the head node of a list
 * @head: list
 * Return: head node's data, 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *t;

	if(*head == NULL)
		return (0);
	t = *head;
	n = t->n;
	*head = (*head)->next;
	free(t);
	return (n);
}
