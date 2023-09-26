#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: the sum
 * Return: 0 on success
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, x, n;

	for (x = 0; x <= (size * size); x = x + size + 1)
	{
		sum1 = sum1 + a[x];
	}
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
	{
		sum2 = sum2 + a[n];
	}
	printf("%d, %d\n", sum1, sum2);
}
