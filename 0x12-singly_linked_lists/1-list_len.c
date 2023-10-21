#include "lists.h"

/**
 * list_len - calculates the elements in a list
 * @h: pointer to list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t el_count = 0;

	for (; h != NULL; h = h->next)
	{
		el_count++;
	}
	return (el_count);
}
