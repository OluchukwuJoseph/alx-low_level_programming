#include "main.h"

/**
 * print_alphabet - prints a - z
 *
 * Return: return 0
 */
void print_alphabet(void)
{
	char fc, lc;

	fc = 'a';
	lc = 'z';
	for (; fc <= lc; fc++)
	{
		_putchar(fc);
	}
	_putchar('\n');
}
