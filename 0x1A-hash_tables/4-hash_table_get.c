#include "hash_tables.h"

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
