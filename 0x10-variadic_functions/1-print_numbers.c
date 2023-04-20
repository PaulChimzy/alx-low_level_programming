#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints all values in the argument seperated
 * @separator: symbol for seperating values
 * @n: the number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argm;
	unsigned int i;

	va_start(argm, n);

	if (separator == NULL)
	{
		separator = "";
	}
	if (n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argm, int));

		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(argm);
	printf("\n");
}
