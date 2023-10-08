#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - returns pointer to memory requested
 * b: amount of memory requested
 * Return: memory requested if available
*/
void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);
	if (array == NULL)
	{
		free (array);
		exit(98);
	}

	return (array);
}
