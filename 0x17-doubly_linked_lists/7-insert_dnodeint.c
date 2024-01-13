#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at index in a linked list.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index at which the new node should be inserted (starting from 0).
 * @n: Value to be stored in the new node.
 * Return: Pointer to the newly inserted node on success, NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new, *prev;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	if (*h == NULL)
	{
		*h = new;
		return (*h);
	}
	temp = *h;
	while (temp->next != NULL)
	{
		if (i == idx)
			break;
		temp = temp->next;
		i++;
	}
	if ((i + 1) == idx)
	{
		temp->next = new;
		new->prev = temp;
		return (new);
	}
	if (idx != i)
	{
		free(new);
		return (NULL);
	}
	new->next = temp;
	prev = temp->prev;
	new->prev = prev;
	temp->prev = new;
	if (prev != NULL)
		prev->next = new;
	if (i == 0)
		*h = new;
	return (new);
}
