#include "main.h"
/**
 * _isdigit - Checks if a character is an uppercase letter
 * @c: character
 * Return: a non-zero value if the character is an uppercase letter
 * Otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (c);
	else
		return (0);
}
