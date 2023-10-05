#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates strings passed in command line
 * @ac: argument counter
 * @av: argument vector (array)
 * Return: concatenated string
*/
char *argstostr(int ac, char **av)
{
	char *array;
	int c, s, lenght = 0, i = 0;

	/*checks if no argument or filename was passed*/
	if (ac == 0 || av == NULL)
		return (NULL);

	/*count how many characters is in each string*/
	for (c = 0; c < ac; c++)
	{
		for (s = 0; av[c][s] != '\0'; s++)
			lenght++;
	}

	/*allocate space for characters*/
	array = malloc((lenght + ac + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);

	/*concatenate characters*/
	for (c = 0; c < ac; c++)
	{
		for (s = 0; av[c][s] != '\0'; s++, i++)
			array[i] = av[c][s];
		array[i] = '\n';
		i++;
	}
	array[i] = '\0';
	return (array);
}
