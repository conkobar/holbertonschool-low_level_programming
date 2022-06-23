#include "dog.h"

/**
 * free_dog - function to free dogs
 * @d: struct dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
