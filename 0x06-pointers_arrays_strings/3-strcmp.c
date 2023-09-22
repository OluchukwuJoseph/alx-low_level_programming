#include "main.h"

/**
 * _strcmp - compares two string and prints their ASCII differences
 * @s1: First string
 * @s2: Second string
 * Return: return n.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	/*Loops through both strings*/
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		/*Checks if string 1 is equal to string 2*/
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

	}
	return (0);
}
