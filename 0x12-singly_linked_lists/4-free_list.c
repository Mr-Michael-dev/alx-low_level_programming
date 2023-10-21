#include "lists.h"

/**
 * free_list - frees mem allocated to list
 * @head: pointer to the list
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
