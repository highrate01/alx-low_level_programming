#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 *
 * @filename: the pointer to the string
 * @letters: the length of letters to be printed
 * Return: The number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rnum, wnum;
	char *buff;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	rnum = read(file, buff, letters);
	wnum = write(STDOUT_FILENO, buff, rnum);
	close(file);
	free(buff);

	return (wnum);
}
