#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, otherwise -1
 * Description: This function search for a value in a sorted array of integers
 *              using the jump search algorithm. it uses the square root of the
 *              size of the array as the jump step.
 */
int jump_search(int *array, size_t size, int value)
{
	int skip, jmp_sz, prev, i;

	skip = 0;
	prev = i = 0;
	jmp_sz = (int)sqrt((double)size);

	if (array == NULL)
		return (-1);
	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		skip++;
		prev = i;
		i = skip * jmp_sz;
	} while (i < (int)size && array[i] < value);
	printf("Value found between indexes [%d] and [%d]\n", prev, i);

	for (; prev <= i && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
