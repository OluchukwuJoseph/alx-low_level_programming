#include "main.h"

/**
 * binary_to_uint - This function converts binary numbers to decimal
 * @b: A string containing binary
 * Return: Decimal on sucess and 0 if non-binary is encounted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if ((b[i] - '0') > 1)
			return (0);
		decimal = (decimal << 1) | (b[i] - '0');
		i++;
	}
	return (decimal);
}
