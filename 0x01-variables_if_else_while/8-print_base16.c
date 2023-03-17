#include <stdio.h>

/**
 * main - prints all numbers present in base16
 * Return: returns 0 if everything works fine
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
