#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - defines new struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's person
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
