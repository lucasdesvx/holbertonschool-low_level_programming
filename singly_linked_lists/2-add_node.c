#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - that adds a new node at the beginning
 * @head: pointer who is pointed to another pointer
 * @str: a pointer
 *
 * Return: to add_node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nouveau;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);


	nouveau = malloc(sizeof(list_t));
	if (nouveau == NULL)
		return (NULL);


	 nouveau->str = strdup(str);
	 if (nouveau->str == NULL)
	 {
		 free(nouveau);
		 return (NULL);
	 }
	 while (str[len] != '\0')
		 len++;

	 nouveau->len = len;
	 nouveau->next = *head;

	 return (nouveau);
}
