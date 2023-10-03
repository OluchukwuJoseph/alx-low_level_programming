#include "main.h"

/**
 * _isupper - checks if alphabet is upper case
 * @c: character
 * Return: Either 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
