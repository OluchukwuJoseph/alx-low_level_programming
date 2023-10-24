#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: Beginning of linked list
 * Return: Nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp, *tmp = NULL;

	temp = head;
	while (temp != NULL)
	{
		tmp = temp;
		temp = temp->next;
		free(tmp);
	}
}
