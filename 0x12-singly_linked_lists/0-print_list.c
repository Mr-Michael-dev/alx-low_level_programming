#include "lists.h"

/**
 * print_list - prints all the element of a list
 * @h: pointer to list
 *
 * Return: number of nodes
 */


size_t print_list(const list_t *h)
{
	size_t el_count;

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

		if (h->next != NULL)
		{
			h = h->next;
			el_count++;
		}
		else
		{
			break;
		}
	}
	return (el_count);
}
