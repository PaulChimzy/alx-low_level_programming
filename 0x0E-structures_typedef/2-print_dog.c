#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints the attributes of the struct dog
 * @d: ponter to the declared dog structure
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nothing");
	}
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
		{
			printf("Name: %s\n", d->name);
		}

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
