#include "search_algos.h"
#include <stdio.h>
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
	size_t low = 0, i = 0;
	double jump = sqrt(size);
	size_t high = jump;

	while (low <= size)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (((value >= array[low]) && (value <= array[high])) || high >= size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", low, high);
			if (high >= size)
				high = size - 1;
			for (i = low; i <= high; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
		}
		low += jump;
		high += jump;
	}

	return (-1);
}
