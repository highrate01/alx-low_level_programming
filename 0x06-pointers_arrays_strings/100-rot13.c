#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @n: pointer to string
 * Return: s
 */
char *rot13(char *n)
{
	int i;
	int j;

	char enc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == enc[j])
			{
				n[i] = rot1[j];
				break;
			}
		}
	}
	return (n);
}
