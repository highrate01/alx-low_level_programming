#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int _count(char *str);
char **strtow(char *str);

/**
 * word_len - locate the index marking the end of
 * the first word within a string
 *
 * @str: The string to be searched
 *
 * Return:the index marking..
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * _count - count the number of words contain within a string
 * @str: string to be search
 *
 * Return: the number of words within string
 */

int _count(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
	{
		len++;
	}

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}

	return (words);
}

/**
 * strtow - function that splits a string into words
 * @str: The string to be split
 *
 * Return: if str = NULL,"", or NULL if the function fails
 * otherwise, a pointer to an array or strings
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = _count(str);

	if (words == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (words + 1));
	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);
			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];
		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}

