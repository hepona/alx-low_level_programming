#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * init_dog -> intialize a variable of type struct dog
 * @d: structure dog
 * @name: name of doggo
 * @age: age of doggo
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
