#include "main.h"
/**
 * get_bit - it returns the value of a bit at a given index
 * @n: rep the number to checked
 * @index: of the bit to be gotten
 * Return: the value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t i;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
