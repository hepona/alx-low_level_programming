#include "lists.h"

/**
 * sum_dlistint -> sum od all the data in a list
 * @head: list
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int i, sum = 0;

	for (i = 0; head != NULL; i++)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
