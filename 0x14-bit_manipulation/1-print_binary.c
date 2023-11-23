#include "main.h"

/**
 * print_binary - This function prints the binary representation of a number
 * @n: The Number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int bitposition = sizeof(unsigned long int) * 8 - 1;
	unsigned long int mask = 1 << bitposition;
	int started = 0;

	/*checks if zero or a negative number was passed*/
	if (n <= 0)
	{
		putchar('0');
		return;
	}
	/*converts number to binary*/
	while (mask != 0)
	{
		if (n & mask)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
		mask = mask >> 1;
	}
}
