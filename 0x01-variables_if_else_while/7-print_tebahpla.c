#include <stdio.h>
/**
 * main - This is the entry point
 *
 * Return: This always 0(success)
 *
 */
int main(void)
{
	char a;

	a = 'z';
	while (a >= 'a')
{
	putchar(a);
	a--;
}
putchar('\n');
return (0);
}
