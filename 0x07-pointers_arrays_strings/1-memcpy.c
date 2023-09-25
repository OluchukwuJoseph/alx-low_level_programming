#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination string
 * @src: source string (The one we are copying from)
 * @n: number of element to copy
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
