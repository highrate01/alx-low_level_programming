#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 *
 * @head: pointer to the first node of the list
 * Return: null
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;

	if (head)
	{
		while (head->prev)
			head = head->prev;
	}
	while ((hold = head) != NULL)
	{
		head = head->next;
		free(hold);
	}
}
