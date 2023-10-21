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
 * add_node_end - adds new list to last list
 * @head: First list
 * @str: content of list
 * Return: Address of new list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *add;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	add = *head;
	while (add->next != NULL)
		add = add->next;
	add->next = new;
	return (new);
}
