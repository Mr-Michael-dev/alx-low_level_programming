#include "lists.h"

/**
 * sum_listint - returns summ of all the data in a linked list
 * @head: head node
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
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
