#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieve a node at a specific index in a linked list
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the desired node (starting from 0).
 * Return: Pointer to the node at the specified index.
 * If the node is not found or the list is empty, returns NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
			break;
		i++;
		temp = temp->next;
	}
	return (temp);
}
