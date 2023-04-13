#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - creating dynamic memory for a program
 * @b: size of memory to be allocated
 * Return: nothing just exit accordingly
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL || b == 0)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
