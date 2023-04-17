#ifndef DOG_H
#define DOG_H
/**
 * struct dog - represent a dog
 * @name: character
 * @age: float
 * @owner: character
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
