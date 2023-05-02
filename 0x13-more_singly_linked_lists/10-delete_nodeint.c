#include "lists.h"
#include "1-listint_len.c"
/**
 * delete_nodeint_at_index -> delete node at index
 * @head: list
 * @index: index of node
 * Return: 1 if succeeded, -1 othewise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *p;
	unsigned int i = 0;
	unsigned int l = listint_len(*head);

	if (*head == NULL || index > l)
		return (-1);
	if (index == 0)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
	else
	{
		t = *head;
		while (i != index)
		{
			p = t;
			t = t->next;
			i++;
		}
		p->next = t->next;
		free(t);
	}
	return (1);
}
