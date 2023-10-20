#include "lists.h"

/**
 * print_list - Prints the entire linked list
 * @h: head
 * Return: The number of lists printed
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t i = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		i++;
		current = current->next;
	}

	return (i);
}
