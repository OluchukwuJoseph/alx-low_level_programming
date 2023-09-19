#include "main.h"

/**
 * print-array - prints the specified num of content of an array
 * @a: store the elements of array
 * @n: number of elements you want to print
 *
 * Return: null;
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			_putchar(a[i]);
			_putchar(',');
			_putchar(' ');
		}
		else
			_putchar(a[i]);
	}
	_putchar('\n');
}
