#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - stores parameters passed in struct
 * @d: struct name
 * @name: name (struct element)
 * @age: age (struct element)
 * @owner: owner (struct element)
 * Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(1);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
