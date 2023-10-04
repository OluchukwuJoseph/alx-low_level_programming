#include "main.h"
#include <stdlib.h>

/**
 * create_array - copies the charcter pased and sets all element to it
 * @size: number of elements
 * @c: character
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
        	/* malloc failed, handle the error */
        	return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
