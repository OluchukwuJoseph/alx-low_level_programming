#include <stdlib.h>
#include "main.h"

/**
 * _calloc - request memory for nmemb of elements
 * @nmemb: number of elements
 * @size: size of elements
 * Return: array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = calloc(nmemb, size);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	return (array);
}

