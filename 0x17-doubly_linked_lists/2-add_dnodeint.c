#include "lists.h"

/**
 * add_dnodeint - adds new node to the beginning of a list
 * @head: Pointer to the beginning of a list
 * @n: value to be added in new list
 * Return: Pointer to new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new  = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (*head);
}
