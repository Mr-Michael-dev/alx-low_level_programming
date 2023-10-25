#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node
 * at index in a linked list
 * @head: head node
 * @idx: position to insert
 * @n: integer data
 *
 * Return: address to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *current = *head;

	if (*head == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (current->next == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = current->next;
	}
	current->next = new;

	return (new);
}
