#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 * @s: string to be reversed
 * Return: always 0
 */
void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

		for (a--; a >= 0; a--)
		_putchar(s[a]);
		_putchar('\n');
}
