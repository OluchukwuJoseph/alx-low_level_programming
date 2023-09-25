#include "main.h"

/**
 * _memset - changes the value of array elements
 * @s: array
 * @b: The value we are changing to
 * @n: number of elements to change
 * Return: Nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
}
