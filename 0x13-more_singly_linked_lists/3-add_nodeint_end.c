#include "lists.h"

/**
 * add_nodeint_end -> add nodes at the end of list
 * @head: list
 * @n: element of list
 * Return: adress of new element, NULL otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *tmp;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
	{
		free(new_n);
		return (NULL);
	}
	new_n->n = n;
	new_n->next = NULL;
	if (*head == NULL)
		*head = new_n;
	else
	{
		tmp = *head;
		while(tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_n;
	}
	return (new_n);
}
