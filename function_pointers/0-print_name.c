#include "function_pointers.h"

/**
 * print_name - prints a name using a callback
 * @name: name to print
 * @f: function to use to print the name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
