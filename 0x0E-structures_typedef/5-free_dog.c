#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the struct dog
 * @d: address to struct
 * Return: nothing
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
