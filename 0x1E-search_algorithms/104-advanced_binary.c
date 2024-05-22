#include "search_algos.h"


/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where the value is located, othewise -1
 * Description: This is an advance binary search that returns the first
 *		index of the first value in the array if the value appear
 *		more than once.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = _search(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);
	return (i);
}
/**
 * _search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where the value is located, othewise -1
 * Description: This is an advance binary search that returns the first
 *              index of the first value in the array if the value appear
 *              more than once.
 */
int _search(int *array, size_t size, int value)
{
	size_t i, bin = size / 2;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	if (bin && size % 2 == 0)
		bin--;
	if (value == array[bin])
	{
		if (bin > 0)
			return (_search(array, bin + 1, value));
		return ((int)bin);
	}
	if (value < array[bin])
		return (_search(array, bin + 1, value));
	bin++;
	return (_search(array + bin, size - bin, value) + bin);
}
