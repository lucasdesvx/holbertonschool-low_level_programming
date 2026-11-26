#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a doubly linked list
 * @head: address of the list head
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
