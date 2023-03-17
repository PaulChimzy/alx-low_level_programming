#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Checks if a number is either positive or negative
 * Return: returns the verdict of the number
 */
int main(void)
{
	int n;
	int last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_d = n % 10;
	if (last_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_d);
	}

	else if (last_d == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}

	else if (last_d < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_d);
	}
	return (0);
}
