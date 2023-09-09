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

for (b = 0; b < 100; b++)
{
	putchar(b + '0');
	if (b < 99)
	{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
