#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - a function that creates a new dog
 * @name:  the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(strlen(name) + 1 * sizeof(char));
	if (ptr->name == NULL)
		return (NULL);
	strcopy(ptr->name, name);

	ptr->owner = malloc(strlen(owner) + 1 * sizeof(char));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	strcopy(ptr->owner, owner);
	ptr->age = age;

	return (ptr);
}
