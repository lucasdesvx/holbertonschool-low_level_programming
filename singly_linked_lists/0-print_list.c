#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - that prints all the elements of a list_t list
 * @h: pointer
 * @list_t: cant change this argument
 *
 * Return: to print_list
 */

size_t print_list(const list_t *h)
{
	size_t compter = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);


		h = h->next;
		compter++;
	}

	return (compter);
}
