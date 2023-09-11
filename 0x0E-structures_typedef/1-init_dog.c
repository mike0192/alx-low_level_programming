#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner) 
{
strncpy(d->name, name, sizeof(d->name) - 1);
d->name[sizeof(d->name) - 1] = '\0';
d->age = age;
strncpy(d->owner, owner, sizeof(d->owner) - 1);
d->owner[sizeof(d->owner) - 1] = '\0';
}
