#include <unistd.h>

/**
 * _putchar - writes characters
 * @c: character
 * Return: 1 on sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

