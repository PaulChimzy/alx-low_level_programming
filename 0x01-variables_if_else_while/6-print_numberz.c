#include <stdio.h>
/**
 * main - prints all numbers in base 10 begining from 0 using putchar
 * Return: 0 if everything works fine
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
