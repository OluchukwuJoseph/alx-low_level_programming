#include "main.h"

/**
 * _strpbrk - This function searches a string for any set of bytes
 * @s: string
 * @accept: bytes
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
