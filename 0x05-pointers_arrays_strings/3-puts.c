#include "main.h"

int _putchar(char c);

/**
 * _puts - prints the content of a string
 * @str: stores content of string.
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
