#include "main.h"
#include <stdio.h>

int _putchar(char c);
/**
 * print_array - prints the specified num of content of an array
 * @a: st ore the elements of array
 * @n: number of elements you want to print
 *
 * Return: null;
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	printf("%d", a[0]);

	for (i = 1; i < n; i++)
		printf(", %d", a[i]);

	printf("\n");
}
