#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all the values in an argument using specified format
 * @format: list of format that should be used for printing
 */
void print_all(const char * const format, ...)
{
	va_list argm;
	int i = 0;
	char *sep = ", ", *str;

	va_start(argm, format);
	while (format != NULL && *(format + i) != '\0')
	{
		if (*(format + i + 1) == '\0')
			sep = "";
		switch (*(format + i))
		{
			case 'c':
				printf("%c%s", va_arg(argm, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(argm, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(argm, double), sep);
				break;
			case 's':
				str = va_arg(argm, char *);
				if (str == NULL)
					printf("(nil)%s", sep);
				else
					printf("%s%s", str, sep);
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(argm);
}
