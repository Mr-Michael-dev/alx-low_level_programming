#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to pointer to head of the doubly linked list
 * @n: value of the new list node
 *
 * Return: address to new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/**if (head == NULL)
	{
		return (NULL);
	}*/

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	
	/**if (*head != NULL)
	{
		(*head)->prev = new;
	}*/
	*head = new;

	return (new);
}
