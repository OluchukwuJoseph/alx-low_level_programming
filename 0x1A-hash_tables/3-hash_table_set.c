#include "hash_tables.h"

void handle_collision(hash_table_t *ht, hash_node_t *item, unsigned long int index)
{
	hash_node_t *head, *temp;

	head = ht->array[index];
	temp = head;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = item;
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item;

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			if (ht->array[index]->value == NULL)
				return (1);
			return (0);
		}
		else
		{
			item = (hash_node_t *)malloc(sizeof(hash_node_t));
			if (item == NULL)
				return (1);
			item->key = strdup(key);
			item->value = strdup(value);
			item->next = NULL;
			handle_collision(ht, item, index);
			return (0);
		}
	}
	item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (1);
	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;
	ht->array[index] = item;
	return (0);
}
