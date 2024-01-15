#include "main.h"

/**
 * _strlen  - counts how many characters is in a string
 * @s: string
 * Return: Length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
