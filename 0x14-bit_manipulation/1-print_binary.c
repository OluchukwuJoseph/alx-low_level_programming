#include "main.h"

/**
 * add_pow - This function calculates @base ^ @power
 * @base: base of exponent
 * @power: power of exponent
 * Return: Value of power * base
 */
unsigned long int add_pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
	{
		num = num * base;
	}
	return (num);
}
/**
 * print_binary - This function prints the binary representation of a number
 * @n: The Number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask, check;
	char started = 0;

	mask = add_pow(2, sizeof(unsigned long int) * 8 - 1);
	/*converts number to binary*/
	while (mask != 0)
	{
		check = n & mask;
		if (check == mask)
		{
			_putchar('1');
			started = 1;
		}
		else if (started == 1 || mask == 1)
		{
			_putchar('0');
		}
		mask = mask >> 1;
	}
}
