#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end -> add nodes at the end of list
 * @head: list
 * @str: string
 * Return: adress of the new element, NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n, *tmp;

	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);
	new_n->len = strlen(str);
	new_n->str = strdup(str);
	if (new_n->str == NULL)
	{
		free(new_n);
		return (NULL);
	}
	new_n->next = NULL;
	if (*head == NULL)
		*head = new_n;
	else
	{
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_n;
	}
	return (new_n);
}
