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
		if (i != 9)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(i + '0');
		}
	}

	return (0);
}
