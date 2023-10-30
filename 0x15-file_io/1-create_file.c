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
	int fd;
	size_t lenght = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	if (lenght == 0)
		return (1);
	text_content[lenght] = '\0';
	lenght++;
	write(fd, text_content, lenght);
	close(fd);
	return (1);
}
