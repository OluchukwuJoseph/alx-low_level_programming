#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c: character
 * Return: ASCII value of character if character is lowercase
 * otherwise returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c);
	else
		return (0);
}
