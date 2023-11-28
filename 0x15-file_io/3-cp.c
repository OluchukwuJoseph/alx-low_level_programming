#include "main.h"

/**
 * main - copies the contents of a file to another
 * @ac: amount of arguments
 * @av: Array of Arguments Strings
 * Return: 0 on sucess
 */
int main(int ac, char **av);
int main(int ac, char **av)
{
	char buffer[1024];
	int fd_src, fd_des;
	ssize_t bytes_read = 0, bytes_written = 0;
	/*Checks if thr right amount of arguments was passed*/
	if (ac != 3)
	{
		perror("Usage: cp file_from file_to\n");
		exit(97);
	}
	/*opens first file passed*/
	fd_src = open(av[1], O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	/*opens second file passed*/
	fd_des = open(av[2], O_CREAT | O_TRUNC | O_WRONLY | O_APPEND, 0664);
	if (fd_des == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", av[2]);
		exit(99);
	}
	/*copies contents from first file to second file*/
	while ((bytes_read = read(fd_src, buffer, BUFFERSIZE)) > 0)
	{
		bytes_written = write(fd_des, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	/*close first file*/
	if (close(fd_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_src);
		exit(100);
	}
	/*close second file*/
	if (close(fd_des) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_des);
		exit(100);
	}
	return (0);
}
