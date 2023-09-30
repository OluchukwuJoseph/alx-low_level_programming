#include "main.h"

/**
 * _strlen_recursion - prints the lenght of a string
 * @s: string
 * Return: The lenght of the string passed
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

