#include "main.h"
#include <stdio.h>

int _putchar(char c);
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
			printf("%d, ",a[i]);
		}
		else
			printf("%d, ",a[i});
	}
	_putchar('\n');
}
