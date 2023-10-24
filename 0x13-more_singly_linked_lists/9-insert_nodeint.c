#include "lists.h"
/**
 * newly_node - to create new node
 * @n: the node
 * Return: pointer  to the node
 */
listint_t *newly_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}
#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 *
 * @head: pointer to first node
 * @idx: spot of the new node
 * @n: info of the new node
 * Return: Address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *hold;
	listint_t *hold_new;
	listint_t *new_node;

	hold = *head;
	if (head == NULL)
		return (NULL);

	new_node = newly_node(n);

	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
		*head = new_node;
	i = 0;
	while (i < idx - 1 && hold != NULL && idx != 0)
	{
		hold = hold->next;
		i++;
	}

	if (hold == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = hold;
	else
	{
		hold_new = hold->next;
		hold->next = new_node;
		new_node->next = hold_new;
	}
	return (new_node);
}
