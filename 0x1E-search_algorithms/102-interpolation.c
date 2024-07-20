#include "search_algos.h"
#include <stdio.h>

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, i = 0;
	size_t high = size - 1;
	size_t pos = low + (((double)(high - low) / (array[high] - array[low])) *
					(value + array[low]));

	if (pos <= size)
	{
		for (i = pos; i <= high; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}

	if (pos > size)
		printf("Value checked array[%lu] is out of range\n", pos);

	return (-1);
}
