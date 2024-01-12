#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at index in a doubly linked list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted (starting from 0).
 * Return: 1 if the deletion is successful.
 * Returns -1 if the index is out of bounds or if the list is empty.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev, *next;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	while (temp != NULL)
	{
		if (i == index)
			break;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	prev = temp->prev;
	next = temp->next;
	if (prev != NULL)
		prev->next = next;
	next->prev = prev;
	free(temp);
	if (prev == NULL)
		*head = next;
	return (1);
}
