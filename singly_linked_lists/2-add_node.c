#include "lists.h"

/**
 * add_node - 
 *
 *
 *
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t nouveau;
	unsigned int longueur = 0;
	
	nouveau = malloc(sizeof(list_t));
	
	if (!nouveau)
		return (NULL);
	
	nouveau->str = strdup(str);
	if (!nouveau->str)
	{
		free(nouveau);
		return (NULL);
