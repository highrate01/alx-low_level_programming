#include "main.h"
/**
 * _isupper - This checks for uppercase character
 * @c: variable text
 * Return: always 0
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

