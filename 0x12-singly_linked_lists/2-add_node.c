#include "lists.h"

/**
 * _strlen - counts string
 * @string: string
 * Return: Length of string
 */
size_t _strlen(const char *string)
{
	size_t length = 0;

	while (string[length] != '\0')
		length++;
	return (length);
}

/**
 * add_node - adds new list to the top
 * @head: Address of previous list top
 * @str: List element
 * Return: New address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->next = *head;
	*head = new;
	return (new);
}
