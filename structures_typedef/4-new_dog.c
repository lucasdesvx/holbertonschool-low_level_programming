#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strdup - crée une copie de la chaîne s (sans utiliser strdup)
 * @s: chaîne à copier
 * Return: pointeur vers la nouvelle chaîne copiée
 */
char *_strdup(const char *s)
{
	char *copy;
	unsigned int i, len;

	if (s == NULL)
		return (NULL);

	len = 0;
	while (s[len])
		len++;

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = s[i];

	return (copy);
}

/**
 * new_dog - crée un nouveau chien (new dog)
 * @name: nom du chien
 * @age: âge du chien
 * @owner: nom du propriétaire
 * Return: pointeur vers le nouveau chien, ou NULL si erreur
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;
	return (d);
}
