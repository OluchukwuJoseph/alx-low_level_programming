#include "main.h"

/**
 * read_textfile - Reads a file and prints the characters read
 * @filename: File to be read
 * @letters: Amount of characters to be read
 * Return: Amount of characters read on sucess
 * 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	int fd;
	size_t buffer_length = 0;
	ssize_t bytes_read = 0, bytes_written = 0;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer_length = lseek(fd, 0, SEEK_END);
	if (letters < buffer_length)
		buffer_length = letters;
	buffer = malloc(sizeof(char) * buffer_length);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lseek(fd, 0, SEEK_SET);
	bytes_read = read(fd, buffer, buffer_length);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == 0)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytes_read);
}
