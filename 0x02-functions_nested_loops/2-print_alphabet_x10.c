#include "main.h"

int _putchar(char c);
/**
 * print_alphabet_x10 - prints the english alphabet 10 times
 * Return: 0 on sucess.
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	for (; i < 10; i++)
	{
		c = 'a';
		for (; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
