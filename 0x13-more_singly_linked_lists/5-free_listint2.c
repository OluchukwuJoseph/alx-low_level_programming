#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets head to NULL
 * @head: Beginning of linked list
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (*head == NULL || head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
