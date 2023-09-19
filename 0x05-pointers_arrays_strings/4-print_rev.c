#include "main.h"

int _putchar(char c);
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

	for (lenght = lenght -1; lenght <= 0; lenght--)
		_putchar(s[lenght]);
	_putchar('\n');
}
