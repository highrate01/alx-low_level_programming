#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head:pointer to first node
 * @str: new node to be added
 * Return: pointer to the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *t;
	list_t *n_node;

	t = *head;
	if (head == NULL)
		return (NULL);
	n_node = create(str);
	if (n_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = n_node;
		return (*head);
	}
	while (t->next != NULL)
		t = t->next;
	t->next = n_node;
	return (*head);
}

/*create a node*/
/**
 * create - create node
 * @str: for the node
 * Return: pointer to memory
 */
list_t *create(const char *str)
{
	list_t *n_node;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	n_node->len = len(str);
	n_node->next = NULL;
	return (n_node);
}

/*create string length*/
/**
 * len - length of str
 * @str: str to search for
 * Return: length of string
 */
int len(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
