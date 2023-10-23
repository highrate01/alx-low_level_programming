#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to the first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *fr;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		fr = (*head)->next;
		free(*head);
		*head = fr;
	}
	free(*head);
	*head = NULL;
}
