#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alwyas 0
 *
 */
int main(void)
{
	int n = 1;
	int m = 2;
	int sumb;
	int i;

	printf("%d", n);
	for (i = 1; i < 50; i++)
	{
		printf("%d", m);
		sumb = n + m;
		n = m;
		m = sumb;
	}
	printf("\n");
return (0);
}
