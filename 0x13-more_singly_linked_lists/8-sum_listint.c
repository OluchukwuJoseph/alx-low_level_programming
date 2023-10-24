#include "lists.h"

/**
 * sum_listint - sums up the data (n) in each list
 * @head: Beginning of linked list
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
