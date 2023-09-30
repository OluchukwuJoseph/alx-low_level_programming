#include "main.h"

/**
 * _puts_recursion - prints strings
 * @s: string
 * Return: returns characters of string passed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return ('\n');
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
