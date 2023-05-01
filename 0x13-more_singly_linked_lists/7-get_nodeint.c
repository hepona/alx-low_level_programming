#include "lists.h"

/**
 * get_nodeint_at_index -> return nth node of a list
 * @head: list
 * @index: index of the node
 * Return: n of a node, NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0 ; i != index ; i++)
	{
		head = head->next;
	}
	return (head);
}
