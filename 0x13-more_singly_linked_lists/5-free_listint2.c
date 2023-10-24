#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets head to NULL
 * @head: Beginning of linked list
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *temp, *tmp;

	temp = *head;
	while (temp != NULL)
	{
		tmp = temp;
		temp = temp->next;
		free(tmp);
	}
	*head = temp;
}
