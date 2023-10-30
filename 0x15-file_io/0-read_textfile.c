#include "main.h"

/**
 * read_textfile - Reads files and prints out the contents
 * @filename: File to be read
 * @letters: Amount of words to read
 * Return: number of characters in file
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t length = 0, length1;
	char *buffer;

	if (letters <= 0 || filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	length = lseek(fd, 0, SEEK_END);
	if (!(length > 0))
	{
		close(fd);
		return (0);
	}
	if (length > letters)
		length = letters;
	buffer = (char *)malloc(sizeof(char) * length);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lseek(fd, 0, SEEK_SET);
	length1 = read(fd, buffer, length);
	if (!(length1 > 0))
	{
		close(fd);
		free(buffer);
		return (0);
	}
	write(STDOUT_FILENO, buffer, length);
	close(fd);
	free(buffer);
	return (length);
}
