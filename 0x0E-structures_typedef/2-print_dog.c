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
		printf("nothing")
	}
	else
	{
		if (d->name == NULL)
			printf("(nil)");
		else
		{
			printf("%s\n", d->name);
		}

		if (d->age == NULL)
			printf("(nil)");
		else
		{
			printf("%d\n", d->age);
		}

		if (d->owner == NULL)
			printf("(nil)");
		else
		{
			printf("%s\n", d->owner);
		}
	}
}
