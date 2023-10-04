#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate string passed and returns pointer to string location
 * @str: string
 * Return: pointer to string location, NULL on error
 */
char *_strdup(char *str)
{
	char *array;
	int i, lenght = 0;
	/*Counts string*/
	for (i = 0; str[i] != '\0'; i++)
		lenght++;
	/*Checks if string is empty*/
	if (lenght == 0)
		return (NULL);
	/*Allocate memory for string*/
	array = malloc(lenght * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= lenght; i++)
		array[i] = str[i];

	return (array);
}
