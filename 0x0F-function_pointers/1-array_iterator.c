#include <stddef.h>
/**
 * array_iterator - Function used to execute a function in elements of an array
 * @array: array
 * @size: size of array
 * @action: function to be executed in elements of array
 * Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0 || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
