#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: pointer to the first head
 * @index: position of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (head->prev)
		head = head->prev;
	while (head)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
