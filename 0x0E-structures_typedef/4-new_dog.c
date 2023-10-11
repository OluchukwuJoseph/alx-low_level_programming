#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - stores parameters passed in struct
 * @name: name (struct element)
 * @age: age (struct element)
 * @owner: owner (struct element)
 * Return: nothing
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	/*allocates memory to new_dog*/
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = name;
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = owner;
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
