#include <stdlib.h>
#include "main.h"

/**
 * _realloc - resizes dynamically allocated memory
 * @ptr: pointer to previous allocated memory
 * @old_size: previous memory size
 * @new_size: new memory size
 * Return: pointer to newly allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array;
	char *ptr_char;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	array = malloc(new_size);
	if (array == NULL)
	{
		free(array);
		free(ptr);
		return (NULL);
	}
	ptr_char = (char *)ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		array[i] = ptr_char[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		array[i] = ptr_char[i];
	}

	return (array);
}
