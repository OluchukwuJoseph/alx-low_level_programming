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
	void *array;
	char *array_char, *ptr_char;
	unsigned int element = 0, i;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	array = malloc(new_size);
	if (array == NULL)
	{
		free(array);
		free(ptr);
		return (NULL);
	}

	array_char = (char *)array;
	ptr_char = (char *)ptr;

	element = new_size / sizeof(char);
	for (i = 0; i < element; i++)
		array_char[i] = ptr_char[i];

	return (array);
}
