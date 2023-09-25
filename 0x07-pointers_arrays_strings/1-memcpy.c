#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @src: first memory area to from
 * @dest: second memory area to copy into
 * @n: number of byte
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c = 0;

	int i = n;

	for (; c < i; c++)
	{
		dest[c] = src[c];
		n--;
	}
	return (dest);
}
