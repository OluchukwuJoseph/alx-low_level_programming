#include "lists.h"

/**
 * listint_len - counts all elements in linked list
 * @h: head (beginning of linked list)
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
