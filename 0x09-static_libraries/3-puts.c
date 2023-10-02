#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line,
 * to stdout
 * @str: string to be printed
 */
void _puts(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
