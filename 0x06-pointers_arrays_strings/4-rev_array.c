#include "main.h"

/**
 * reverse_array - A function that reverses an array
 * @a : array to be reversed
 * @n: number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int 1, temp;

	for (i = 0; i < n--; i++, n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

