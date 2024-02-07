#ifndef TABLE_H
#define TABLE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct hash_node_s - node of a hash table
 * @key: The key string
 * The key string is unique in the hash table
 * @value: The value corresponding to the key
 * @next: pointer to the next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
void handle_collision(hash_table_t *ht, hash_node_t *item, unsigned long int index);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);

#endif
