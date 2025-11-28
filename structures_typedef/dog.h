#ifndef MY_DOG
#define MY_DOG

/**
 * struct dog - with the following elements
 * @name: a pointer
 * @age: a variable
 * @owner: a pointer
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
