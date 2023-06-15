#include "lists.h"

/**
 * free_dlistint -> free a list
 * @head: list
 */
void free_dlistint(dlistint_t *head)
{
	int i;
	dlistint_t *tmp;

	for (i = 0; head != NULL; i++)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
