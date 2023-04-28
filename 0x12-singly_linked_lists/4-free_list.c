#include "lists.h"
#include <stdlib.h>
/**
 * free_list -> free a list
 * @head: a list
 */
void free_list(list_t *head)
{
	int i;
	list_t *tmp;

	for (i = 0 ; head != NULL ; i++)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
