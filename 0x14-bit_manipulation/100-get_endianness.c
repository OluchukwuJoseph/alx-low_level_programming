#include "imain.h"

/**
 * get_endianness - checkswhat order bytes are stored in computer memory
 * Return: 1 if it is little Endian and 0 otherwise
 */
int get_endianness(void)
{
	int num = 1;
	/* Use a pointer to interpret the integer as an array of characters*/
	char *byte = (char *)&num;

	/*If the first byte (lowest address) is 1, it's little-endian*/
	return (*byte);
}
