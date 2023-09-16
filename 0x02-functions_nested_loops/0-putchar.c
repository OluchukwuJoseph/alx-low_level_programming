#include "main.h"

/**
 * _putchar - print characters
 *
 * @c: character to print
*/

int _putchar(char c);

/**
 * main - Entry point
 * Description: It is the standard entry point of all c programs.
 * it is the function that gets read first.
 * Return: print 0 if the program executes sucessfully
*/
int main(void)
{
	char _put[] = "_putchar";
	int i = 0;

	for (; _put[i] != '\0'; i++)
	{
		_putchar(_put[i]);
	}

	_putchar('\n');

	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
