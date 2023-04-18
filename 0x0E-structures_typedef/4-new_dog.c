#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - determine the length of a string
 * @s: pointer to the string (array of characters)
 * Return: the length of the string
 */

int _strlen(char *s)
{
        int count;

        count = 0;
        while (*(s + count) != '\0')
        {
                count++;
        }
        return (count);
}
/**
 * _strcpy - copies a string to a buffer
 * @dest: Where the strings should be copied into
 * @src: Where the strings should be copied from
 * Return: a pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
        int count;

        count = 0;
        while (*(src + count) != '\0')
        {
                *(dest + count) = *(src + count);
                count++;
        }
        *(dest + count) = *(src + count);
        return (dest);
}
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

	dog_ = NULL;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog_->name = malloc(sizeof(char) * _strlen(name));
	dog_->age = age;
	dog_->owner = malloc(sizeof(char) * _strlen(owner));

	if (dog_->name == NULL || dog_->owner == NULL)
	{
		free(dog_->name);
		free(dog_->owner);
		free(dog_);
		return (NULL);
	}
	else
	{
		dog_->name = _strcpy(dog_->name, name);
		dog_->owner = _strcpy(dog_->owner, owner);
	}	

	return (dog_);
}
