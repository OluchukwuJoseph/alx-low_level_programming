#include "lists.h"

/**
 * print_listint - prints all elements in linked list to console
 * @h: head (beginning of linked list)
 * Return: number of elements
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t i = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
