#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: This is the string input
 * Return: 0
 */
void rev_string(char *s)
{
	int rev, j;
	char temp;

	rev = 0;

	while (s[rev] != '\0')
	{
		rev++;
	}
	for (j = 0; j < rev / 2; j++)
	{
		temp = s[j];
		s[j] = s[rev - j - 1];
		s[rev - j - 1] = temp;
	}
}
