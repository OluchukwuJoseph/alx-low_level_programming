#include "main.h"

/**
 * get_bit - returns the binary representaton if digit at index
 * @n: Number
 * @index: Digit to convert to decimal
 * Return: Value of bit and -1 if error is encountered
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask, check;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	mask = 1 << index;
	check = n & mask;
	if (mask == check)
		return (1);
	return (0);
}
