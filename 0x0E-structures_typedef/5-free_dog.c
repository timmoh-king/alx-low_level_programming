#include "dog.h"

/**
 * free_dog - free a dog
 * @d: the new dog
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(ptr->name);
		free(ptr->age);
		free(ptr->owner);
	}
}
