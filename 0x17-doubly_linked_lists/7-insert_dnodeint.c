#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a
 * given position
 *
 * @h: pointer to a pointer to the head of the list
 * @idx: poistion list is to be added
 * @n: data to add
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev= NULL;
	new->next = NULL;

	if (idx == 0)
	{
		if (*h)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	temp = *h;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;
	if (!temp)
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = new;
	temp->next = new;
	new->prev = temp;
	return (new);
}

