#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str, *sep;
	char c;
	int num;
	float f;

	va_start(args, format);
	sep = "";

	while (format && format[i])
	{
		c = format[i];

		if (c == 'c' || c == 'i' || c == 'f' || c == 's')
		{
			printf("%s", sep);

			if (c == 'c')
				printf("%c", va_arg(args, int));

			if (c == 'i')
			{
				num = va_arg(args, int);
				printf("%d", num);
			}

			if (c == 'f')
			{
				f = (float)va_arg(args, double);
				printf("%f", f);
			}

			if (c == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
			}

			sep = ", ";
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
