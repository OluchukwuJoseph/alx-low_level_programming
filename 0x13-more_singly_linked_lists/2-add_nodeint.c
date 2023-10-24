#include "lists.h"

/**
 * add_nodeint - adds node to the beginning of the list
 * @head: Address of first node in the list
 * @n: Value to be stored at new node
 * Return: Address of new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
