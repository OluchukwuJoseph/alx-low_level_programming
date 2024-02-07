#include "hash_tables.h"

/**
 * hash_table_print - This function prints the contents of a hash table
 * in the format of key-value pairs.
 * @ht: Pointer to the hash table to be printed.
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, printed_pairs = 0;
	hash_node_t *temp;

	if (ht == NULL)
		printf("{}\n");
	else
	{
		printf("{");
		for (; i < ht->size; i++)
		{
			if (ht->array[i] == NULL)
				continue;
			if (printed_pairs == 0)
			{
				printf("'%s': '%s'", ht->array[i]->key,
						ht->array[i]->value);
				printed_pairs++;
			}
			else if (printed_pairs > 0)
			{
				printf(", '%s': '%s'", ht->array[i]->key,
						ht->array[i]->value);
				printed_pairs++;
			}
			if (ht->array[i]->next != NULL)
			{
				temp = ht->array[i]->next;
				while (temp != NULL)
				{
					printf(", '%s': '%s'", temp->key,
							temp->value);
					printed_pairs++;
					temp = temp->next;
				}
			}
		}
		printf("}\n");
	}
}
