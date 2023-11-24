#include "main.h"

/**
 * clear_bit - sets bit at index to 0
 * @n: Number
 * @index: Bit to set to 0
 * Return: 1 on sucess and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
