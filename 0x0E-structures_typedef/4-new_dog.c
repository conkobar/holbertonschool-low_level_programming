#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog (wow)
 * @name: dog name
 * @age: dog age
 * @owner: dog person
 * Return: null if failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *updog = malloc(sizeof(dog_t));
	char *upname, *upowner;

	if (updog == NULL || name == NULL || owner == NULL)
	{
		free(updog);
		return (NULL);
	}

	upname = strdup(name);
	updog->name = upname;

	updog->age = age;

	upowner = strdup(owner);
	updog->owner = upowner;

	return (updog);
}
