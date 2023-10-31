#include "main.h"
#include <stdio.h>
/**
 * errfile - handle errors
 * @file_from: file1 to copy from
 * @file_to: file2 to copy into
 * @arg: argument vec
 * Return: nothing
 */
void errfile(int file_from, int file_to, char *arg[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg[2]);
		exit(99);
	}
}
/**
 * main - copy file content
 * @argc: argument count
 * @arg: argument vector
 * Return: 0
 */
int main(int argc, char *arg[])
{
	int file_from, file_to, err;
	ssize_t num, wrt;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(arg[1], O_RDONLY);
	file_to = open(arg[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errfile(file_from, file_to, arg);

	num = 1024;
	while (num == 1024)
	{
		num = read(file_from, buff, 1024);
		if (num == -1)
			errfile(-1, 0, arg);
		wrt = write(file_to, buff, num);
		if (wrt == -1)
		errfile(0, -1, arg);
	}
	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err = close(file_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
