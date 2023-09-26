#include "main.h"

/**
 * _strstr - function finds the 1st occurrence of the substring in the string
 * @haystack: string
 * @needle: what we are looking for
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *ss = needle;

		while (*s == *ss && *ss != '\0')
		{
			s++;
			ss++;
		}
		if (*ss == '\0')
			return (haystack);
	}
	return (0);
}
