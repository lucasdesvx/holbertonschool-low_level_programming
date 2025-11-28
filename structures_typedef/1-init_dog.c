#include "dog.h"
#include <stddef.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer
 * @name: pointer
 * @age: variable
 * @owner: pointer
 *
 * Return: to init_dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;


	d->name = name;
	d->age = age;
	d->owner = owner;
}
