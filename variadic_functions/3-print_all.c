#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *separator = "";

	va_start(args, format); /* Initialisation de la liste d'arguments */

	while (format && format[i]) /* Parcours du format */
	{
		if (format[i] == 'c') /* Caractère */
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (format[i] == 'i') /* Entier */
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (format[i] == 'f') /* Flottant */
		{
			printf("%s%f", separator, va_arg(args, double));
		}
		else if (format[i] == 's') /* string */
		{
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
		}
		else
		{
			i++;
			continue; /* Ignore les types inconnus */
		}
		separator = ", "; /* Met a jour le séparateur après le 1er élément */
		i++;
	}

	printf("\n"); /* Nouvelle ligne a la fin */
	va_end(args);  /* Libération de la liste d'arguments */
}
