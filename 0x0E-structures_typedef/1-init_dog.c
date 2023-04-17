#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initializes the dog structure
 * @d: pointer to the dog structure
 * @name: pointer to the name of the dog
 * @age: the age of the dog
 * @owner: pointer to the owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
