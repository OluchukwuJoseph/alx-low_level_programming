#include "main.h"

/**
 * append_text_to_file - append string to end of file
 * @filename: file to append string to
 * @text_content: string to append
 * Return: 1 on sucess and -1 otherwise
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rwr;
	size_t letters;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
	;

	if (lseek(fd, -1, SEEK_END) == -1)
	{
		close(fd);
		return (-1);
	}

	rwr = write(fd, text_content, letters);
	if (rwr == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
