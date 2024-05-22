#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element in the array
 * @size: size of the elements in the array
 * @value: value to search for
 * Return: first index where the value is located, otherwise -1
 * Description: This function searches for a value in a sorted array of
 *		integers using interpolation search.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t first = 0, last = size - 1, index;
	double i;

	if (array == NULL)
		return (-1);

	while (size)
	{
		i = (double)(last - first) / (array[last] - array[first]) *
			(value - array[first]);
		index = (size_t)(first + i);
		printf("Value checked array[%d]", (int)index);

		if (index >= size)
		{
			printf(" is out of range\n");
				break;
		}
		else
		{
			printf(" = [%d]\n", array[index]);
		}
		if (first == last)
			break;

		if (array[index] == value)
			return ((int)index);
		else if (array[index] < value)
			first = index + 1;
		else
			last = index - 1;
	}
	return (-1);
}
