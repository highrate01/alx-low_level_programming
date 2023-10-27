#include "main.h"
/**
 * void printbi - print binary rep of number
 * @n: dec
 * Return: void
 */
void printbi(unsigned int n)
{
	if (n == 0)
		return;
	printbi(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - prints the binary representation of a number
 * @n: dec to convert
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		printbi(n);
	}
}
