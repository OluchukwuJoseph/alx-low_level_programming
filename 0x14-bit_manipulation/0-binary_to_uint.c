#include "main.h"

/**
 * _strlen - counts the characters in a string
 * @string: string to be counted
 * Return: Lenght to string
*/
unsigned int _strlen(const char *string)
{
	unsigned int length = 0;

	while (string[length] != '\0')
	{
		if (string[length] == '0' || string[length] == '1')
			length++;
		else
			return (0);
	}
	return (length);
}

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary
 * Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int length = _strlen(b), decimal = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	for (; i < length; i++)
		decimal = (decimal << 1) | (b[i] - '0');

	return (decimal);
}
