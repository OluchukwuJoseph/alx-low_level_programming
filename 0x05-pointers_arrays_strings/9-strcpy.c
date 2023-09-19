#include "main.h"

/**
 * _strcpy - Function that copies string
 *
 * @dest: string destination
 * @src: string source
 * Return: Destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
