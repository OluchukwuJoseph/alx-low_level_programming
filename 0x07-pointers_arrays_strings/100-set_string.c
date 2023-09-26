#include "main.h"

/**
 * set_string - sets value of a pointer to char
 * @s: address of string 1
 * @to: destination
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
