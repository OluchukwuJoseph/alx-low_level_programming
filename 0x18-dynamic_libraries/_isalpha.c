#include "main.h"

/**
 * _isalpha - Check if the given character is an alphabetic character.
 * @c: The character to be checked.
 * Return:  Returns a non-zero value if the character is an alphabetic character
 * Otherwise return 0.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	else
		return (0);
}
