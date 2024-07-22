#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/* betty style doc for function new_dog goes there */
/**
 * new_dog - Entry point
 *
 * @name: first arg
 * @age: second arg
 * @owner: third arg
 * Return: d_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(sizeof(char) * (len1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (len2 + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = name;
	d->owner = owner;
	d->age = age;
	return (d);
}
