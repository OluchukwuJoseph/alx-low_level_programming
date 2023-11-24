This directory contains functions that works with bit-wise operators to help you manipulate numbers at bit level.

These functions includes:

unsigned int binary_to_uint(const char *b);
	USAGE:	This function converts binary numbers to decimal.
	file:	0-binary_to_uint.c
void print_binary(unsigned long int n);
	USAGE: This function prints the binary representation of a number
	file: 1-print_binary.c
int get_bit(unsigned long int n, unsigned int index);
	USAGE:	This function the binary representaton of digit at index
	file: 2-get_bit.c
int set_bit(unsigned long int *n, unsigned int index);
	USAGE: This function is used to set bit at index to 1
	file: 3-set_bit.c
int clear_bit(unsigned long int *n, unsigned int index);
	USAGE: This function is used to set bit at index to 0
	file: 4-clear_bit.c
