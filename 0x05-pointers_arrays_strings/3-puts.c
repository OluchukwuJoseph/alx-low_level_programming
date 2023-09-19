#include "main.h"

/**
 * _puts - prints the content of a string
 * @str: stores content of string.
 * Return: void
 */
void _puts(char *str)
{
	int i;
	char word;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
