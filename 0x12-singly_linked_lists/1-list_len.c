#include "lists.h"

/**
 * liat_len - calculates the length of a linked list
 * @h: head (Beginning of the list)
 * Return: length
*/
size_t list_len(const list_t *h)
{
	const list_t *print;
	size_t i = 0;

	print = h;
	while (print != NULL)
	{
		i++;
		print = print -> next;
	}
	return (i);
}
