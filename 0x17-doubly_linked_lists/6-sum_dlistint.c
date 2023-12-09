#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of
 * a doubly linked list
 *
 * @head: pointer to the first node of the linked list
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	if (head)
	{
		while (head->prev)
			head = head->prev;
		while (head)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}
	return (sum);
}
