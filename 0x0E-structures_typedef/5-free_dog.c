#include "dog.h"
#include <stdlib.h>
/**
 * free_dog -> frees da dogs
 * @d : dog_t type
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
