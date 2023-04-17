#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * dog_t - creates a new dog and initializing
 * @name: pointer to the name of the dog
 * @age: the age of the dog
 * @owner: pointer to teh owner of the dog
 * Return: a pointer to the struct of a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_;

	dog_->name = name;
	dog_->age = age;
	dog_->owner = owner;

	return (dog_);
}
