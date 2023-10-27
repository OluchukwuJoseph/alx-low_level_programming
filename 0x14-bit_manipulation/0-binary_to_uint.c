#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary
 * Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, n;

	decimal = 0;
	if (!b)
		return (0);
	for (n = 0; b[n] != '\0'; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
	}
	for (n = 0; b[n] != '\0'; n++)
	{
		decimal = decimal << 1;
		if (b[n] == '1')
			decimal += 1;
	}
	return (decimal);
}
