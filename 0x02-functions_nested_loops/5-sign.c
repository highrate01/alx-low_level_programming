#include "main.h"
/**
 * print_sign -  function that prints the sign of a number
 * Return: 1 or 0
 * @n: the value in question
 */
int print_sign(int n)
{
	int negative = -1;
	char ch = (char) negative;

	if (n > 0)
	{_putchar('+');
		return (1);
	}
	else if (n == 0)

	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (ch);
	}
}
