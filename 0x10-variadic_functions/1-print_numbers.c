#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers passed with seperators in between
 * @separator: characters between numbers
 * @n: number of arguments passed
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int *num_array;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
		return;
	if (separator == NULL)
		separator = "";
	num_array = malloc(n * sizeof(int));
	if (num_array == NULL)
	{
		printf("Insufficient space");
		return;
	}

	for (i = 0; i < n; i++)
		num_array[i] = va_arg(args, int);
	printf("%d", num_array[0]);
	for (i = 1; i < n; i++)
	{
		printf("%s", separator);
		printf("%d", num_array[i]);
	}
	printf("\n");
	free(num_array);
}
