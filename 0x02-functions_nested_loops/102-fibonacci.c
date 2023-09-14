#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alwyas 0
 *
 */
int main(void)
{
	unsigned long int n = 1;
	unsigned long int m = 2;
	unsigned long int sumb;
	int i;

	printf("%lu, ", n);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", m);
		sumb = n + m;
		n = m;
		m = sumb;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
return (0);
}
