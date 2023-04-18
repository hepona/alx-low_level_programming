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

	if (name == NULL || *name == '\0' || *owner == '\0' || owner == NULL || age < 0)
	{
		return (NULL);
	}
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	doggo->name = strdup(name);
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->owner = strdup(owner);
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	doggo->age = age;
	return (doggo);
}
