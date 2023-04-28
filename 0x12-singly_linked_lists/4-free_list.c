#include "lists.h"
#include <stdlib.h>
/**
 * free_list -> free a list
 * @head: a list
 */
void free_list(list_t *head)
{
	int i;

	for (i = 0 ; head->next != NULL ; i++)
	{
		free(head->str);
		free(head->len);
		free(head);
	}
}
