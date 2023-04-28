#include "lists.h"
#include <stdlib.h>
/**
 * free_list -> free a list
 * @head: a list
 */
void free_list(list_t *head)
{
	int i;

	if (head == NULL)
		return;

	for (i = 0 ; head != NULL ; i++)
	{
		head = head->next;
		free(head);
		head = NULL;
	}
}
