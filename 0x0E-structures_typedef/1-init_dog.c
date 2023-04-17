#include "dog.h"
/**
 * init_dog -> intialize a variable of type struct dog
 * @d: structure dog
 * @name: name of doggo
 * @float: age of doggo
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
