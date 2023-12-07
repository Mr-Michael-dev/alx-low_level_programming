#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head node
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	for (; head != NULL; head = head->next)
	{
		free(head->next);
	}
	free(head);
}
