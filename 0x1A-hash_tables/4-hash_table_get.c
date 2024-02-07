#include "hash_tables.h"

/**
 * hash_table_get - The hash_table_get function is responsible for retrieving
 * the value associated with a given key from a hash table.
 * @ht: Pointer to the hash table from which the value will be retrieved.
 * @key: A string representing the key for which the value need to be retrieved
 * Return: A pointer to the value associated with the given key if found
 * otherwise, returns NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value = NULL;
	hash_node_t *temp = NULL;

	index = key_index((unsigned char *) key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	if (strcmp(ht->array[index]->key, key) == 0)
		value = strdup(ht->array[index]->value);
	else
	{
		temp = ht->array[index];
		while (temp->next != NULL)
		{
			temp = temp->next;
			if (strcmp(temp->key, key) == 0)
				value = strdup(temp->value);
		}
	}

	if (value == NULL)
		return (NULL);
	return (value);
}
