#include "lists.h"

/**
 * add_nodeint -> add a new node to the beginning of list
 * @head: list
 * @n: element to add
 * Return: adress of new element, NULL otherwise
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
	{
		free(new_n);
		return (NULL);
	}
	new_n->n = n;
	if (*head == NULL)
		new_n->next = NULL;
	else
		new_n->next = *head;
	*head = new_n;
	return (new_n);
}
