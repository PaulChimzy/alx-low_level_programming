#include <stdio.h>
#include "main.h"

/**
 * main - finds the largest prime factor of a given number
 * Return: returns 0 if everything works fine
 */

int main(void)
{
	int d;
	long n;
	int largest;

	d = 2;
	n = 612852475143;

	while (n > 1)
	{
		while (n % d == 0)
		{
			n = n / d;
			largest = d;
		}
		d = d + 1;
	}
	printf("%d\n", largest);

	return (0);
}
