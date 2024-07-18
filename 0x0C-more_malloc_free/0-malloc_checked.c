#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/* betty style doc for function malloc_checked goes there */
/**
 * malloc_checked - Entry point
 *
 * @b: first arg
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
