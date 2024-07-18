#include "search_algos.h"
#include <stdio.h>


/**
 * binary_search - Searches for a value in a sorted array using
 * Binary search algorithm.
 * @array:  pointer to the first element of the array.
`* @size: Number of elements in array.
`* @value: value to search for.
`* Return: Index of value if found otherwise return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");

		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
			return (mid);
	}

	return (-1);
}
