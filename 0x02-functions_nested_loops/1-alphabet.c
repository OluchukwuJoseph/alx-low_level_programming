#include "main.h"

/**
 * print_alphabet - prints all english alphabets in lowercase.
 *
 * Return: returns 0 on sucess
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
