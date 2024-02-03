#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;
	hash_node_t *demo;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);

	demo = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (demo == NULL)
		return (1);
	demo->key = "name";
	demo->value = "Joseph";
	demo->next = NULL;
	ht->array[1] = demo;
	printf("here\n");
	printf("KEY -> %s\n", ht->array[1]->key);
	return (0);
}
