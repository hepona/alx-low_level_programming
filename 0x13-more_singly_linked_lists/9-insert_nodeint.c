#include "lists.h"
#include "1-listint_len.c"

/**
 * insert_nodeint_at_index -> insert node at a given index
 * @head: list
 * @idx: index
 * @n: data
 * Return: address of the new node, NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	unsigned int l = listint_len(*head);
	listint_t *new_n, *t, *p;

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL || idx > l)
		return (NULL);
	new_n->n = n;
	if (*head == NULL)
	{
		new_n->next = NULL;
		*head = new_n;
	}
	else if (idx == 0)
	{
		new_n->next = *head;
		*head = new_n;
	}
	else
	{
		t = *head;
		for (i = 0 ; i < idx ; i++)
		{
			p = t;
			t = t->next;
		}

		p->next = new_n;
		new_n->next = t;
	}
	return (new_n);
}
