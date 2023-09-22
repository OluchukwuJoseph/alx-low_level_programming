#include "main.h"

/**
 * _strcncpy - Copys src string to dest string
 * @dest: copy destination
 * @src: String to be copies
 * @n: amount of characters to copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	len = 0;
	lenght = 0;

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
