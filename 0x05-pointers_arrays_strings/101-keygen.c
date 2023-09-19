#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point for program
 * Return: always 0
 */
int main(void)
{
	int num = 0, sum, half1, half2;
	char c[54];

	srand(time(NULL));

	sum = 0;

	while (sum < 2772)
	{
		c[num] = 33 + rand() % 94;
		sum += c[num++];
	}
	c[num] = '\0';
	if (sum != 2772)
	{
		half1 = (sum - 2772) / 2;
		half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			half1++;

		for (num = 0; c[num]; num++)
		{
			if (c[num] >= (33 + half1))
			{
				c[num] -= half1;
				break;
			}
		}
		for (num = 0; c[num]; num++)
		{
			if (c[num] >= (33 + half2))
			{
				c[num] -= half2;
				break;
			}
	}
	}
	printf("%s", c);
	return (0);
}
