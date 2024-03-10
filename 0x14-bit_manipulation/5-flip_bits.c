#include "main.h"

/**
 * flip_bits - It returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: first number
 * @m: second number
 * Return: number of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int _flip = n ^ m;
	unsigned long int current;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		current = _flip >> i;
		
		if (current & 1)
			count++;
	}
	return (count);
}
