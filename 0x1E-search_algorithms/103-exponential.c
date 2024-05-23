#include "search_algos.h"

/**
 * _binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @first: starting index of element in array
 * @last: ending index of element in array
 * @value: reps value to search for
 * Return: return the index where value is located, otherwise -1
 */

int _binary_search(int *array, size_t first, size_t last, int value)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);
	while (last >= first)
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
/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to the search in
 * @size: number of the elements in an array
 * @value: value to search for
 * Return:  first index where value is located, otherwise -1
 * Description: This function searches for a value in a sorted array of
 *		integers using the exponential search.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, last;
	int first;

	if (array == NULL)
		return (-1);
	first = array[0];

	if (first != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	last = (i < size) ? i : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, last);

	return (_binary_search(array, i / 2, last, value));
}
