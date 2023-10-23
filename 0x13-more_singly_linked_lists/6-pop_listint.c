#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 *
 * @head: the pointer  to the nodes
 * Return: 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *fr;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	fr = *head;
	*head = (*head)->next;
	free(fr);
	return (n);
}
