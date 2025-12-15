#include "lists.h"
#include <stdlib.h>

/**
 * free_list - that frees a list_t list
 * @head: a pointer
 *
 * Return: to free_list
 */

void free_list(list_t *head)
{
	list_t *next;


	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
