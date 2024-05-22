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
	size_t first, last, mid, i;

	if (array == NULL)
		return (-1);

	for (first = 0, last = size - 1; last >= first;)
	{
		printf("Searching in array: ");
		for (i = first; i < last; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = first + (last - first) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] > value)
			last = mid - 1;
		else
			first = mid + 1;
	}
	return (-1);
}
