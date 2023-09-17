#include "main.h"

/**
 * print_alphabet - prints the english alphabet
 *
 * Return: return 0
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	for (; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
