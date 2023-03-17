#include <stdio.h>

/**
 * main - prints lowercase alphabets except e and q
 * Return: returns 0 if everything works fine
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}
	putchar('\n');

	return (0);
}
