#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: always 0
 *
 */
int main(void)
{
char c;

c = 'a';
while (c <= 'z')
{
	if ((c != 'q' && c != 'e') && c <= 'z')
	putchar(c);
	c++;

}
putchar('\n');
	return (0);

}
