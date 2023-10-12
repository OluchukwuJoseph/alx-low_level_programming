#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings passed with separator in between
 * @separator: character between string
 * @n: number of argument
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *temp;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char *);
		if (temp == NULL)
			printf("(nil)");
		else
			printf("%s", temp);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
