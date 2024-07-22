#include "dog.h"
#include <stdlib.h>
/* betty style doc for function new_dog goes there */
/**
 *
 * free_dog - - Entry point
 * @d: Pointer to dog_t structure to free
 * Return: d_t
 *
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
