#include "lists.h"

/**
 * free_listint2 -> free a list
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while ((*head)->next != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	free(*head);
	*head = NULL;
}
