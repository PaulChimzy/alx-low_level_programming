#include <stdio.h>
/**
 * main - Prints differnt two digit numbers
 * Return: returns 0 if everything works out fine
 */

int main(void)
{
	int i;
	int j;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
