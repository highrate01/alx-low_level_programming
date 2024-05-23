#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - a singly linked list
 * @n: reps an integer
 * @index: index of nodes in the list
 * @next: pointer to the next node
 * Description: this is a singly list node
 *
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int _binary_search(int *array, size_t first, size_t last, int value);
int advanced_binary(int *array, size_t size, int value);
int _search(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
#endif
