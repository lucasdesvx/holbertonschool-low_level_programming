#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Libère la mémoire allouée pour un chien
 * @d: pointeur vers le chien à libérer
 */
void free_dog(dog_t *d)
{
    if (d)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}
