#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: address of the list head
 * @idx: index where the node is inserted
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if insertion fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *previous;
	dlistint_t *new_node;
	unsigned int position;

	if (h == NULL)
		return (NULL);

	current = *h;
	previous = NULL;
	position = 0;
	while (current != NULL && position < idx)
	{
		previous = current;
		current = current->next;
		position++;
	}
	if (position != idx)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = previous;
	new_node->next = current;
	if (previous != NULL)
		previous->next = new_node;
	else
		*h = new_node;
	if (current != NULL)
		current->prev = new_node;

	return (new_node);
}
