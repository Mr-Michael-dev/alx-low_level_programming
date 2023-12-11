#include "lists.h"

/**
 * dlistint_len - returns number of elements of a d-list
 * @h: head of the doubly linked list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		count_nodes += 1;
		h = h->next;
	}

	return (count_nodes);
}
