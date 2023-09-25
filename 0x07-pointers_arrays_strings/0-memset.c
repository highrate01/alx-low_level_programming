#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer that point to the number of byte
 * @b: a constant byte
 * @n: number of byte
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
