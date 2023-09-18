#include "main.h"
/**
 * puts_half - function that prints half of a string,
 * followed by a new line
 * @str: The input string
 * Return: 0
 */
void puts_half(char *str)
{
	int len = 0;
	int half, j;

	while (str[len] != '\0')
	{
		len++;
	}

	half = (len - 1) / 2;

	for (j = (half + 1); j < len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
