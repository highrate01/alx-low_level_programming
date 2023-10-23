#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a
 * linked listint_t list
 * @h: pointer to nodes
 * Return: number of element in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
