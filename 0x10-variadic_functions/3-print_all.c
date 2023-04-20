#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * switchup - checks the correct value and prints
 * @holder: a character to be checked
 * @argm: a va_list variable
 */
void switchup(char holder, va_list argm)
{
	char *str;

	switch (holder)
	{
		case 'c':
			printf("%c", va_arg(argm, int));
			break;
		case 'i':
			printf("%d", va_arg(argm, int));
			break;
		case 'f':
			printf("%f", va_arg(argm, double));
			break;
		case 's':
			str = va_arg(argm, char *);
			if (str == NULL)
				printf("(nil)");
			else
			{
				printf("%s", str);
			}
			break;
		default:
			break;
	}
}


/**
 * print_all - prints all the values in an argument using specified format
 * @format: list of format that should be used for printing
 */
void print_all(const char * const format, ...)
{
	va_list argm;
	int i;
	char holder;

	va_start(argm, format);
	i = 0;
	holder = 'a';

	while (*(format + i) != '\0')
	{
		holder = *(format + i);
		switchup(holder, argm);
		i++;
		if (*(format + i) != '\0' && (*(format + i - 1) == 'c' ||
		*(format + i - 1) == 'i' || *(format + i - 1) == 's'
		|| *(format + i - 1) == 'f'))
		{
			printf(", ");
		}
	}
	printf("\n");
}




