#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints all strings in the argument seperated
 * @separator: symbol for seperating values
 * @n: the number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argm;
	unsigned int i;
	char *test;

	va_start(argm, n);

	test = NULL;
	if (separator == NULL)
	{
		separator = "";
	}
	if (n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		test = va_arg(argm, char *);
		if (test == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", test);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(argm);
}
