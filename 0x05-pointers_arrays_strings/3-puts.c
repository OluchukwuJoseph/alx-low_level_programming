#include "main.h"

/**
 * _puts - prints the content of a string
 * @str: stores content of string.
 * Return: string
 */
void _puts(char *str)
{
	int i;
	char word;

	for (i = 0; str[i] != '\0'; i++)
		word = _putchar(str[i]);

	_putchar('\n');
	return (word);
}
