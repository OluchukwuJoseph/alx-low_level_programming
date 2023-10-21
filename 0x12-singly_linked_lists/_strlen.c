#include "lists.h"

/**
 * _strlen - counts string
 * @string: string
 * Returns: Length of string
 */
size_t _strlen(const char *string)
{
	size_t length = 0;
	while (string[length] != '\0')
		length++;
	return (length);
}
