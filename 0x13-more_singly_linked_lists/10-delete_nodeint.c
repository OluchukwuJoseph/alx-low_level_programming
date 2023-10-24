#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: Beginning of a linked list
 * @index: index to be deleted
 * Return: 1 on sucess and -1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *tmp, *current, *lenght = *head;
	unsigned int i = 0, j = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	while (lenght != NULL)
	{
		i++;
		lenght = lenght->next;
	}
	if (i < index)
		return (-1);
	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}
	while (j != index)
	{
		j++;
		temp = temp->next;
	}
	tmp = temp->next;
	free(temp);
	j = 0;
	temp = *head;
	while (j < (index - 1))
	{
		j++;
		temp = temp->next;
	}
	temp->next = tmp;
	return (1);
}
