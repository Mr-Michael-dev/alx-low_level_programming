#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a linked list
 * @head: head node
 * @index: index of node to get
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{

		head = head->next;
	}

	if (head == NULL)
	{
		return (NULL);
	}
	return (head);
}
