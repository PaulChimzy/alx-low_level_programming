#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all the numbers passed as an argument
 * @n: first argument in the list which is a constant
 * Return: the sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argm;
	int i;
	int sum;

	va_start(argm, n);

	sum = 0;
	if (n == 0)
		return (sum);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(argm, i);
	}
	return (sum);
}
