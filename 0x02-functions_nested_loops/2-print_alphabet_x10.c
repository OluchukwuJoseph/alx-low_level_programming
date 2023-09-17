#include "main.h"

/**
 * print_alphabet_x10 - prints the english alphabet 10 times
 *
 * Return: returns 0 on sucess
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		for (; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
