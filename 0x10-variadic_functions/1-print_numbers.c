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
	unsigned int i;

	va_start(args, n);
	if (n == 0)
	{
		return;
	}
	if (separator == NULL)
		separator = ""; 

	printf("%d", va_arg(args, int));
	for (i = 1; i < n; i++)
	{
		printf("%s", separator);
		printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
