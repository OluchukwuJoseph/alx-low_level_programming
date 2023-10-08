#include <stdlib.h>
#include "main.h"

/**
 * array_range - prints min to max numbers
 * @min: Minimum number
 * @max: Maximum number
 * Return: array of numbers
*/
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
