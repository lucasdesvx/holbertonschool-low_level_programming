#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a doubly linked list
 * @head: address of the list head
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	new_node->prev = current;
	current->next = new_node;

	return (new_node);
}
