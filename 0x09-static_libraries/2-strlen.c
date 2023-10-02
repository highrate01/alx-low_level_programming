#include "main.h"

/**
 * _strlen - function that returns the length of
 * a string
 * @s: The character of string
 * Return: always 0
 */
int _strlen(char *s)
{
	int _len;

	_len = 0;
	while (s[_len] != '\0')
	{
		_len++;
	}
	return (_len);
}
