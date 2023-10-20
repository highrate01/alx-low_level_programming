#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: pointer to first node
 */
void free_list(list_t *head)
{
	list_t *t;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
	free(head->str);
	free(head);
}
