#include "main.h"

/**
 * _strcat - function that concatenates two string
 * @src: string1 to be appended
 * @dest: string2 to be into
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;

	int j = 0;

	while (dest[j] != '\0')
	{
		len1++;
		j++;
	}
	for (j = 0; src[j] != '\0'; j++)
		len2++;

	for (j = 0; j <= len2; j++)
		dest[len1 + j] = src[j];
	return (dest);
}

