#include "main.h"

/**
 * _strlen - counts characters in a string
 * @str: string
 * Return: Length of string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * create_file - Creates file and adds contents to file
 * @filename: File to be created
 * @textcontent: Content to be added to file
 * Return: 1 on sucess and -1 on failure
 */
int create_file(const char *filename, char *textcontent)
{
	int fd;
	ssize_t buffer_length = 0, bytes_written = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	buffer_length = _strlen(textcontent);
	if (buffer_length == 0)
		textcontent = "";

	bytes_written = write(fd, textcontent, buffer_length);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
