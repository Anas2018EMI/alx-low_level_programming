#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/* betty style doc for function new_dog goes there */
/**
 * new_dog - Entry point
 *
 * @name: first arg
 * @age: second arg
 * @owner: third arg
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
