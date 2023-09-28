#include "main.h"
/**
 * _string - string length function
 * @s: A string
 * Return: strlen
 */
int _string(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _string(s + 1));
}
/**
 * _strcmp - to compare each char of the string
 * @s: a string
 * @first: first iterator
 * @second: second iterator
 * Return: an integer
 */
int _strcmp(char *s, int first, int second)
{
	if (*(s + first) == *(s + second))
	{
		if (first == second || first == second + 1)
			return (1);
		return (0 + _strcmp(s, first + 1, second - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that returns 1 if a string is
 * a palindrome and 0 if no
 * @s: a string
 * Return: 1 if true and 0 if false
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_strcmp(s, 0, _string(s) - 1));
}
