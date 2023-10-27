#include "main.h"
/**
 * set_bit - it sets the value of a bit to 1 at a given index
 * @n: pointer to the bit
 * @index: position of bit
 * Return: 1 if it works, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int ind;

	if (index > sizeof(unsigned  int) * 8)
		return (-1);
	ind = 1;
	ind =  ind << index;
	*n = ((*n) | ind);
	return (1);
}
