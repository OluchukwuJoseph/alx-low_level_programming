#include "main.h"

/**
 * _strncat - Concatenates based on the numbers of characters specified
 * @dest: String to be concatenated and Returned
 * @src: String to be concatenated
 * @n: Number of charactersto be concatenated
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len, lenght;

	len = 0;
	lenght = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		lenght++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; i < n - 1 && i < len; i++)
	{
		dest[i + lenght] = src[i];
	}
	dest[i + lenght] = '\0';
	return (dest);
}
