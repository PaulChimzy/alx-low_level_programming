#include <stdio.h>
#include "main.h"
/**
 * recursion - obtains the square root of a number
 * @n: an integer whose square root is to be obtained
 * @guess: an integer guessed as the square root
 * Return: square root of the number if it exists
 */
int recursion(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess > n / 2)
	{
		return (-1);
	}
	else
	{
		return (recursion(n, guess + 1));
	}
}

/**
 * _sqrt_recursion - obtains the square root of a number
 * @n: an integer whose square root is to be obtained
 * Return: square root of the number if it exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (recursion(n, 0));
	}
}
