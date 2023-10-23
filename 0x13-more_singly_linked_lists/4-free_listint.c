#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to node
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *fr;

	while ((fr = head) != NULL)
	{
		head = head->next;
		free(fr);
	}
}
