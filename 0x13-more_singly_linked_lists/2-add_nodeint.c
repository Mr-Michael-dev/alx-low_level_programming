#include "lists.h"

/**
 * add_nodeint - adds a noe at the beginning of a list
 * @head: head of the node
 * @n: integer
 *
 * Return: address to the new element or nullif failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
