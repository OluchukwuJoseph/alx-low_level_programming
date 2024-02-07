#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table along with its elements.
 * @ht: Pointer to the hash table to be deleted.
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *temp = NULL, *head = NULL;

	if (ht != NULL)
	{
		for (; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				head = ht->array[i];
				temp = head;
				while (temp != NULL)
				{
					head = head->next;
					if (temp->key != NULL)
						free(temp->key);
					if (temp->value != NULL)
						free(temp->value);
					free(temp);
					temp = head;
				}
			}
		}
		free(ht->array);
		free(ht);
	}
}
