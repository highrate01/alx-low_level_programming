#include "main.h"
/**
 * cap_string -  function that capitalizes all words of a string
 * @n: A string
 * Return: A pointer
 */
char *cap_string(char *n)
{
	int i, j;
	char c[] = {44, 59, 46, '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (i == 0 && n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
		for (j = 0; c[j] != '\0'; j++)
		{
			if (c[j] == n[j] && (n[i + 1] >= 'a' && n[i + 1] <= 'z'))
			{
				n[i + 1] = n[i + 1] - 32;
			}
		}
	}
	return (n);
}
