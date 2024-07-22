#include "dog.h"
#include <stdlib.h>
/* betty style doc for function free_dog goes there */
/**
 * free_dog -  Entry point
 * @d: Pointer to dog_t structure to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
