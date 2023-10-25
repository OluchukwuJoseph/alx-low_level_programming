#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: Beginning of linked list
 * Return: Head after reversing
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL, *next = NULL;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = next;
	}
	*head = current;

	return (*head);
}
