#include "lists.h"

/**
 * sum_dlistint - suns all the data(n) of a dlistint_t linked list
 * @head: pointer to the head
 *
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
