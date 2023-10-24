#include "lists.h"

/**
 * pop_listint - deletes the first node of a linked list
 * @head: first node of a linked list
 * Return: The n value of first node
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (head ==NULL || *head == NULL)
		return (0);
	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (number);
}
