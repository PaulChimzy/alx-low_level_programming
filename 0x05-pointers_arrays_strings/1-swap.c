#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps integers in two different variables
 * @a: the first integer pointer to be swapped
 * @b: second integer pointer to be swapped
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
