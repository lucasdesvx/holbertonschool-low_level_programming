#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - that adds a new node at the end of a list_t list
 * @head: pointer who is pointed to another pointer
 * @str: a pointer
 *
 * Return: to add_node_end
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nouveau;
	list_t *temps;


	nouveau = malloc(sizeof(list_t));
	if (nouveau == NULL)
		return (NULL);
	
	
	nouveau->str = strdup(str);
	if (nouveau->str == NULL)
	{
		free(nouveau);
		return (NULL);
	}
	nouveau->len = 0;
	while (str[nouveau->len])
		nouveau->len++;
	nouveau->next = NULL;


	if (*head == NULL)
	{
		*head = nouveau;
		return (nouveau);
	}
	temps = *head;
	while (temps->next)
		temps = temps->next;

	temps->next = nouveau;


	return (nouveau);
}
