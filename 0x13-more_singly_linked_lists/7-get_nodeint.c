#include "lists.h"

/**
 * get_nodeint_at_index - return node at index specified
 * @head: First node
 * @index: The node to return
 * Return: node at index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head, *tmp = head;
	unsigned int i = 0, j = 0;

	if (head == NULL)
		return (NULL);
	/*count the lenght of linked list*/
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	/*checks if node specified exists*/
	if (i < index)
		return (NULL);
	/*tranverse to node specified if it exists*/
	while (j != index)
	{
		tmp = tmp->next;
		j++;
	}
	return (tmp);
}
