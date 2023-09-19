#include "main.h"

int _putchar(char c);
/**
 * puts_half - prints the second half of a string
 * @str: stores content of string
 * Return: void.
 */
void puts_half(char *str)
{
	int i, n, lenght = 0;

	for (i = 0; i != '\0'; i++)
		lenght++;
	n = (lenght - 1) / 2;
	for (i = n + 1; i != '\n'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
