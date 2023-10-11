#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the element value of struct passed
 * @d: struct
 * Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	printf("Name: %s\n", d->name);
	if (d->age == NULL)
	{
		printf("Age: (Nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Owner: %s\n", d->owner);
}

