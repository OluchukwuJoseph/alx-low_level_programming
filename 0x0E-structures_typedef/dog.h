#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Stores dog details
 * @name: dog name
 * @age: dog age
 * @owner: dog owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
