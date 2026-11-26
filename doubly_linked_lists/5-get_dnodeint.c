#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at a given index
 * @head: head of the list
 * @index: index of the node, starting from 0
 *
 * Return: node at index, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		head = head->next;
		index--;
	}

	return (head);
}
