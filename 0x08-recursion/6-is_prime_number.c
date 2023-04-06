#include <stdio.h>
#include "main.h"
/**
 * recursion - checks if a number is prime or not
 * @n: an integer whose prime status is to be obtained
 * @divisor: an integer dividing the prime number
 * Return: 1 if n is a prime number else 0
 */
int recursion(int n, int divisor)
{
	if (divisor > n / 2)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (recursion(n, divisor + 1));
	}
}

/**
 * is_prime_number - checks if a number is prime or not
 * @n: an integer whose prime status is to be identified
 * Return: 1 if n is a prime number else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (recursion(n, 2));
	}
}
