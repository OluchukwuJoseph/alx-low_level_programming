#include "main.h"

int _putchar(char c);
/**
 * puts2 - Function that returns only even numbers
 * @str: contains contents of string
 *
 * Return: void
 */
void puts2(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		/*Prints charcters in sequence*/
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
