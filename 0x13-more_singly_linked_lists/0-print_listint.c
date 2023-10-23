#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * @h: rep pointer  to the nodes
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
