#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at index in a linked list.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index at which the new node should be inserted (starting from 0).
 * @n: Value to be stored in the new node.
 * Return: Pointer to the newly inserted node on success, NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *newNode, *prev;
	unsigned int i = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return NULL;

	newNode->n = n;

	if (*h == NULL && idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = NULL;
		*h = newNode;
		return newNode;
	}

	if (*h == NULL || idx == 0){
		free(newNode);
		return NULL;
	}

	temp = *h;

	while (temp != NULL && i < idx)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	if (temp == NULL && i == idx)
	{
		prev->next = newNode;
		newNode->prev = prev;
		newNode->next = NULL;
		return newNode;
	}
	else if (temp != NULL && i == idx)
	{
		prev->next = newNode;
		newNode->prev = prev;
		newNode->next = temp;
		temp->prev = newNode;
		return newNode;
	}
	else
	{
		free(newNode);
		return NULL;
	}
}
