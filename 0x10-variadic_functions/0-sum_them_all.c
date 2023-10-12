#include <stdarg.h>

/**
 * sum_them_all - sums up all argument passed
 * @n: number of arguments passed
 * Return: sum of argument
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
		result = result + va_arg(args, int);
	va_end(args);
	return (result);
}
