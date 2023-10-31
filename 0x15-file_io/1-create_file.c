#include "main.h"

/**
 * _strlen - counts the characters in a string
 * @string: string to be counted
 * Return: length of string
 */
size_t _strlen(const char *string)
{
	size_t length = 0;

	while (string[length] != '\0')
		length++;
	return (length);
}

/**
 * create_file - Creates file if file does not exist and adds content to file
 * @filename: name of file to be created
 * @text_content: Content to be added
 * Return: 1 on sucess and -1 otherwise
*/
int create_file(const char *filename, char *text_content)
{
	int fd, rwr;
	size_t length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (length = 0; text_content[length]; length++)
	;

	rwr = write(fd, text_content, length);
	if (rwr == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
