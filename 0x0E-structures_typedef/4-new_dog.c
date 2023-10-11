#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - return the lenght of a string
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int i, lenght = 0;

	for (i = 0; s[i] != '\0'; i++)
		lenght++;
	return (lenght);
}
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

	if (name == NULL || owner == NULL)
		return (NULL);
	/*allocates memory to new_dog*/
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char *) * _strlen(name));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(char *) * _strlen(owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = owner;

	return (new_dog);
}
