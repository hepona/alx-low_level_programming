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
} dog, dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
