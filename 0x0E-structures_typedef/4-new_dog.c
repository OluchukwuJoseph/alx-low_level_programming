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
	unsigned int n1, o1, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	/*allocates memory to new_dog*/
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (n1 = 0; name[n1]; n1++)
		n1++;
	new_dog->name = malloc(n1 * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < n1; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;
	for (o1 = 0; owner[o1]; o1++)
		o1++;
	new_dog->owner = malloc(o1 * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < o1; i++)
		new_dog->owner[i] = owner[i];

	return (new_dog);
}
