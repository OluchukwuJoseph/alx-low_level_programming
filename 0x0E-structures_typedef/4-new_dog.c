#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - return the lenght of a string
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
	int i, lenght = 1;

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
	int n, o, i;

	n = _strlen(name);
	o = _strlen(owner);

	if (name == NULL || owner == NULL)
		return (NULL);
	/*allocates memory to new_dog*/
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char *) * n);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		new_dog->name[i] = name[i];
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(char *) * o);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < o; i++)
		new_dog->owner[i] = owner[i];

	return (new_dog);
}
