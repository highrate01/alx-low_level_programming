#include "main.h"
/**
 * create_file - it creates a file
 *
 * @filename:  the name of the file to be created
 * @text_content: NULL terminated string to write into the file
 * Return: int and truncate if the file is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int file, num = 0, wrt;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[num])
	{
		;
		num++;
	}
	wrt = write(file, text_content, num);

	if (wrt == -1)
		return (-1);
	close(file);

	return (1);
}
