#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the head
 *
 * Return: head nodes's data
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int value;

	if (*head == NULL)
	{
		return (0);
	}

	value = current->n;

	*head = current->next;

	free(current);
	return (value);
}
