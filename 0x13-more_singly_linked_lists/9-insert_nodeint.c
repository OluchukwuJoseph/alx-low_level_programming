#include "lists.h"

/**
 * add_front - adds node to the beginning of the list
 * @head: Address of first node in the list
 * @n: Value to be stored at new node
 * Return: Address of new node
*/
listint_t *add_front(listint_t **head, int n)
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

/**
 * insert_nodeint_at_index - inserts node at index specified
 * @head: Address of first node in the list
 * @idx: index to add new node
 * @n: Value to be stored at new node
 * Return: Address of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *tmp, *new_node;
	unsigned int i = 0, j = 0;

	if (head == NULL || *head == NULL)
		return (NULL);
	if (idx == 0)
	{
		temp = add_front(head, n);
		return (temp);
	}
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	if (i < idx)
		return (NULL);
	temp = *head;
	while (j != (idx - 1))
	{
		temp = temp->next;
		j++;
	}
	tmp = temp->next;
	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = tmp;
	temp->next = new_node;
	return (new_node);
}
