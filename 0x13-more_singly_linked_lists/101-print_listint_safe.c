#include "lists.h"
/**
 * free_listp - to free the linked list
 * @head: pointer to the list
 * Return: 0
 */
void free_listp(list_t **head)
{
	listp_t *hold;
	listp_t *new;

	if (head != NULL)
	{
		new = *head;
		while ((hold = new) != NULL)
		{
			new = new->next;
			free(hold);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - it prints a listint_t linked list.
 * @head: it point to the first list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *hptr, *name, *rec, *add;

	htpr = NULL;
	while (head != NULL)
	{
		rec = malloc(sizeof(lisp_t));

		if (rec == NULL)
			exit(98);
		rec->p = (void *)head;
		rec->next = hptr;
		htpr = rec;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [&p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
	free_listp(&hptr);
	return (nnodes);
}
