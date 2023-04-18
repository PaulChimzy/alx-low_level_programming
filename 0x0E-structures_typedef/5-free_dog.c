#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees up space of a defined structure of a dog
 * @d: pointer to the initialized dog struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
