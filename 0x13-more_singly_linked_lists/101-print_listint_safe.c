#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets head to NULL
 * @head: Beginning of linked list
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

/**
 * print_listint_safe - prints a linked list and will not overflow
 * @head: Beginning of linked list
 * Return: Lenght of linked list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	size_t i = 0, j;
	const listint_t *visited[1024];

	if (head == NULL)
		exit(98);
	while (temp != NULL)
	{
		for (j = 0; j < i; j++)
		{
			if (temp == visited[j])
			{
				printf("-> [%p] %d\n", (void *) temp, temp->n);
				return (i);
			}
		}
		printf("[%p] %d\n", (void *)temp, temp->n);
		visited[i] = temp;
		i++;
		temp = temp->next;
	}
	free_listint2((listint_t **)&head);
	return (i);
}
