#include "lists.h"

/**
 * print_dlistint - prints all elements of a d-list
 * @h: head of the doubly linked list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count_nodes += 1;
		h = h->next;
	}

	return (count_nodes);
}
