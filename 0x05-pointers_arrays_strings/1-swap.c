#include "main.h"
/**
 * swap_int - function that swaps the values of two
 * integers
 * @a: first pointer
 * @b: second pointer
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int blank;
	int *d = &blank;

	*d = *a;
	*a = *b;
	*b = *d;
}
