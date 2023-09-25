#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: a string
 * @c: first occurence character
 * Return: a pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
