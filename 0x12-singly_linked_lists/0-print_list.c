#include "lists.h"

/**
 * print_list - prints all the element of a list
 * @h: pointer to list
 *
 * Return: number of nodes
 */


size_t print_list(const list_t *h)
{
	size_t el_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		el_count++;
	}
	return (el_count);
}
