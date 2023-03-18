#include <stdio.h>

/**
 * main - prints two two-digit numbers 
 * Return: rt 0 if everything works fine
 */

int main(void)
{
	int i;
	int j;
	int k;
	int z;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (z = 0; z < 10; z++)
				{
					if (i <= k && j < z)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(z + '0');
						if (i == 9 && j == 8 && k == 9 && z == 9)
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
		}
	}

	return (0);
}
