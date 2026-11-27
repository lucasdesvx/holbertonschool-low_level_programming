#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints values according to their format specifiers
 * @format: string of type specifiers
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *separator = "";
	char *str;
	int i = 0;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", separator, va_arg(args, int));
			separator = ", ";
			break;
		case 'i':
			printf("%s%d", separator, va_arg(args, int));
			separator = ", ";
			break;
		case 'f':
			printf("%s%f", separator, va_arg(args, double));
			separator = ", ";
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
			separator = ", ";
			break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
