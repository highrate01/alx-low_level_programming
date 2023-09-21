#include "main.h"
/**
 * string_toupper - changes lowercase of string to uppercase
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int j;

	for (j = 0; n[j] != '\0'; j++)
	{
		if (n[j] >= 'a' && n[j] <= 'z')
			n[j] = n[j] - 32;
	}
	return (n);
}
