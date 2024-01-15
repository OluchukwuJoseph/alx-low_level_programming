#include "main.h"

/**
 * _abs - Calculate the absolute value of an integer.
 * @n: The integer for which the absolute value is to be calculated.
 * Return: The absolute value of the given integer.
 */
int _abs(int n)
{
	if (n < 0)
		return -(n);
	else
		return (n);
}
