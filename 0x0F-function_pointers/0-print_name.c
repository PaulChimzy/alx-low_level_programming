#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints to the console the given name
 * @name: pointer to the name that needs to be printed
 * @f: pointer to the function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
