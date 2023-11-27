#include "main.h"

/**
 * append_text_to_file - appends contents to file
 * @filename: File to append contents to
 * @textcontent: Content to be appended
 * Return: 1 on sucess amd -1 on failure
 */
int append_text_to_file(char *filename, char *textcontent)
{
	ssize_t buffer_length = 0, bytes_written = 0;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (textcontent == NULL)
		textcontent = "";

	for (; textcontent[buffer_length]; buffer_length++)
		;
	bytes_written = write(fd, textcontent, buffer_length);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
