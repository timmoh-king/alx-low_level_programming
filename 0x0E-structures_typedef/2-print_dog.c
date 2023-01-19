#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 * @d: the pointer to the new dog
 *
 * Return: nothing (void)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
