#include "main.h"

/**
 * write_to_file - Writes the content of a buffer to a file
 * @filename: File to write to
 * @content: Content to write to file
 * Return: 0 on sucess
 */
int write_to_file(char *filename, char *content)
{
	int fd;
	ssize_t bytes_written = 0, buffer_length = 0;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
		exit(99);
	for (; content[buffer_length]; buffer_length++)
		;
	bytes_written = write(fd, content, buffer_length);
	if (bytes_written == -1)
	{
		close(fd);
		exit(99);
	}
	if (close(fd) == -1)
		exit(100);
	return (0);
}

/**
 * main - copies the contents of a file to another
 * @ac: amount of arguments
 * @av: Array of Arguments Strings
 * Return: 0 on sucess
 */
int main(int ac, char **av);
int main(int ac, char **av)
{
	char *buffer = NULL;
	int status = 0, fd;
	ssize_t buffer_length = 0, bytes_read = 0;

	/*Checks if thr right amount of arguments was passed*/
	if (ac != 3)
	{
		perror("Usage: cp file_from file_to\n");
		exit(97);
	}
	/*Opens the first file passed and reads its content to a buffer*/
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	buffer_length = lseek(fd, 0, SEEK_END);
	buffer = malloc(sizeof(char) * buffer_length);
	if (buffer == NULL)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);
	while (1)
	{
		bytes_read = read(fd, buffer, 1024);
		if (bytes_read == 0)
			break;
	}
	if (close(fd) == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	/*Opens the second file and writes the content of the first file to it*/
	status = write_to_file(av[2], buffer);
	if (status == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can'twrite to %s\n", av[2]);
		free(buffer);
		exit(99);
	}
	if (status == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		free(buffer);
		exit(100);
	}
	free(buffer);
	return (0);
}
