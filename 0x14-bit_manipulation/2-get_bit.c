#include "main.h"

/**
 * get_bit - return value of bit at index specified
 * @n: number
 * @index: index at which to check bit
 * Return: value of bit on sucess
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
