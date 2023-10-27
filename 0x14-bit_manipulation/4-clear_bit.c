#include "main.h"
/**
 * clear_bit - it sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: starting from 0 of the bit to set
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ind;

	ind = 1;
	ind = ind << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = ind ^ *n;

	return (1);
}
