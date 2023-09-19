#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: stores the content of the string
 *
 * Return: Null.
 */
void print_rev(char *s)
{
	int i;
	int lenght = 0;

	for (i = 0; i != '\0'; i++)
		lenght++;

	lenght--;
	for (lenght--; lenght <= 0; lenght--)
		_putchar(s[lenght]);
	_putchar('\n');
}
