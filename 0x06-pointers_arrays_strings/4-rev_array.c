#include "main.h"
/**
 * reverse_array -  function that reverses the content of an array of
 * integers
 * @a: represent the array
 * @n: The number of element of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n--; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}

