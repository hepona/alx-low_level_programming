#include "lists.h"

/**
 * reverse_listint -> reverse list
 * @head: list
 * Return: pointer to the first node of the reverced list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *nex;

	if (*head == NULL)
		return (NULL);
	prev = NULL;
	while (*head != NULL)
	{
		nex = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nex;
	}
	*head = prev;
	return (*head);
}
