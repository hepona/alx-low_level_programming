#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog -> create new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: doggo
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	doggo->name = strdup(name);
	doggo->owner = strdup(owner);
	if (doggo->name == NULL || doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo->owner);
		free(doggo);
		return (NULL);
	}
	doggo->age = age;
	return (doggo);
}
