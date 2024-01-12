#include "lists.h"

/**
 * free_dlistint - Frees the memory allocated for a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *free_list;

	temp = head;
	while (temp != NULL)
	{
		free_list = temp;
		temp = temp->next;
		free(free_list);
	}
}
