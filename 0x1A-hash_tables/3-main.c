#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "hetairas", "1st node");
	printf("KEY -> %s\n", ht->array[key_index((unsigned char *) "hetairas", ht->size)]->key);
	printf("VALUE -> %s\n", ht->array[key_index((unsigned char *) "hetairas", ht->size)]->value);

	hash_table_set(ht, "mentioner", "2nd node");
	printf("KEY -> %s\n", ht->array[key_index((unsigned char *) "mentioner", ht->size)]->next->key);
	printf("VALUE -> %s\n", ht->array[key_index((unsigned char *) "mentioner", ht->size)]->next->value);
	return (EXIT_SUCCESS);
}
