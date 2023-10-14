#include <stddef.h>

/**
 * int_index - executes array in function passed
 * @array: Array of integers to be passed in function
 * @size: size of array
 * @cmp: function to be executed
 * Return: i
 * long description: It executes an array in function passed,
 * and if the function returns 1,
 * it returns the array's index.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int value = 0, i = 0, tmp = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		tmp = array[i];
		value = cmp(tmp);
		if (value == 1)
		{
			return (i);
			break;
		}
		i++;
	}
	return (-1);
}
