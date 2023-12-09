#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to head of the nodes
 * @n: number of elements
 * Return: the address of element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	new->next = h;

	if (h)
		h->prev = new;
	*head = new;
	return (new);
}
