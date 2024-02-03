#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table with the specified size.
 *
 * This function dynamically allocates memory for a new hash table and its
 * array of hash nodes. It initializes the size of the hash table and returns
 * a pointer to the created hash table.
 *
 * @size: The size of the hash table to be created.
 *
 * Return: A pointer to the newly created hash table
 * otherwise return NULL if memory allocation fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->size = size;
	return (hash_table);
}
