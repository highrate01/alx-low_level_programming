#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0(success)
 *
 */
int main(void)
{
int b;

for (b = 0; b < 10; b++)
{
	putchar(b + '0');
	if (b < 9)
	{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
