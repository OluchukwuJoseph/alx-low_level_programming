#include "main.h"

/**
 * _isupper - Checks if a character is an uppercase letter
 * @c: character
 * Return: a non-zero value if the character is an uppercase letter
 * Otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);
	else
		return (0);
}
