#include "main.h"

/**
 * print_alphabet - prints a - z
 *
 * Return: return 1 on sucess
 */
int print_alphabet(void)
{
	char fc, lc;

	fc = 'a';
	lc = 'z';
	for (; fc <= lc; fc++)
	{
		_putchar(fc);
	}
	_putchar('\n');
	
	return (1);
}
