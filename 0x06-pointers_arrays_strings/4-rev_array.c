#include "main.h"

/**
 * reverse_array - A function that reverses an array
 * @a : array to be reversed
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

