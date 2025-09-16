#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - crée un nouveau chien (alloue mémoire + copie nom et propriétaire)
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 * 
 * Return: pointeur vers le nouveau chien, ou NULL si erreur
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    char *name_copy, *owner_copy;

    /* Allouer mémoire pour la structure */
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    /* Copier le nom */
    name_copy = strdup(name);
    if (name_copy == NULL)
    {
        free(dog);
        return (NULL);
    }

    /* Copier le propriétaire */
    owner_copy = strdup(owner);
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(dog);
        return (NULL);
    }

    /* Initialiser les champs */
    dog->name = name_copy;
    dog->age = age;
    dog->owner = owner_copy;

    return (dog);
}

