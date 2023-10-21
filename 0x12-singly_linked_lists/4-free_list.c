#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: Beginning of linked list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp->str);
		free(temp);
	}
}
