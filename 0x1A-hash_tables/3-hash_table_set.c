#include "hash_tables.h"

/**
 * handle_collision - Responsible for handling collisions that may occur
 * when setting a key-value pair
 * @ht: A pointer to the hash table where collision occurs.
 * @item: Pointer to the hash node that needs to be added to the linked list
 * @i: Integer representing the index in the hash table where the
 * collision occurred.
 * Return: Nothing
 */
void handle_collision(hash_table_t *ht, hash_node_t *item, unsigned long int i)
{
	hash_node_t *temp;

	temp = ht->array[i];
	item->next = temp;
	temp->next = NULL;
	ht->array[i] = item;
}

/**
 * hash_table_set - Responsible for setting a key-value pair in a hash table
 * @ht: A pointer to the hash table where the key-value pair will be set.
 * @key: A string representing the key of the key-value pair.
 * @value: A string representing the value of the key-value pair.
 * Return: An integer value as follows:
 * 0: If the key-value pair is successfully set.
 * 1: If there is an error during memory allocation or
 * if the value cannot be set.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			if (ht->array[index]->value == NULL)
				return (0);
			return (1);
		}
		else
		{
			item = (hash_node_t *)malloc(sizeof(hash_node_t));
			if (item == NULL)
				return (0);
			item->key = strdup(key);
			item->value = strdup(value);
			item->next = NULL;
			handle_collision(ht, item, index);
			return (1);
		}
	}
	item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	item->next = NULL;
	ht->array[index] = item;
	return (1);
}
