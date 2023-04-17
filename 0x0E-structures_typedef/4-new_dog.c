#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * new_dog -> create new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: doggo
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo = malloc(sizeof(dog_t));

	if (doggo == NULL)
		return (NULL);
	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;
	return (doggo);
}
