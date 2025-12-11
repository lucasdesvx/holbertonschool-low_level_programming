#include "lists.h"

/**
 * list_len - that returns the number of elements
 * @h: pointer
 *
 * Return: to list_len
 */

size_t list_len(const list_t *h)
{
	size_t compter = 0;

	while (h)
	{
		compter++;
		h = h->next;
	}
	return (compter);
}
