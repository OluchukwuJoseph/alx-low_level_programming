#include "main.h"

/**
 * _putchar - write content of character c
 * @c: The character to print
 *
 * Return: On sucess return 1.
 * On error, -1 is returned, and error is set approprately.
 */
int _putchar(char c);
/**
 * main - Entry point
 *
 * Description: This is the first Function that gets executed.
 * All functions and statements that will be printed is be included in the main
 * Return: 0 on sucess.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

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
