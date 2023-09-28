#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: a string
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
