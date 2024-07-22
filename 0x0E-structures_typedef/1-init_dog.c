#include "dog.h"
/* betty style doc for function init_dog goes there */
/**
 * init_dog - Entry point
 *
 * @d: first arg
 * @name: second arg
 * @age: third arg
 * @owner: fourth arg
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
