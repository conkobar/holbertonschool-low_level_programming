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
	dog_t *updog;
	int upname, upowner;

	upname = strlen(name);
	upowner = strlen(owner);

	updog = malloc(sizeof(dog_t));
	if (updog == NULL)
		return (NULL);

	updog->name = malloc(sizeof(char) * (upname + 1));
	if (updog->name == NULL)
	{
		free(updog);
		return (NULL);
	}
	updog->owner = malloc(sizeof(char) * (upowner + 1));
	if (updog->owner == NULL)
	{
		free(updog);
		free(updog->name);
		return (NULL);
	}
	strcpy(updog->name, name);
	strcpy(updog->owner, owner);
	updog->age = age;

	return (updog);
}
