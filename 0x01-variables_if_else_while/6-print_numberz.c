#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: always 0(success)
 *
 */
int main(void)
{
	int c;

c = 0;
while (c < 10)
{
putchar(c + '0');
c++;
}
putchar('\n');
return (0);
}
