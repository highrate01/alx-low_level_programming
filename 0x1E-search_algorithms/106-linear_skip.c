#include "search_algos.h"
/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the nodes in the list to search in
 * @value: value to search for in the list
 * Return: Null if value is not present or head is null
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *move;

	if (list == NULL)
		return (NULL);
	move = list;

	do {
		list = move;
		move = move->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)move->index, move->n);
	} while (move->express && move->n < value);

	if (move->express == NULL)
	{
		list = move;
		while (move->next)
			move = move->next;
	}
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)move->index);

	while (list != NULL && move != NULL && list != move->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
