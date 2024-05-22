#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: reps value to search for
 * Return: return the index where value is located, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t first, mid, last;
	size_t i;

	first = 0;
	last = size - 1;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i <= last; i++)
			printf("%d, ", array[i]);
		printf("\n");

		mid = first + (last - first) / 2;

		if (value == array[mid])
			return (mid);

		else if (value < array[mid])
			last = mid - 1;
		else
			first = mid + 1;
	}
	return (-1);
}
