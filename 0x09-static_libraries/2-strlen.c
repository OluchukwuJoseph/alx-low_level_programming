#include "main.h"

/**
 * _strlen - prints the lenght of a string
 * @s: stores string.
 * Return: lenght.
 */
int _strlen(char *s)
{
	int i;
	int lenght  = 0;

	for (i = 0; s[i] != '\0'; i++)
		lenght++;

	return (lenght);
}
