#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: variable
 * @age: variable
 * @owner: pointer
 *
 * Return: to new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *labrador;

	if (name == NULL || owner == NULL)
		return (NULL);

	labrador = malloc(sizeof(dog_t));
	if (labrador == NULL)
		return (NULL);
	labrador->name = malloc(strlen(name) + 1);

	if (labrador->name == NULL)
	{
		free(labrador);
		return (NULL);
	}
	strcpy(labrador->name, name);
	labrador->owner = malloc(strlen(owner) + 1);

	if (labrador->owner == NULL)
	{
		free(labrador->name);
		free(labrador);
		return (NULL);
	}
	strcpy(labrador->owner, owner);
	labrador->age = age;

	return (labrador);
}
