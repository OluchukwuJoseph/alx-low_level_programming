#include "main.h"

/**
 * _puts - prints a string
 * @s: string
 * Return: Nothing
 */
void _puts(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\0');
}
