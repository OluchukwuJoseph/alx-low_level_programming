#include "main.h"

/**
 * read_textfile - Reads files and prints out the contents
 * @filename: File to be read
 * @letters: Amount of words to read
 * Return: number of characters in file
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_d;
	char character, *buffer;
	size_t i = 0, lenght = 0, lenght1 = 0;
	int fd;

	file_d = fopen(filename, "r");
	while ((character = fgetc(file_d)) != EOF)
	{
		if (lenght < letters)
			lenght++;
	}
	fclose(file_d);
	buffer = malloc(sizeof(char) * lenght);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	lenght1 = read(fd, buffer, lenght);
	if (lenght1 < 1)
	{
		free(buffer);
		return (0);
	}
	while (i < lenght)
	{
		putchar(buffer[i]);
		i++;
	}
	close(fd);
	free(buffer);
	return (i);
}
