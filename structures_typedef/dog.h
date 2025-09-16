#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure pour un chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* Prototypes des fonctions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
