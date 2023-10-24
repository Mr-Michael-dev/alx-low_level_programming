#include "lists.h"

/**
 * free_listint2 - frees a listint_t linked list
 * and sets the head to NULL
 * @head: listint_t
 *
 */


void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *tmp;

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}

	*head = NULL;
}
