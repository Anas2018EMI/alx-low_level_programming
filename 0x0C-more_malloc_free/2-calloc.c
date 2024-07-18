#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/* betty style doc for function string_nconcat goes there */
/**
 * _calloc - Entry point
 *
 * @nmemb: first arg
 * @size: second arg
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

