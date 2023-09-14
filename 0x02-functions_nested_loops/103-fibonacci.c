#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
	int limit = 4000000;
	int n = 1;
	int m = 2;
	int next;
	int sum = 2;

	while (next <= limit)
	{
		next = n + m;
		if (next % 2 == 0)
		{
			sum = sum + next;
		}
		n = m;
		m = next;
	}
	printf("%d\n", sum);
	return (0);
}
