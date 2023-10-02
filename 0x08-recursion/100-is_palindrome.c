#include "main.h"

/**
 * len - returns the lenght of a string
 * @s: string
 * Return: number of characters in string
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}

/**
 * palindrome - checks if first and last characters of a string are the same
 * @s: string
 * @i: First character of a string
 * @lenght: Last character of a string
 * Return: Either 1 or 0
 */
int palindrome(char *s, int i, int lenght)
{
	if (*(s + i) == *(s + lenght))
	{
		if (i == lenght || i == lenght + 1)
			return (1);
		return (palindrome(s, i + 1, lenght - 1));
	}
	return (0);
}

/**
 * is_palindrome - accepts input from palimdrome
 * @s: string
 * Return: Either 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palindrome(s, 0, len(s) - 1));
}
