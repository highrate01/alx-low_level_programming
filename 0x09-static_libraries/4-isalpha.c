#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c:  represent the character to be checked for
 * Return: return 1 for alphabetic character and 0 for anything else
 *
 */
int _isalpha(int c)
{
	char lower, upper;

	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
			if (lower == c || upper == c)
			{
				letter = 1;
			}
	}
	return (letter);
}

