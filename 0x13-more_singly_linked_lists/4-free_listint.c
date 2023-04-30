#include "lists.h"

/**
 * free_listint -> free a list
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
