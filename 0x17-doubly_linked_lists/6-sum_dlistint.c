#include "lists.h"

/**
 * sum_dlistint - Computes the sum of all the elements in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: The sum of all elements in the doubly linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
