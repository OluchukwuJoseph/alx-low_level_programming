#include <stdlib.h>
#include "main.h"

/**
 * word_counter - helper function that counts words
 * @s: string
 * Return: words counted
*/
int word_counter(char *s)
{
	int flag, w, c;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * strtow - converts strings to word
 * @str: string
 * Return: Words
*/
char **strtow(char *str)
{
	char **array, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_counter(str);
	if (words == 0)
		return (NULL);
	array = (char **) malloc(sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				array[k] = tmp - c;
				k++;
				c = 0;
			}
		}
	else if (c++ == 0)
		start = i;
	}
	array[k] = NULL;
	return (array);
}
