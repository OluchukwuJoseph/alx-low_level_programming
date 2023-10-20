#include "lists.h"

size_t print_list(node *head)
{
	node *last;
	size_t i = 0;

	last = head;
	while (last != NULL)
	{
		if (last -> string == NULL)
		{
			last -> string = "(nil)";
			last -> length = 0;
		}
	printf("[%d] %s\n", last -> length, last -> string);
	i++;
	last = last -> ptr;
	}

	return (i);
}
