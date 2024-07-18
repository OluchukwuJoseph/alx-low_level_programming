#include "search_algos.h"
#include <stdio.h>


/**
 * linear_search - Searches for value in an array using Linear search algorithm
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: Index of value if found else return -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int index = 0;

	if (array == NULL)
		return (-1);

	while (index < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}

	return (-1);
}
