#include "main.h"
/**
 * binary_to_uint - it converts a binary number to an
 * unsigned int
 *
 * @b: it is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length;
	size_t i;
	size_t j;
	size_t sum = 0;
	size_t pow = 1;
	int base = 2;

	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = length - 1; j > 0; j--)
		pow = pow * base;
		sum = sum + (pow * (b[i] - 48));
		length--;
		pow = 1;
	}
	return (sum);
}
