#include <stdio.h>
/**
 * main - starting point of the program
 *
 * Return: always 0
 *
 */

int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while (c <= 'z')
{
	putchar(c);
	c++;
}
while (d <= 'Z')
{
	putchar(d);
	d++;
}
return (0);
}

