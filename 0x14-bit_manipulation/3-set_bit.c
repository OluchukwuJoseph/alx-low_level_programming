#include "main.h"

/**
 * set_bit - sets bit at index to 1
 * @n: Number
 * @index: Bit to set
 * Return: 1 on sucess and -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	mask = 1 << index;
	*n = *n | mask;
	return (1);
}
