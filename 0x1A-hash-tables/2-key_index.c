#include "hash_tables.h"

/**
 * key_index - Calculates the index for a given key using the HJB2 function.
 * @key: A pointer to an array of unsigned characters representing the key.
 * @size: Size of the data structure for which the index is being calculated
 *
 * Return: Unsigned long integer representing the calculated index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ascii_value, index;

	ascii_value = hash_hjb2(key);
	index = ascii_value % size;
	return (index);
}

