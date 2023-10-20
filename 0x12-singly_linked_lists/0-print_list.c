#include "lists.h"

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
