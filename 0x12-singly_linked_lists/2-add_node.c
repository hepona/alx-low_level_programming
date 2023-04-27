#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node -> add new node
 * @head: list
 * @str: string
 * Return: adress of new element, NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;

	new_n = malloc(sizeof(*new_n));
	if (new_n == NULL)
		return (NULL);
	new_n->str = strdup(str);
	new_n->len = strlen(str);
	if (new_n->str == NULL)
	{
		free(new_n);
		return (NULL);
	}
	if (*head == NULL)
		new_n->next = NULL;
	else
		new_n->next = *head;
	*head = new_n;
	return (new_n);
}
