#include <stdio.h>

/**
 * main - prints lowercase alphabets then uppercase alphabets
 * Return: returns 0 if everything works fine
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	
	for (i = 65; i < 91; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
