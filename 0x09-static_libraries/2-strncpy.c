#include "main.h"

/**
 * _strncpy - Copys src string to dest string
 * @dest: copy destination
 * @src: String to be copies
 * @n: amount of characters to copy
 *
 * Return: return dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copies specified number of characters to dest*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Adds null terminator to end of dest string*/
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
