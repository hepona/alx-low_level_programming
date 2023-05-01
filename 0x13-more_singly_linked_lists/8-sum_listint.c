#include "lists.h"

/**
 * sum_listint -> sum of all n in the list
 * @head: list
 * Return: sum, 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
