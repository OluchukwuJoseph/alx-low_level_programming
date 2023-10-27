#include "main.h"

/**
 * _pow - This function calculates (base ^ power)
 * @base: base of exponent
 * @power: power of exponent
 * Return: value of (power ^ base)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power;a++)
		num *= base;
	return (num);
}

/**
 * print_binary - converts base 10 to binary
 * @n: base 10
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char f;

	f = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || divisor == 1)
			_putchar('0');
		divisor = divisor >> 1;
	}
}
