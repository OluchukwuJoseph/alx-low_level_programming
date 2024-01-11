#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		length++;
		temp = temp->next;
	}
	return (length);
}
