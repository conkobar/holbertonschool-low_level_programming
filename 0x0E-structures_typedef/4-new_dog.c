#include "dog.h"

/**
 * new_dog - creates a new dog (wow)
 * @name: dog name
 * @age: dog age
 * @owner: dog person
 * Return: null if failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *updog = malloc(sizeof(struct dog));

	if (updog == NULL)
		return (NULL);

	updog->name = name;
	updog->age = age;
	updog->owner = owner;

	return (updog);
}
