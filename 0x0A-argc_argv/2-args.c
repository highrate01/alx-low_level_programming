#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: number of command line argument
 * @argv: array that contain the command line arg..
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
